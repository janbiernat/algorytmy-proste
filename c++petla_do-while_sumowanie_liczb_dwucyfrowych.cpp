#include <iostream>
/*--== Sumowanie liczb dwucyfrowych - Pętla DO ... WHILE ==--
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który będzie wyświetlał
  liczby dwucyfrowe do momentu, gdy ich suma
  przekroczy wartość podaną przez użytkownika.
  Np.:
  1) Podany jest wynik maksymalny 33.
     Wynik działania programu to: 10 + 11 + 12 = 33.
  2) Podany jest wynik maksymalny: 44.
     Wynik działania programu to: 10 + 11 + 12 + 13 = 46.
  3) Podany jest wynik 60.
     Wynik działania programu to: 10 + 11 + 12 + 13 + 14 = 60.
*/
using namespace std;
int main() {
  cout << "--== Sumowanie liczb dwucyfrowych - Petla DO ... WHILE ==--\n";
  cout << "Copyright (c)by Jan T. Biernat \n\n";
  //=
    long WynikM = 0, Suma = 0;
    int Liczba = 0, Licznik = 0;
    cout << "Wynik maksymalny: ";
    cin >> WynikM;
    Liczba = 9;
    do {
      Licznik++;
      Liczba++;
      Suma+= Liczba;
      if(Licznik > 1) { cout << " + "; }
      cout << Liczba;
    } while(Suma < WynikM);
    cout << " = " << Suma;
  cout << "\n\n";
}