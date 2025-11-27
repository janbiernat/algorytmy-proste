#include <iostream>
/*--== Liczba na odwrót, w2 ==--
               BEZ BIBLIOTEK
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Napisz program, który wyświetli
  podaną liczbę na odwrót.
*/
using namespace std;
long long LiczbaNaOdwrot(long Liczba) {
//LiczbaNaOdwrot - Wyświetla liczbę w odwrotnej kolejności.
  long long Odwrocona = 0;
  while(Liczba > 0) {
    Odwrocona = ((Odwrocona * 10) + (Liczba % 10));
    Liczba /= 10;
  }
  return Odwrocona;
}
//
//Blok główny(startowy).
int main() {
  cout << "--== Liczba na odwrot, w2  ==--\n";
  cout << "              BEZ BIBLIOTEK\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  //Deklaracja zmiennych.
    long long Liczba = 0;
  //Wykonaj zadanie.
    cout << "Liczba: ";
    cin >> Liczba;
    cout << "\nLiczba odwrotnie: " << LiczbaNaOdwrot(Liczba);
  cout << "\n\n";
}
/*
Opis:
Podana jest liczba 2468, którą należy wyświetlić
od prawej do lewej strony.
W ten sposób otrzymamy liczbę 8642.
Rozwiązanie:
      Dzielenie bez reszty | Reszta | Faktyczny wynik
     -------------------------------------------------
             2468/10 = 246 |      8 | 2468/10 = 246.8
              246/10 =  24 |      6 |  246/10 =  24.6
               24/10 =   2 |      4 |   24/10 =   2.4
                2/10 =   0 |      2 |    2/10 =   0.2
     Liczba odwrócona to 8642 (liczbę odczytujemy z kolumny
     RESZTA od góry do dołu).
   W celu przypisania otrzymanej liczby 8642 do zmiennej
   liczbowej całkowitej należy wykonać następujące obliczenia:
     8 * 10^3 = 8 * 1000 = 8000
     6 * 10^2 = 6 *  100 =  600
     4 * 10^1 = 4 *   10 =   40
     2 * 10^0 = 2 *    1 =    2
     Teraz należy wykonać sumowanie poszczególnych wyników.
     8000 + 600 + 40 + 2 = 8642. Otrzymany wynik jest odwrotnością
     podanej liczby przez użytkownika.
*/