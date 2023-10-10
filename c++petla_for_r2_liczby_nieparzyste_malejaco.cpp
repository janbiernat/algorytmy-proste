#include <iostream>
/*--== Liczby nieparzyste malejąco - Pętla FOR ==--
                          Metoda rozwiązania 2.
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który wyświetli liczby
  malejąco dwucyfrowe nieparzyste.
  Wyświetlanie liczb należy rozpocząć
  od liczby podanej przez użytkowania.
  Jeżeli użytkownik poda wartość mniejszą
  od liczby 11, to program wyświetli komunikat
  "Brak liczb nieparzystych!".
  Np.:
  1) Podana jest liczba 10.
     Wynik działania programu to: Brak liczb nieparzystych!.
  2) Podana jest liczba 11.
     Wynik działania programu to: 11.
  3) Podana jest liczba 13.
     Wynik działania programu to: 13, 11.
  4) Podana jest liczba: 19.
   Wynik działania programu to: 19, 17, 15, 13, 11.
  5) Podana jest liczba: 40.
     Wynik działania programu to: 39, 37, 35, 33, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11.
*/
using namespace std;
int main() {
  cout << "--== Liczby nieparzyste malejaco - Petla FOR ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n";
  cout << "Metoda rozwiazania 2. \n\n";
  //=
    int L = 0, I = 0, Licznik = 0;
    cout << "Liczba: "; cin >> L;
    if(L > 10) {
      if(L % 2 == 0) { L--; } //Zabezpieczenie.
      for(I = L; I > 10; I-= 2) {
        if(Licznik == 0) { cout << "= "; }
        if(Licznik > 0) { cout << ", "; }
        cout << I;
        Licznik++;
      }
      cout << ".";
    } else { cout << "INFO -?Brak liczb nieparzystych!"; }
  cout << "\n\n";
}