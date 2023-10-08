#include <iostream>
/*--== Liczby podzielne przez 3 ==--
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który wyświetli wszystkie
  liczby do zadanej (liczby) przez użytkownika,
  podzielne przez 3.
  Jeżeli zadana liczba jest ujemna,
  to zmień ją na kwadrat tej liczby.
  Np.:
  1) Wczytana jest liczba 20.
     Program wyświetli liczby od 0, 3, 6, 9, 12, 15, 18.
  2) Wczytana jest liczba -3.
     Program wyświetli liczby od 0, 3, 6, 9.
*/
using namespace std;
int main() {
  cout << "--== Liczby podzielne przez 3 ==--\n";
  cout << "Copyright (c)by Jan T. Biernat \n\n\n";
  //=
    int Liczba = 0;
    cout << "Liczba: "; cin >> Liczba;
    if (Liczba < 0) { Liczba = Liczba * Liczba; }
    cout << "\nPodana liczba to: " << Liczba << "\n";
    cout << "Liczby podzielne przez 3 to: ";
    for(int I = 0; I < (Liczba+1); I+= 3) {
      if(I > 0) { cout << ", "; }
      cout << I;
    }
    cout << ".";
  cout << "\n\n";
}