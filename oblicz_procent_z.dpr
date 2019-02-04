program oblicz_procent_z; 
{ 
 --== Oblicz procent z ... ==-- 
 Copyright (c)by Jan T. Biernat 
} 
{$APPTYPE CONSOLE} 
 
uses SysUtils; 
 
const tZamknij = 'koniec'; 
var tLiczba                :String; 
    nStalaWartosc, nLiczba :Single; 
begin 
  Writeln('--== Oblicz procent z ... ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
 
  {Rozpocznij.} 
  repeat 
    Writeln; 
    Write('Podaj maksymalna stala wartosc: '); 
    tLiczba:= ''; 
    Readln(tLiczba); 
    if(tLiczba<>tZamknij) then begin 
      nStalaWartosc:= 0; 
      nStalaWartosc:= StrToFloatDef(Trim(tLiczba), 0); 
      if(nStalaWartosc > 0) then 
        repeat 
          Writeln; 
          Writeln(StringOfChar('-', 44)); 
          Writeln; 
          Writeln('Podana maksymalna wartosc to ', nStalaWartosc:1:2, '.'); 
          Writeln; 
          Write('Podaj liczbe: '); 
          tLiczba:= ''; 
          Readln(tLiczba); 
          if(tLiczba<>'') then begin 
            nLiczba:= 0; 
            nLiczba:= StrToFloatDef(Trim(tLiczba), 0); 
            if(nLiczba > nStalaWartosc) then 
              Writeln('BLAD -?Nie mozesz wprowadzic wartosci wiekszej od wartosci maksymalnej!') 
            else begin 
                   Writeln; 
                   Writeln(nLiczba:1:2, ' z ', nStalaWartosc:1:2, ' = ', nLiczba*100/nStalaWartosc:1:2, '%.'); 
                 end; 
          end; 
        until(tLiczba = tZamknij) or (tLiczba = '') 
      else Writeln('BLAD -?Podana wartosc musi byc wieksza od zera!'); 
    end; 
  until (tLiczba = tZamknij); 
end. 