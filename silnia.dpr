program silnia;
{--== N! ==--
 Copyright (c)by Jan T. Biernat
 Borland Delphi 7 - Console Applications}

{$APPTYPE CONSOLE}

uses SysUtils;

var iLiczba, I :Integer;
    iSilnia    :Longint;
begin
  Writeln('--== n! ==--');
  Writeln('Copyright (c)by Jan T. Biernat');
  Writeln;

  //Pobranie danych z klawiatury.
    Writeln; Write('Podaj liczbe: '); Readln(iLiczba);
  //Wykonanie obliczeń.
    iSilnia:= 1;
    if(iLiczba > -1) then begin
      for I:= 1 to iLiczba do begin
        iSilnia:= iSilnia*I;
      end;
      Writeln(iLiczba, '! = ', iSilnia);
    end;


  {Zatrzymanie programu do czasu naciśnięcia klawisza ENTER.}
  Writeln; Write('Nacisnij klawisz ENTER...');
  Readln; {Zatrzymanie programu do czasu naciśnięcia klawisza ENTER.}
end.
