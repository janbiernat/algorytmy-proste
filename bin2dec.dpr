program bin2dec; 
{$APPTYPE CONSOLE} 
uses SysUtils; //Modu³ zawiera procedury i funkcje do obs³ugi m.in. ekranu i klawiatury. 
function Dec2Bin(Liczba :Longint):String; //Zainicjowanie funkcji "Dec2Bin". 
var Wynik :String; 
begin //Dec2Bin - Przelicza liczbê 10 na liczbê 2. 
  Wynik:= ''; 
  if(Liczba > 0) then begin 
    repeat 
      if(Liczba mod 2 = 0) then Wynik:= '0'+Wynik 
      else Wynik:= '1'+Wynik; 
      Liczba := Liczba div 2; 
    until(Liczba = 0); 
    Dec2Bin:= Wynik; 
  end else Dec2Bin:= ''; 
end; {Dec2Bin.} 
{Blok g³ówny/startowy.} 
var LiczbaBin, Wynik :String; 
    I                :Longint; 
begin 
  Writeln('--== Bin2Dec ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln('Systemy liczbowe: Dwojkowy -> Dziesietny'); 
  Writeln; Writeln; 
  {Pobranie liczby od u¿ytkownika.} 
    Write('Podaj liczbe dwojkowa: '); 
    LiczbaBin:= ''; 
    Readln(LiczbaBin); 
  {Przeliczenie liczby 10 na liczbê 2.} 
    Write(LiczbaBin, ' = '); 
    for I:= 0 to 2147483647 do begin 
      Wynik:= ''; Wynik:= Dec2Bin(I); 
      if(LiczbaBin = Wynik) then begin 
        Write(I); break; 
      end; 
    end; 
  {Poczekaj, a¿ u¿ytkownik naciœnie klawisz ENTER.} 
    Writeln; Writeln; 
    Write('Nacisnij klawisz ENTER...'); 
    Readln; 
end. 