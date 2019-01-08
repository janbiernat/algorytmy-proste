program literowanie;
{
 --== Borland Delphi 7 - Console Applications ==--
                            (Kurs podstawowy)
 Copyright(c)by Jan T. Biernat
}

{$APPTYPE CONSOLE}

uses SysUtils, Windows;

var Znaki :String;
    A     :Integer;
begin
  Writeln('--== Literowanie ==--');


  {Wprowadzanie danych.}
  Writeln;
  Znaki:= '';
  Write('Podaj dowolny tekst: ');
  Readln(Znaki);
  if (Znaki<>'') then {Je¿eli zostanie podany przynajmniej jeden znak,
                       to wykonaj poni¿sze instrukcje.}
  begin
    Writeln;
    Write('Literowanie: ');
    for A:= 1 to Length(Znaki) do {Wykonaj pêtle tyle razy ile jest znaków
                                   w podanym tekœcie. O iloœci powtórzeñ
                                   pêtli decyduje funkcja "Length".

                                   Length(X) - wynikiem dzia³ania funkcji
                                               jest wartoœæ liczbowa
                                               ca³kowita okreœlaj¹ca
                                               z ilu znaków sk³ada siê
                                               podany tekst.
                                               W miejsce parametru X nale¿y
                                               umieœciæ zmienna tekstowa.}
    begin
      Write(Znaki[A]); {Wyœwietlenie na ekranie znaku.

                        Zapis "Znaki[A]" pozwala na pobranie jednego
                        znaku, który le¿y na pozycji o numerze
                        przechowywanym w zmiennej liczbowej ca³kowitej "A".

                        Na przyk³ad: "Znaki[3]" - pobierze znak, który
                                     znajduje siê na trzeciej pozycji
                                     podanego tekstu.}
      Sleep(222); {Wstrzymanie dzia³ania programu na 222 milisekund.}
    end;
  end;


  {Zatrzymaj program do czasu naciœniêcia klawisza ENTER.}
  Writeln;
  Writeln;
  Write('Nacisnij klawisz ENTER...');
  Readln;
end.