program ascii_t; 
{ 
 --== Tablica ASCII ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Turbo Pascal 7 - Kurs podstawowy 
 = 
 Tablica kodow ASCII (ang. American Standard Code for Information 
 Interchange) stanowi zestaw kodow uzywanych do reprezentacji znakow 
 (liter, cyfr, znakow specjalnych np. @, $, # itp.). 
 Kazdy znak w tabeli ma przyporzadkowana wartosc liczbowa dziesietna, 
 np. litera duza "A"  ma wartosc dziesietna 65. 
 Tablica ASCII sklada sie 255 znakow, ktore podzielone sa na kilka grup: 
   > Od 0 do 31 - znaki sterujace np. klawiszem ENTER, TAB, drukarka; 
   > Od 32 do 126 - znaki podstawowe; 
   > Od 127 do 255 - znaki dodatkowe (zawieraja znaki graficzne, 
                     oraz znaki polskie itp.). 
 Podstawowa tabela ASCII (tj. od 0 do 127) nie podlega wymianie, 
 natomiast rozszerzona tablica (tj. od 128 do 255) moze ulegac zmianie 
 np. w celu zakodowania polskich znakow. 
} 
uses crt; {CRT - biblioteka zawiera funkcje i procedury do obslugi 
                 m.in. klawiatury i ekranu.} 
var I, iLicznik :Integer; 
begin 
  Writeln('--== Tabela kodow ASCII ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  {Tablica kodow ASCII od znaku pustego tzw. spacji.} 
  Writeln; 
  iLicznik:= 0; 
  for I:= 0 to 223 do begin 
    iLicznik:= iLicznik+1; 
    Write('|', #32, CHR(32+I), #32); 
    if((32+I) < 100) then Write('0', 32+I) 
    else Write(32+I); 
    Write(#32); 
    if(iLicznik > 7) then begin 
      Write('|'); 
      Writeln; 
      iLicznik:= 0; 
    end; 
  end; 
  {Czekaj, az uzytkownik nacisnie klawisz ENTER.} 
  Writeln; Writeln; Write('Nacisnij klawisz ENTER...'); Readln; 
end. 