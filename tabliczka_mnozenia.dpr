program tabliczka_mnozenia; 
{ 
 --== Tabliczka mno¿enia ==-- 
 Copyright (c)by Jan T. Biernat 
} 
{$APPTYPE CONSOLE} 
uses{Dyrektywa "SysUtils" umo¿liwia wykorzystanie bibliotek 
     w³asnych lub napisanych przez osoby trzecie.} 
  SysUtils; {Wykorzystanie biblioteki "SysUtils" dostarczonej 
             przez firmê Borland.} 
var A, B, Odp :shortint; {Deklaracja zmiennych liczbowych ca³kowitych.} 
begin 
  Writeln('--== Tabliczka mnozenia ==--'); {Wyœwietlenie na ekranie 
                                            tekstu znajduj¹cego siê 
                                            pomiêdzy apostrofami.} 
  Writeln('Copyright (c)by Jan T. Biernat'); 
 
  {Losowanie pytañ.} 
  Randomize; {Zainicjowanie generatora liczb pseudolosowych.} 
 
  A:= 0; {Wyzerowanie zmiennej liczbowej ca³kowitej.} 
  A:= Random(11); {Wylosowanie jednej liczby z przedzia³u liczb od 
                   0 do 10 i przypisanie wylosowanej liczby do 
                   zmiennej liczbowej ca³kowitej "A". 
                   Random(X) - s³u¿y do wylosowania jednej liczby 
                               z podanego przedzia³u liczb. 
                               W miejsce parametru X nale¿y umieœciæ 
                               liczbê ca³kowit¹ np. 11. 
                               Wylosowana liczba jest zawsze mniejsza 
                               od podanej liczby w parametrze X.} 
 
  B:= 0; B:= Random(11); 
 
  {Wyœwietlenie pytania na ekranie oraz sprawdzenie udzielonej odpowiedzi.} 
  Writeln; {Pozostawienie jednego wiersza pustego i przesuniêcie 
            kursora tekstowego do nastêpnego wiersza.} 
  Write(A, ' x ', B, ' = '); {Wyœwietlenie na ekranie zawartoœci zmiennych 
                              liczbowych "A" i 'B" oraz tekstu znajduj¹cego 
                              siê pomiêdzy apostrofami. 
                              UWAGA: Parametry oddzielane s¹ przecinkami. 
                              Parametr 2 i 4 wyœwietla na ekranie tekst 
                              znajduj¹cy siê pomiêdzy apostrofami. 
                              Natomiast parametr 1 i 3 wyœwietla na ekranie 
                              zawartoœæ zmiennych liczbowych ca³kowitych 
                              "A" - parametr 1 i "B" - parametr 2.} 
  Odp:= 0; 
  Readln(Odp); {Pobranie liczb z klawiatury i przypisanie pobranych 
                 danych do zmiennej liczbowej ca³kowitej "Odp".} 
  if(A*B = Odp) then Writeln('Dobrze!') 
  else Writeln('Zle!'); 
  {Je¿eli odpowiedŸ jest poprawna (tj. A*B = Odp -  zawartoœæ zmiennej 
   liczbowej ca³kowitej "A" mno¿ona przez zawartoœæ zmiennej liczbowej 
   ca³kowitej "B" jest równa zawartoœci zmiennej liczbowej ca³kowitej "Odp"), 
   to wykonaj instrukcje po s³owie THEN. W innym przypadku wykonaj instrukcje 
   po s³owie ELSE.} 
 
  {Zatrzymanie programu do czasu naciœniêcia klawisza ENTER.} 
  Writeln; Write('Nacisnij klawisz ENTER...'); 
  Readln; {Zatrzymanie programu do czasu naciœniêcia klawisza ENTER.} 
end. 