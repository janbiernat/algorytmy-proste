program stat_ocen2; 
{ 
 --== Statystyka ocen 2.0 ==-- 
         Borland Delphi 7 Console Application 
 Copyright (c)by Jan T. Biernat 
} 
{$APPTYPE CONSOLE} 
 
uses SysUtils, Classes; 
 
const nSG_Ilosc  = 9; 
      tSG_Koniec = 'koniec'; 
      tSG_OcenyT :array[0..nSG_Ilosc-1] of string = ('1', '2', '2,5', 
                                                          '3', '3,5', 
                                                          '4', '4,5', 
                                                          '5', '6'); 
      tSG_SepTekstu = ';'; 
 
var nZG_OcenyLicznik :Integer; 
    nZG_OcenySuma    :Currency; 
    nZG_OcenyTab     :array[0..nSG_Ilosc-1] of integer; 
 
procedure jtbWprOceny(T :String; logInicjujTRUE :Boolean); 
var I :Integer; 
    L :Boolean; 
begin //jtbWprOceny. 
  if(logInicjujTRUE = FALSE) then begin 
    T:= Trim(T); 
    if(T<>'') then begin 
      //Wylicz œredni¹ z podanych ocen. 
      L:= FALSE; 
      for I:= 0 to nSG_Ilosc-1 do if(tSG_OcenyT[I] = T) then begin 
                                                               L:= TRUE; 
                                                               Break; 
                                                             end; 
      if(L = TRUE) then begin 
        nZG_OcenyLicznik:= nZG_OcenyLicznik+1; 
        nZG_OcenySuma:= nZG_OcenySuma+StrToFloat(tSG_OcenyT[I]); 
        for I:= 0 to nSG_Ilosc-1 do 
          if(tSG_OcenyT[I] = T) then nZG_OcenyTab[I]:= nZG_OcenyTab[I]+1; 
      end; 
    end; 
  end else 
  begin //Zainicjowanie zmiennych. 
    nZG_OcenyLicznik:= 0; 
    nZG_OcenySuma:= 0; 
    for I:= 0 to nSG_Ilosc-1 do nZG_OcenyTab[I]:= 0; 
  end; 
end; //jtbWprOceny. 
 
function jtbRozdzielTekstNaKolumny(tZnajdz :String; var tTekst :String):String; 
var nDl, nPoz :Integer; 
         tTym :String; 
begin {jtbRozdzielTekstNaKolumny.} 
  jtbRozdzielTekstNaKolumny:= ''; 
  tTekst:= Trim(tTekst); 
  if((tZnajdz<>'') and (tTekst<>'')) then begin 
    nDl:= 0; 
    nDl:= Length(tZnajdz); 
    nPoz:= 0; nPoz:= Pos(tZnajdz, tTekst); 
    jtbRozdzielTekstNaKolumny:= tTekst; 
    if(nPoz<>0) then begin 
      jtbRozdzielTekstNaKolumny:= Copy(tTekst, 1, nPoz-1); 
      tTym:= ''; 
      tTym:= Copy(tTekst, nPoz+nDl, Length(tTekst)); 
      tTekst:= ''; tTekst:= tTym; 
    end; 
  end; 
end; {jtbRozdzielTekstNaKolumny.} 
 
//Blok g³ówny/startowy. 
var tZG_ParamStr, T                     :String; 
    nZG_Licznik1, I, nZG_IleJestWierszy :Integer; 
    nZG_Liczba                          :Currency; 
    ListaDanych                         :TStringList; 
