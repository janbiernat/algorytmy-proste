program upw; 
{ 
 --== Usuwanie powtarzających się wierszy (UPW) ==-- 
 Copyright (c)by Jan T. Biernat 
} 
{$APPTYPE CONSOLE} 
uses SysUtils, Classes; 
const tNazwaPliku = 'dane.txt'; 
var tParamStr1, tParamStr2, T :String; 
    PlikZ, PlikK              :TStringList; 
    Z, K                      :Integer; 
    logK                      :Boolean; 
begin 
  Writeln('--== Usuwanie powtarzajacych sie wierszy ==--'); 
  Writeln(StringOfChar(#32, 18), 'dla plikow tekstowych!'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; Writeln; 
  //Sprawdzenie parametrów. 
    tParamStr1:= ''; 
    tParamStr1:= AnsiLowerCase(Trim(ParamStr(1))); 
    tParamStr2:= ''; tParamStr2:= AnsiLowerCase(Trim(ParamStr(2))); 
  //Sprawdzenie parametrów podanych przy wywołaniu programu. 
    if(tParamStr1 = '/p') then begin 
      //Zapisz na dysk przykładowy plik tekstowy. 
        PlikZ:= TStringList.Create; 
          PlikZ.Clear; 
          for Z:= 0 to 3 do begin 
            PlikZ.Add('Poniedziałek'); 
            PlikZ.Add('Wtorek'); 
            PlikZ.Add('Środa'); 
            PlikZ.Add('Czwartek'); 
            PlikZ.Add('Piątek'); 
            PlikZ.Add('Sobota'); 
            PlikZ.Add('Niedziela'); 
            PlikZ.Add('Styczeń'); 
            PlikZ.Add('Luty'); 
            PlikZ.Add('Marzec'); 
            PlikZ.Add('Kwiecień'); 
            PlikZ.Add('Maj'); 
            PlikZ.Add('Czerwiec'); 
            PlikZ.Add('Lipiec'); 
            PlikZ.Add('Sierpień'); 
            PlikZ.Add('Wrzesień'); 
            PlikZ.Add('Październik'); 
            PlikZ.Add('Listopad'); 
            PlikZ.Add('Grudzień'); 
            PlikZ.Add('Jan'); 
            PlikZ.Add('Anna'); 
            PlikZ.Add('Marcin'); 
            PlikZ.Add('Robert'); 
            PlikZ.Add('Krzysztof'); 
            PlikZ.Add('Marta'); 
            PlikZ.Add('Teresa'); 
            PlikZ.Add('Ela'); 
            PlikZ.Add('Grażyna'); 
          end; 
          FileSetAttr(tNazwaPliku, faArchive); 
          DeleteFile(tNazwaPliku); 
          PlikZ.SaveToFile(tNazwaPliku); 
          PlikZ.Destroy; 
    end else 
    if(tParamStr1<>'') then begin 
      (*Usuń powtarzające się wiersze 
        i/lub posortuj alfabetycznie pozostałe.*) 
      if(FileExists(tParamStr1) = TRUE) then begin 
        PlikZ:= TStringList.Create; 
          PlikZ.Clear; 
          PlikZ.LoadFromFile(tParamStr1); 
          Writeln; 
          Writeln('Katalog          : ', AnsiLowerCase(Trim(GetCurrentDir))); 
          Writeln('Odczytany plik to: ', tParamStr1); 
          Writeln('Ilosc wierszy    : ', PlikZ.Count); 
          Write('Posortowano      : '); 
          if(tParamStr2 = '/s') then Writeln('TAK') 
          else Writeln('NIE'); 
          Writeln; 
          PlikK:= TStringList.Create; 
            PlikK.Clear; 
            for Z:= 0 to PlikZ.Count-1 do begin 
              T:= ''; 
              T:= Trim(PlikZ.Strings[Z]); 
              logK:= FALSE; 
              for K:= 0 to PlikK.Count-1 do begin 
                if(AnsiLowerCase(Trim(PlikK.Strings[K])) = AnsiLowerCase(T)) then begin 
                  logK:= TRUE; 
                  Break; 
                end; 
              end; 
              //Dodaj wiersz do drugiej listy wewnętrznej. 
                if(logK = FALSE) then begin 
                  PlikK.Add(T); 
                  Write('.'); 
                end; 
            end; 
            Writeln; Writeln; 
            Writeln('Zadanie wykonane!'); 
            Writeln('Ilosc wierszy po usunieciu nadmiarowych danych to: ', PlikK.Count); 
            //Sortowanie wierszy. 
              if(tParamStr2 = '/s') then PlikK.Sort; 
            //Zapisz dane do pliku tekstowego. 
              FileSetAttr(tParamStr1, faArchive); 
              DeleteFile(tParamStr1); 
              PlikK.SaveToFile(tParamStr1); 
            PlikK.Destroy; 
          PlikZ.Destroy; 
      end else begin 
                 //Informacja o braku pliku na dysku. 
                   Writeln; 
                   Writeln('BLAD -?Brak na dysku pliku o podanej nazwie!'); 
               end; 
    end else 
    begin 
      //Komunikat o braku parametrów oraz wyświetlenie pomocy. 
        Writeln; 
        Writeln('BLAD -?Brak podanych parametrow!'); 
        Writeln(''); 
        Writeln(StringOfChar(#32, 3)+'upw /p - Generuje przykladowy plik tekstowy do przetestowania programu.'); 
        Writeln(''); 
        Writeln(StringOfChar(#32, 3)+'upw nazwa_pliku - Wczytuje plik tekstowy o podanej nazwie'); 
        Writeln(StringOfChar(#32, 21)+'oraz usuwa powtarzajace sie wiersze.'); 
        Writeln(StringOfChar(#32, 21)+'W miejsce parametru "nazwa_pliku" nalezy wpisac'); 
        Writeln(StringOfChar(#32, 21)+'nazwe pliku, np. "dane.txt".'); 
        Writeln(''); 
        Writeln(StringOfChar(#32, 3)+'upw nazwa_pliku /s - Wczytuje plik tekstowy o podanej nazwie'); 
        Writeln(StringOfChar(#32, 24)+'oraz usuwa powtarzajace sie wiersze.'); 
        Writeln(StringOfChar(#32, 24)+'W miejsce parametru "nazwa_pliku" nalezy wpisac'); 
        Writeln(StringOfChar(#32, 24)+'nazwe pliku, np. "dane.txt".'); 
        Writeln(StringOfChar(#32, 24)+'Po zlikwidowaniu powtarzajacych sie wierszy,'); 
        Writeln(StringOfChar(#32, 24)+'pozostale zostana posortowane alfabetycznie.'); 
      //Zatrzymaj program do czasu naciśnięcia klawisza ENTER. 
        Writeln; Writeln; 
        Write('Nacisnij klawisz ENTER...'); Readln; 
    end; 
end. 
