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
  if (Znaki<>'') then {Jeżeli zostanie podany przynajmniej jeden znak,
                       to wykonaj poniższe instrukcje.}
  begin
    Writeln;
    Write('Literowanie: ');
    for A:= 1 to Length(Znaki) do {Wykonaj pętle tyle razy ile jest znaków
                                   w podanym tekście. O ilości powtórzeń
                                   pętli decyduje funkcja "Length".
                                   Length(X) - wynikiem działania funkcji
                                               jest wartość liczbowa
                                               całkowita określająca
                                               z ilu znaków składa się
                                               podany tekst.
                                               W miejsce parametru X należy
                                               umieścić zmienna tekstowa.}
    begin
      Write(Znaki[A]); {Wyświetlenie na ekranie znaku.
                        Zapis "Znaki[A]" pozwala na pobranie jednego
                        znaku, który leży na pozycji o numerze
                        przechowywanym w zmiennej liczbowej całkowitej "A".
                        Na przykład: "Znaki[3]" - pobierze znak, który
                                     znajduje się na trzeciej pozycji
                                     podanego tekstu.}
      Sleep(222); {Wstrzymanie działania programu na 222 milisekund.}
    end;
  end;

  {Zatrzymaj program do czasu naciśnięcia klawisza ENTER.}
  Writeln;
  Writeln;
  Write('Nacisnij klawisz ENTER...');
  Readln;
end.