begin 
  Writeln('--== Statystyka ocen 2.0 (2012-07-06) ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
 
  //Zainicjowanie zmiennych. 
  nZG_Licznik1:= 0; 
 
  //Statystyka ocen 2. 
  jtbWprOceny('', TRUE); 
  tZG_ParamStr:= ''; 
  tZG_ParamStr:= AnsiLowerCase(Trim(ParamStr(1))); 
  if(tZG_ParamStr = '') then begin //Rêczne wprowadzanie danych. 
    Writeln; 
    Writeln('W trakcie wprowadzania ocen, wpisanie polecenia "koniec"'); 
    Writeln('powoduje przejscie do raportu.'); 
    Writeln; 
    repeat 
      nZG_Licznik1:= nZG_Licznik1+1; 
      Write(nZG_Licznik1, ': '); 
      T:= ''; 
      Readln(T); 
      if(T<>tSG_Koniec) then begin 
        nZG_Liczba:= 0; 
        nZG_Liczba:= StrToFloatDef(T, -1); 
        jtbWprOceny(FloatToStr(nZG_Liczba), FALSE); 
      end; 
    until(T = tSG_Koniec); 
  end else 
  begin  //Pobranie danych z pliku tekstowego. 
    if(FileExists(tZG_ParamStr) = TRUE) then begin 
      Writeln; 
      Writeln('Dane pobrano z pliku tekstowego "', tZG_ParamStr, '".'); 
 
      ListaDanych:= TStringList.Create; 
        ListaDanych.Clear; 
        ListaDanych.LoadFromFile(tZG_ParamStr); 
 
        nZG_IleJestWierszy:= 0; 
        for I:= 0 to ListaDanych.Count-1 do 
          if(Trim(ListaDanych.Strings[I])<>'') then 
            nZG_IleJestWierszy:= nZG_IleJestWierszy+1; 
        Writeln('Ilosc wierszy w pliku to: ', nZG_IleJestWierszy, '.'); 
 
        if(nZG_IleJestWierszy > 1) then begin 
          //Oblicz œredni¹ z pobranych ocen. 
          for I:= 0 to ListaDanych.Count-1 do begin 
            nZG_Liczba:= 0; 
            nZG_Liczba:= StrToFloatDef(Trim(ListaDanych.Strings[I]), -1); 
            jtbWprOceny(FloatToStr(nZG_Liczba), FALSE); 
          end; 
        end else 
        if(nZG_IleJestWierszy = 1) then begin 
          //Oblicz œredni¹ z pobranych ocen - 1 wiersz. 
          T:= ''; 
          T:= Trim(ListaDanych.Strings[0])+tSG_SepTekstu; 
          for I:= 1 to Length(T) do begin 
            nZG_Liczba:= 0; 
            nZG_Liczba:= StrToFloatDef(jtbRozdzielTekstNaKolumny(tSG_SepTekstu, T), -1); 
            jtbWprOceny(FloatToStr(nZG_Liczba), FALSE); 
          end; 
        end else 
        begin 
          Writeln; 
          Writeln('BLAD -?Plik o nazwie "', tZG_ParamStr, '" jest pusty!'); 
        end; 
        ListaDanych.Destroy; 
    end else begin 
               Writeln; 
               Writeln('BLAD -?Brak pliku o nazwie "', tZG_ParamStr, '"!'); 
             end; 
  end; 
 
  //Wyœwietlenie raportu na temat ocen. 
  if(nZG_OcenyLicznik > 0) then begin 
    Writeln; 
    Writeln('Raport:'); 
    Writeln(#32, #32, 'Suma podanych ocen wynosi   : ', nZG_OcenySuma:1:2); 
    Writeln(#32, #32, 'Podanych ocen jest          : ', nZG_OcenyLicznik); 
    Writeln(#32, #32, 'Srednia podanych ocen wynosi: ', nZG_OcenySuma/nZG_OcenyLicznik:1:2); 
    Writeln; 
    Writeln(#32, #32, 'Ilosc poszczegolnych ocen:'); 
    for I:= 0 to nSG_Ilosc-1 do 
      Writeln(#32, #32, #32, #32, tSG_OcenyT[I]:3, ': ', nZG_OcenyTab[I]:4, 
                                      ' (', IntToStr(Round(nZG_OcenyTab[I]*100/nZG_OcenyLicznik)), '%)'); 
  end; 
 
  //Zatrzymaj program do czasu naciœniêcia klawisza ENTER. 
  Writeln; Writeln; 
  Write('Nacisnij klawisz ENTER...'); 
  Readln; 
end. 