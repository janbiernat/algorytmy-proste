#include <iostream>
/*--== Potęgowanie ==--
 Copyright (c)by Jan T. Biernat
 =
 Potęgowanie jest działaniem matematycznym
 i polega na wielokrotnym mnożeniu liczby przez samą siebie.
 Liczba, którą będziemy potęgować nazywa się podstawą.
 Natomiast liczbę określającą ile razy pomnożymy
 podstawę przez samą siebie, nazywa się wykładnikiem.
*/
using namespace std;
int main() {
  cout << "--== Potegowanie ==-- \n \n";
  //
  int Podstawa = 0, Wykladnik = 0;
  long Wynik = 0;
  //
  cout << "Wpisz podstawe : "; cin >> Podstawa;
  cout << "Wpisz wykladnik: "; cin >> Wykladnik;
  //
  Wynik = 1;
  for(int I = 0; I < Wykladnik; I++) {
    Wynik = Wynik*Podstawa;
    cout << "\n" << Podstawa << "^" << (I+1) << " = " << Wynik;
  }
cout << "\n \n";
}