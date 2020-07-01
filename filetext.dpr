program plik_tekstowy;
{
 --== Plik tekstowy ==--
 Copyright (c)by Jan T. Biernat
 Borland Delphi 3 - Console Applications (Kurs podstawowy)
}
{$APPTYPE CONSOLE}
uses SysUtils, Classes;
procedure KomunikatNacisnijENTER;
begin
  //Zatrzymaj program do czasu naciśnięcia klawisza ENTER.
    Writeln; Writeln;
    Write('Nacisnij klawisz ENTER...'); Readln;
end;
//=
procedure Komunikat(iJakaInfo :Shortint; Str :String);
begin
  Str:= Trim(Str);
  if(Str = '') then Str:= 'Oj!';
  Writeln; Writeln;
  if(iJakaInfo = 1) then Write('INFO:',#32)
  else if(iJakaInfo = 2) then Write('UWAGA!', #32)
       else Write('BLAD -?');
  Write(Str);
  KomunikatNacisnijENTER;
end;
//=
function tNazwaPliku(Str :String):String;
var tNazwa, tRoz :String;
begin
  Str:= AnsiLowerCase(Trim(Str));
  if(Str <> '') then begin
    tRoz:= ''; tRoz:= ExtractFileExt(Str);
    tNazwa:= ''; tNazwa:= ExtractFileName(Str);
    Result:= Copy(tNazwa, 1, Length(tNazwa)-Length(tRoz))+'-wynik.txt';
  end else Result:= '';
end;
//=
function Menu:String;
var tKlaw :String;
begin
  Writeln(#32, #32, '[U] Usuwanie zduplikowanych wierszy');
  Writeln(#32, #32, '[S] Sortowanie alfabetyczne wierszy');
  Writeln(#32, #32, '[O] Odwracanie listy');
  Writeln(StringOfChar(#32, 6), 'Np.:');
  Writeln(StringOfChar(#32, 6), 'Atari             Amstrad');
  Writeln(StringOfChar(#32, 6), 'ZX Spektrum 48 => Commodore');
  Writeln(StringOfChar(#32, 6), 'Commodore      => ZX Spektrum');
  Writeln(StringOfChar(#32, 6), 'Amstrad           Atari');
  Writeln(#32, #32, '[W] Usuwanie zduplikowanych wierszy i posortowanie ich alfabetyczne');
  Writeln(#32, #32, '[L] Usuwanie zduplikowanych wierszy i odwracanie listy');
  Writeln(#32, #32, '[X] Zamknij program');
  Write(StringOfChar(#32, 6), 'Co wybierasz?: ');
  tKlaw:= ''; 
  Readln(tKlaw);
  tKlaw:= AnsiLowerCase(Trim(tKlaw));
  if(tKlaw = 'x') then tKlaw:= ''; //Gdy z menu wybierzemy polecenie "Zamknij program".
  Result:= tKlaw;
end;
//=
procedure WykonajZadania(tPlikZ, tPlikW :String; iZadanieNr :Shortint;
                         lUsunDuplikaty :Boolean);
var PlikDanych, ListaTym, ListaWynikowa :TStringList;
    A, B, I                             :Integer;
    lCzyIstnieje                        :Boolean;
begin
  tPlikZ:= AnsiLowerCase(Trim(tPlikZ));
  tPlikW:= AnsiLowerCase(Trim(tPlikW));
  if((FileExists(tPlikZ) = TRUE) and (tPlikW <> '')) then begin
    PlikDanych:= TStringList.Create;
    ListaWynikowa:= TStringList.Create;
    ListaTym:= TStringList.Create;
        PlikDanych.Clear;
        ListaWynikowa.Clear;
        ListaTym.Clear;
        PlikDanych.LoadFromFile(tPlikZ);
        //Usuń zduplikowane (powtarzające się) wiersze.
          if(lUsunDuplikaty = TRUE) then begin
            for A:= 0 to PlikDanych.Count-1 do begin
              lCzyIstnieje:= FALSE;
              for B:= 0 to ListaWynikowa.Count-1 do begin
                if(AnsiLowerCase(Trim(PlikDanych.Strings[A])) = AnsiLowerCase(Trim(ListaWynikowa.Strings[B]))) then begin
                  lCzyIstnieje:= TRUE; Break;
                end;
              end;
              if(lCzyIstnieje = FALSE) then ListaWynikowa.Add(Trim(PlikDanych.Strings[A]));
            end;
          end;
        //Zadania do wykonania.
          if(lUsunDuplikaty = FALSE) then begin
            //Nie przejmuj się powtarzającymi wierszami.
              if(iZadanieNr = 1) then begin
                //Sortowanie alfabetyczne.
                  for I:= 0 to PlikDanych.Count-1 do
                    ListaWynikowa.Add(Trim(PlikDanych.Strings[I]));
                  ListaWynikowa.Sort;
              end else if(iZadanieNr = 2) then begin
                         //Odwracanie listy. ListaTym
                           for I:= PlikDanych.Count-1 downto 0 do
                             ListaWynikowa.Add(Trim(PlikDanych.Strings[I]));
                       end;
          end else begin
                     //Usuwaj powtarzające się wiersze.
                       if(iZadanieNr = 3) then ListaWynikowa.Sort
                       else if(iZadanieNr = 4) then begin
                              //Lista odwrócona.
                                ListaTym.Clear;
                                for I:= 0 to ListaWynikowa.Count-1 do
                                  ListaTym.Add(ListaWynikowa.Strings[I]);
                                ListaWynikowa.Clear;
                                for I:= ListaTym.Count-1 downto 0 do
                                  ListaWynikowa.Add(Trim(ListaTym.Strings[I]));
                            end;
                   end;
        //Zapisz dane wynikowe do pliku tekstowego.
          try
              FileSetAttr(tPlikW, faArchive);
              DeleteFile(tPlikW);
              ListaWynikowa.SaveToFile(tPlikW);
          except end;
    ListaTym.Destroy;
    ListaWynikowa.Destroy;
    PlikDanych.Destroy;
  end;
end;
//Blok startowy/główny.
const tSG_BladBrakPliku = 'BLAD -?Brak pliku o podanej nazwie!';
var tKatalogPlikNazwa, tPlikRoz, tPlikWynikowy, tParam1 :String;
begin
  Writeln('--== Plik tekstowy [filetext.exe] (20200701) ==--');
  Writeln('Copyright (c)by Jan T. Biernat');
  Writeln; Writeln;
  tKatalogPlikNazwa:= ''; tKatalogPlikNazwa:= AnsiLowerCase(Trim(ParamStr(1)));
  if(FileExists(tKatalogPlikNazwa) = TRUE) then begin
    Writeln('Wczytany plik tekstowy to:');
    Writeln('"', tKatalogPlikNazwa, '".');
    tPlikRoz:= ''; tPlikRoz:= AnsiLowerCase(Trim(ExtractFileExt(tKatalogPlikNazwa)));
    if((tPlikRoz = '.txt') or (tPlikRoz = '.asc')
    or (tPlikRoz = '.cfg') or (tPlikRoz = '.ini')) then begin
      tPlikWynikowy:= ''; tPlikWynikowy:= ExtractFilePath(tKatalogPlikNazwa)+tNazwaPliku(tKatalogPlikNazwa);
      Writeln; Writeln('Plik wynikowy to:'); Writeln('"', tPlikWynikowy, '".');
      Writeln; Writeln; 
      //Czy podano 2 parametr?
        tParam1:= ''; tParam1:= AnsiLowerCase(Trim(ParamStr(2)));
        if(tParam1 = '') then tParam1:= Menu;
        if((tParam1 = '/u') or (tParam1 = 'u')) then WykonajZadania(tKatalogPlikNazwa, tPlikWynikowy, 0, TRUE)
        else if((tParam1 = '/s') or (tParam1 = 's')) then WykonajZadania(tKatalogPlikNazwa, tPlikWynikowy, 1, FALSE)
             else if((tParam1 = '/o') or (tParam1 = 'o')) then WykonajZadania(tKatalogPlikNazwa, tPlikWynikowy, 2, FALSE)
                  else if((tParam1 = '/w') or (tParam1 = 'w')) then WykonajZadania(tKatalogPlikNazwa, tPlikWynikowy, 3, TRUE)
                       else if((tParam1 = '/l') or (tParam1 = 'l')) then WykonajZadania(tKatalogPlikNazwa, tPlikWynikowy, 4, TRUE)
    end else Komunikat(0, 'To nie jest plik tekstowy!');
  end else begin
             Writeln('Program "filetext.exe" nalezy uruchomic z dwoma parametrami.');
             Writeln('Na przyklad: filetext.exe dane.txt /u');
             Writeln;
             Writeln('W miejsce parametru 1 nalezy podac nazwe pliku np. "dane.txt".');
             Writeln('W miejsce parametru 2 nalezy podac przelacznik.');
             Writeln;
             Writeln('Spis przelacznikow:');
             Writeln('/U - Usuwanie zduplikowanych wierszy');
             Writeln('/S - Sortowanie alfabetyczne wierszy');
             Writeln('/O - Odwracanie listy');
             Writeln(StringOfChar(#32, 5), 'Np.:');
             Writeln(StringOfChar(#32, 5), 'Atari             Amstrad');
             Writeln(StringOfChar(#32, 5), 'ZX Spektrum 48 => Commodore');
             Writeln(StringOfChar(#32, 5), 'Commodore      => ZX Spektrum');
             Writeln(StringOfChar(#32, 5), 'Amstrad           Atari');
             Writeln('/W - Usuwanie zduplikowanych wierszy i posortowanie ich alfabetyczne');
             Writeln('/L - Usuwanie zduplikowanych wierszy i odwracanie listy');
             KomunikatNacisnijENTER;
           end;
end.