program losowanie_liczb;
{
 --== Borland Turbo Pascal 7.0 (Kurs podstawowy) ==--
 Copyright(c)by Jan T. Biernat
}
uses crt;
var A :Integer;
begin
  ClrScr;
  Writeln('--== Losowanie liczb ==--'); {Wyswietlenie na ekranie tekstu
                                         znajdujacego sie pomiedzy
                                         apostrofami.}
  Writeln('Copyright (c)by Jan T. Biernat');
  Writeln; {Przesuniecie kursora tekstowego o jeden wiersz w dol.}
  Randomize; {Zainicjowanie generatora liczb pseudolosowych.}
  A:= 0; {Wyzerowanie zmiennej liczbowej calkowitej "A".}
  A:= Random(99); {Wylosowanie liczby z podanego zakresu i przypisanie jej
                   do zmiennej liczbowej calkowitej "A".
                   Random(X) - Losuje liczbe z podanego zakresu liczb.
                               W miejsce parametru X nalezy umiescic
                               zmienna liczbowa calkowita lub
                               liczbe calkowita.
                               Wylosowana liczba bedzie z przedzialu od 0 do X-1.
                               Na przyklad:
                               Gdy w miejsce parametru X wpiszemy 11, to
                               maksymalna wylosowana liczba bedzie 10.}
  Writeln('Wylosowana liczba to: ', A); {Wyswietlenie na ekranie tekstu
                                         znajdujacego sie pomiedzy
                                         apostrofami - parametr 1
                                         oraz wyswietlenie zawartosci
                                         zmiennej liczbowej calkowitej "A" - parametr 2.
                                         Parametry oddzielane sa przecinkami.}
  Writeln;
  if(A mod 2 = 0) then {Jezeli reszta z dzielenia bedzie rowna zeru, to
                        wykonaj instrukcje po slowie THEN. W innym
                        przypadku wykonaj instrukcje po slowie ELSE.
                        MOD - zwraca reszte z dzielenia.}
     Writeln('Wylosowana liczba "', A, '" jest liczba parzysta.')
  else Writeln('Wylosowana liczba "', A, '" jest liczba nieparzysta.');
  {Zatrzymaj program do czasu nacisniecia klawisza ENTER.}
  Writeln; Writeln; Write('Nacisnij klawisz ENTER...');
  Readln;
end.