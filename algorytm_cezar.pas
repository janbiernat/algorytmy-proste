program szyfr_cezara; 
{ 
 --== Szyfr Cezara ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Szyfr Cezara - jedna z najprostszych technik szyfrowania. 
 Jest to rodzaj szyfru podstawieniowego, w ktorym kazda 
 litera tekstu jawnego zastepowana jest inna (oddalona 
 od niej o stala liczbe pozycji w alfabecie). 
 Przy czym kierunek zamiany musi byc zachowany. 
} 
uses crt; {CRT - biblioteka zawiera funkcje i procedury, 
                 ktore sluza do obslugi m.in. klawiatury i ekranu.} 
var Tekst, Rezultat :String; 
    Przesun         :Shortint; 
    I               :Integer; 
begin 
  Writeln('--== Szyfr Cezara ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  {Szyfr Cezara} 
  Tekst:= ''; Przesun:= 0; 
  Write('Podaj tekst: '); Readln(Tekst); 
  Write('Wartosc przesuniecia: '); Readln(Przesun); 
  Rezultat:= ''; 
  for I:= 1 to Length(Tekst) do 
    Rezultat:= Rezultat+CHR(ORD(Tekst[I])+Przesun); 
  Writeln('Wynik: ', Rezultat); 
  {Czekaj, az uzytkownik nacisnie klawisz ENTER.} 
  Writeln; Writeln; Write('Nacisnij klawisz ENTER...'); readln; 
end. 