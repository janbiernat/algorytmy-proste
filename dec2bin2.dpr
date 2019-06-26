program dec2bin2; 
{$APPTYPE CONSOLE} 
uses SysUtils; //Moduł zawiera procedury i funkcje do obsługi m.in. ekranu i klawiatury. 
function tFL12_345(tLiczba :String):String; 
var iLicznik :Shortint; 
    I        :Integer; 
    tZnaki   :String; 
begin 
  {tFL12_345 - Formatuje liczbę 12345 na 12 345.} 
  iLicznik:= 0; tZnaki:= ''; 
  for I:= Length(tLiczba) downto 1 do begin 
    tZnaki:= tLiczba[I]+tZnaki; 
    iLicznik:= iLicznik+1; 
    if(iLicznik > 3) then begin 
      iLicznik:= 0; 
      tZnaki:= #32+tZnaki; 
    end; 
  end; 
  {Usuń 1 pusty znak (tzw. spacje).} 
  if(tZnaki[1] = #32) then tFL12_345:= Copy(tZnaki, 2, Length(tZnaki)) 
  else tFL12_345:= tZnaki; 
end; {tFL12_345} 
function Dec2Bin(Liczba :Longint):String; //Zainicjowanie funkcji "Dec2Bin". 
var Wynik :String; 
begin //Dec2Bin - Przelicza liczbę 10 na liczbę 2. 
  Wynik:= ''; 
  if(Liczba > 0) then begin 
    repeat 
      if(Liczba mod 2 = 0) then Wynik:= '0'+Wynik 
      else Wynik:= '1'+Wynik; 
      Liczba := Liczba div 2; 
    until(Liczba = 0); 
    Dec2Bin:= Wynik; 
  end else Dec2Bin:= '?'; 
end; {Dec2Bin.} 
{Blok główny/startowy.} 
var LiczbaDec :Longint; 
begin 
  Writeln('--== Dec2Bin wer2 ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln('Systemy liczbowe: Dziesietny -> Dwojkowy'); 
  Writeln; Writeln; 
  {Pobranie liczby od użytkownika.} 
    Write('Podaj liczbe dwojkowa: '); 
    LiczbaDec:= 0; 
    Readln(LiczbaDec); 
  {Przeliczenie liczby 10 na liczbę 2.} 
    Writeln(LiczbaDec, ' = ', tFL12_345(Dec2Bin(LiczbaDec))); 
  {Poczekaj, aż użytkownik naciśnie klawisz ENTER.} 
    Writeln; Writeln; 
    Write('Nacisnij klawisz ENTER...'); 
    Readln; 
end. 
