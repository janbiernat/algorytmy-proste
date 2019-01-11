program sortowanie_alfabetyczne; 
{ 
 --== Sortowanie alfabetyczne ==-- 
 Copyright(c)by Jan T. Biernat 
} 
uses crt; {CRT - biblioteka posiada funkcje/procedury 
                 do obslugi m.in. klawiatury i ekranu.} 
var   Tablica :array[0..14] of string; 
    I, AA, BB :Shortint; 
        tTemp :String; 
begin 
  TextBackground(Black); {Ustawienie czarnego koloru dla tla.} 
  TextColor(LightGray); {Ustawienie szarego koloru dla liter/czcionek.} 
  ClrScr; {Czyszczenie ekranu.} 
  Writeln('--== Sortowanie Alfabetyczne ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  {Wpisanie danych do tablicy.} 
  Tablica[0]:= 'Atari'; 
  Tablica[1]:= 'Amiga'; 
  Tablica[2]:= 'ZX Spectrum'; 
  Tablica[3]:= 'Amstrad'; 
  Tablica[4]:= 'Commodore'; 
  Tablica[5]:= 'Pegasus'; 
  Tablica[6]:= 'Atari Portfolio'; 
  Tablica[7]:= 'Atari TT'; 
  Tablica[8]:= 'Atari 65XE'; 
  Tablica[9]:= 'Joystick'; 
  Tablica[10]:= 'Rive Raid'; 
  Tablica[11]:= 'Robbo'; 
  Tablica[12]:= 'Fred'; 
  Tablica[13]:= 'Misja'; 
  Tablica[14]:= 'Lasermania'; 
  {Wyswietl dane.} 
  for I:= 0 to 14 do begin 
    GotoXY(4, 4+I); 
    Write(Tablica[I]); 
  end; 
  {Sortowanie alfabetyczne.} 
  for AA:= 0 to 14 do begin 
    for BB:= 0 to 14 do begin 
      if(Tablica[AA] < Tablica[BB]) then begin 
        tTemp:= ''; tTemp:= Tablica[BB]; 
        Tablica[BB]:= Tablica[AA]; 
        Tablica[AA]:= tTemp; 
      end; 
    end; 
  end; 
  {Wyswietl dane.} 
  for I:= 0 to 14 do begin 
    GotoXY(24, 4+I); 
    Write(Tablica[I]); 
  end; 
  {Nacisnij dowolny klawisz.} 
  Writeln; Writeln; Write('Nacisnij dowolny klawisz...'); 
  repeat until KeyPressed; {Petla wykonywana jest do czasu 
                            nacisniecia dowolnego klawisza 
                            przez uzytkownika.} 
end. 