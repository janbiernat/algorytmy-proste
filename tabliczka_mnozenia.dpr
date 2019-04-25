program tabliczka_mnozenia; 
{ 
 --== Tabliczka mnożenia ==-- 
 Copyright (c)by Jan T. Biernat 
} 
{$APPTYPE CONSOLE} 
uses {Dyrektywa "SysUtils" umożliwia wykorzystanie bibliotek 
      własnych lub napisanych przez osoby trzecie.} 
  SysUtils; {Wykorzystanie biblioteki "SysUtils" dostarczonej 
             przez firmę Borland.} 
var A, B, Odp :shortint; {Deklaracja zmiennych liczbowych całkowitych.} 
begin 
  Writeln('--== Tabliczka mnozenia ==--'); {Wyświetlenie na ekranie 
                                            tekstu znajdującego się 
                                            pomiędzy apostrofami.} 
  Writeln('Copyright (c)by Jan T. Biernat'); 
 
  {Losowanie pytań.} 
  Randomize; {Zainicjowanie generatora liczb pseudolosowych.} 
 
  A:= 0; {Wyzerowanie zmiennej liczbowej całkowitej.} 
  A:= Random(11); {Wylosowanie jednej liczby z przedziału liczb od 
                   0 do 10 i przypisanie wylosowanej liczby do 
                   zmiennej liczbowej całkowitej "A". 
                   Random(X) - służy do wylosowania jednej liczby 
                               z podanego przedziału liczb. 
                               W miejsce parametru X należy umieścić 
                               liczbę całkowitą np. 11. 
                               Wylosowana liczba jest zawsze mniejsza 
                               od podanej liczby w parametrze X.} 
 
  B:= 0; B:= Random(11); 
 
  {Wyświetlenie pytania na ekranie oraz sprawdzenie udzielonej odpowiedzi.} 
  Writeln; {Pozostawienie jednego wiersza pustego i przesunięcie 
            kursora tekstowego do następnego wiersza.} 
  Write(A, ' x ', B, ' = '); {Wyświetlenie na ekranie zawartości zmiennych 
                              liczbowych "A" i 'B" oraz tekstu znajdującego 
                              się pomiędzy apostrofami. 
                              UWAGA: Parametry oddzielane są przecinkami. 
                              Parametr 2 i 4 wyświetla na ekranie tekst 
                              znajdujący się pomiędzy apostrofami. 
                              Natomiast parametr 1 i 3 wyświetla na ekranie 
                              zawartość zmiennych liczbowych całkowitych 
                              "A" - parametr 1 i "B" - parametr 2.} 
  Odp:= 0; 
  Readln(Odp); {Pobranie liczb z klawiatury i przypisanie pobranych 
                 danych do zmiennej liczbowej całkowitej "Odp".} 
  if(A*B = Odp) then Writeln('Dobrze!') 
  else Writeln('Zle!'); 
  {Jeżeli odpowiedź jest poprawna (tj. A*B = Odp -  zawartość zmiennej 
   liczbowej całkowitej "A" mnożona przez zawartość zmiennej liczbowej 
   całkowitej "B" jest równa zawartości zmiennej liczbowej całkowitej "Odp"), 
   to wykonaj instrukcje po słowie THEN. W innym przypadku wykonaj instrukcje 
   po słowie ELSE.} 
 
  {Zatrzymanie programu do czasu naciśnięcia klawisza ENTER.} 
  Writeln; Write('Nacisnij klawisz ENTER...'); 
  Readln; {Zatrzymanie programu do czasu naciśnięcia klawisza ENTER.} 
end. 
