program silnia;
{--== N! ==--
 Copyright (c)by Jan T. Biernat}

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
  //Wykonanie obliczeñ.
    iSilnia:= 1;
    if(iLiczba > -1) then begin
      for I:= 1 to iLiczba do begin
        iSilnia:= iSilnia*I;
      end;
      Writeln(iLiczba, '! = ', iSilnia);
    end;


  {Zatrzymanie programu do czasu naciœniêcia klawisza ENTER.}
  Writeln; Write('Nacisnij klawisz ENTER...');
  Readln; {Zatrzymanie programu do czasu naciœniêcia klawisza ENTER.}
end.
