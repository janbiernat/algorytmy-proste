program formatowanie_liczb; 
{ 
 --== Formatowanie liczb ==-- 
 Copyright(c) by Jan T. Biernat 
 Borland Turbo Pascal 7.0 (Kurs podstawowy) 
} 
uses Crt; {CRT - biblioteka zawiera funkcje i procedury 
                 do obslugi m.in. klawiatury i ekranu.} 
function tFL12_345(tLiczba :String):String; 
var I, iLicznik :Integer; 
    tZnaki      :String; 
begin 
  {tFL12_345 - Formatuje liczbe 12345 na 12 345.} 
  iLicznik:= 0; tZnaki:= ''; 
  for I:= Length(tLiczba) downto 1 do begin 
    tZnaki:= tLiczba[I]+tZnaki; 
    iLicznik:= iLicznik+1; 
    if(iLicznik > 2) then begin 
      iLicznik:= 0; 
      tZnaki:= #32+tZnaki; 
    end; 
  end;
  {Usun 1 pusty znak (tzw. spacje).} 
  if(tZnaki[1] = #32) then tFL12_345:= Copy(tZnaki, 2, Length(tZnaki)) 
  else tFL12_345:= tZnaki; 
end; {tFL12_345} 
{Blok glowny programu.} 
begin 
  Writeln; 
  Writeln('--== Formatowanie liczb ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  {Formatuj liczbe.} 
  Writeln('         1 = ', tFL12_345('1')); 
  Writeln('        12 = ', tFL12_345('12')); 
  Writeln('       123 = ', tFL12_345('123')); 
  Writeln('      1234 = ', tFL12_345('1234')); 
  Writeln('     12345 = ', tFL12_345('12345')); 
  Writeln('    123456 = ', tFL12_345('123456')); 
  Writeln('   1234567 = ', tFL12_345('1234567')); 
  Writeln('  12345678 = ', tFL12_345('12345678')); 
  Writeln(' 123456789 = ', tFL12_345('123456789')); 
  Writeln('0123456789 = ', tFL12_345('0123456789')); 
  {Czekaj, az klawisz ENTER zostanie nacisniety.} 
  Writeln; Writeln; 
  Write('Nacisnij klawisz ENTER...'); Readln; 
end. 