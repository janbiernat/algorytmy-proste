program odbicie_pilki; 
{ 
 --== Odbicie pilki ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Turbo Pascal 7.0 
} 
uses crt; {CRT - biblioteka zawiera funkcje i procedury do 
                 obsługi m.in. klawiatury i ekranu.} 
var I, RuchX, RuchY, X, Y :Shortint; 
begin 
  TextBackground(Black); {Ustawienie koloru tla na czarny.} 
  ClrScr; {Wyczyszczenie ekranu.} 
  TextColor(LightGray); {Ustawienie koloru tekstu na jasnoszary.} 
  Writeln('--== Odbicie pilki ==--'); {Wyswietlenie na ekranie komunikatu znajdujacego sie pomiedzy apostrofami.} 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  {Rysuj pozioma linie przerywana.} 
  for I:= 0 to 79 do begin 
    GotoXY(I+1, 6); {Ustawienie kursora tekstowego na pozycji X i Y.} 
    Write('-'); 
  end; 
  {Odbicie pilki.} 
  RuchX:= 39; 
  RuchY:= 12; 
  X:= 1; 
  Y:= 1; 
  repeat 
    TextColor(LightGray); 
    GotoXY(RuchX, RuchY); 
    Write('*'); 
    Delay(222); {Zatrzymanie dzialania programu na 222 milisekundy.} 
    GotoXY(RuchX, RuchY); 
    TextColor(Black); 
    Write('*'); 
    {Obliczanie pozycji pileczki.} 
    RuchX:= RuchX+X; 
    RuchY:= RuchY+Y; 
    {Kontrola kolizji.} 
    if(RuchX <= 1) then X:= 1; 
    if(RuchX >= 79) then X:= -1; 
    if(RuchY <= 7) then Y:= 1; 
    if(RuchY >= 25) then Y:= -1; 
    {Wyswietlenie informacji o polozeniu pileczki.} 
    TextColor(LightGray); 
    GotoXY(2, 5); 
    Writeln('X: ', RuchX, '    Y: ', RuchY, '        '); 
  until KeyPressed; 
  {Wyswietlenie komunikatu pozegnalnego.} 
  ClrScr;
  Writeln('Czesc!!'); 
end. 
