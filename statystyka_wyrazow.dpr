program statystyka_wyrazow; 
{ 
 --== Statystyka wyrazów ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Delphi 3 - Console Applications (Kurs podstawowy) 
} 
{$APPTYPE CONSOLE} 
uses SysUtils, Windows, Classes; 
 
function tFL12_345(tLiczba :String):String; 
var I, iLicznik :Integer; 
    tZnaki      :String; 
begin 
  {tFL12_345 - Formatuje liczbę 12345 na 12 345.} 
  iLicznik:= 0; tZnaki:= ''; 
  for I:= Length(tLiczba) downto 1 do begin 
    tZnaki:= tLiczba[I]+tZnaki; 
    iLicznik:= iLicznik+1; 
    if(iLicznik > 2) then begin 
      iLicznik:= 0; 
      tZnaki:= #32+tZnaki; 
    end; 
  end; 
  {Usuń 1 pusty znak (tzw. spacje).} 
  if(tZnaki[1] = #32) then tFL12_345:= Copy(tZnaki, 2, Length(tZnaki)) 
  else tFL12_345:= tZnaki; 
end; {tFL12_345} 
 
{iZnakiBezSpacji - Podaje ilość znaków bez spacji w podanym tekście (ciągu znaków).} 
function iZnakiBezSpacji(Tekst :String):Integer; 
var T :String; 
    I :Integer; 
begin 
  T:= ''; {Wyczyszczenie zmiennej tekstowej "T".} 
  for I:= 1 to Length(Tekst) do begin 
    if(Tekst[I] <> CHR(32)) then T:= T+Tekst[I]; 
  end; 
  Result:= Length(T); 
end; 
 
{iWyrazowJest - Podaje ilość wyrazów w podanym tekście (ciągu znaków).} 
function iWyrazowJest(Tekst :String):Integer; 
var I :Longint; 
    L :Integer; 
begin 
  Tekst:= Tekst+CHR(32); {Dodanie do podanego ciągu znaków, znaku spacji.} 
  L:= 0; {Wyzerowanie zmiennej liczbowej "L".} 
  for I:= 1 to Length(Tekst) do begin 
    if((Tekst[I]<>CHR(32)) and (Tekst[I+1] = #32)) then L:= L+1; 
  end; 
  Result:= L; 
end; 
 
{Blok startowy/główny.} 
var PlikDanych                     :TStringList; //Zadeklarowanie zmiennej typu TStringList. 
    tNazwaPliku, tPobierzWiersz    :String; 
    I, iTekstZeSpacjami            :Longint; 
    iTekstBezSpacji, iIloscWyrazow :Longint; 
begin  
  Writeln('--== Statystyka wyrazow ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  
  {Informacja} 
  Writeln('UWAGA: Program wykonuje statystyke wyrazow tylko dla plikow tekstowych!'); 
  
  {Statystyka wyrazów} 
  tNazwaPliku:= ''; tNazwaPliku:= Trim(AnsiLowerCase(ParamStr(1))); 
  if(tNazwaPliku<>'') then begin 
                      {Jeżeli została podana nazwa pliku, to wykonaj poniższe instrukcje. 
                       W innym przypadku wyświetl komunikat o błędzie 
                       (tj. "BLAD -?Brak nazwy pliku jako parametru!"), który 
                       znajduje się po instrukcji ELSE.} 
    if(FileExists(tNazwaPliku) = TRUE) then begin  //Jeżeli plik o podanej nazwie znajduje się fizycznie na dysku, 
                                                   //to wykonaj poniższe instrukcje. 
      Writeln; Writeln;  
      Writeln('Wczytany plik tesktowy to:'); 
      Writeln('"', tNazwaPliku, '".'); 
      PlikDanych:= TStringList.Create;        //Utworzenie klasy "PlikDanych". 
        PlikDanych.Clear;                     //Wyczyszczenie zawartości listy. 
        PlikDanych.LoadFromFile(tNazwaPliku); //Wczytanie zawartości pliku tekstowego do listy. 
        //Wykonanie statystyki wyrazów. 
        Writeln; Writeln; Writeln('Raport:'); 
        Writeln('Ilosc wierszy: ', tFL12_345(IntToStr(PlikDanych.Count))); 
        iTekstZeSpacjami:= 0; //Wyzerowanie zmiennej. 
        iTekstBezSpacji:= 0; 
        iIloscWyrazow:= 0; 
        for I:= 0 to PlikDanych.Count-1 do begin 
          tPobierzWiersz:= ''; 
          tPobierzWiersz:= Trim(PlikDanych.Strings[I]); 
          iIloscWyrazow:= iIloscWyrazow+iWyrazowJest(tPobierzWiersz); 
          iTekstBezSpacji:= iTekstBezSpacji+iZnakiBezSpacji(tPobierzWiersz); 
          iTekstZeSpacjami:= iTekstZeSpacjami+Length(tPobierzWiersz); 
        end; 
        Writeln('Ilosc wyrazow: ', tFL12_345(IntToStr(iIloscWyrazow))); 
        Writeln('Ilosc znakow (bez spacji) : ', tFL12_345(IntToStr(iTekstBezSpacji))); 
        Writeln('Ilosc znakow (ze spacjami): ', tFL12_345(IntToStr(iTekstZeSpacjami))); 
        PlikDanych.Destroy; //Usuwamy listę z pamięci komputera. 
    end else begin 
               Writeln; 
               Writeln('BLAD -?Brak na dysku pliku o podanej nazwie!'); 
             end; 
  end else begin 
             Writeln; 
             Writeln('BLAD -?Brak nazwy pliku jako parametru!'); 
           end; 
  {Zatrzymaj program do czasu naciśnięcia klawisza ENTER.} 
  Writeln; Writeln; Write('Nacisnij klawisz ENTER...'); Readln; 
end. 