#include <iostream>
using namespace std;
/*--== [MAT]Dzielniki podanej liczby w4, DO .. WHILE, Liczby pierwsze w2 ==--
  Copyright (c)by Jan T. Biernat
  ---
  Definicja:
  Dzielnik w matematyce to liczba, przez któr¹ inna liczba jest dzielona bez reszty.
  -
  Liczba pierwsza to taka liczba naturalna, która jest wiêksza
  od 1 i dzieli siê tylko przez 1 i sam¹ siebie.
  Pocz¹tkowe liczby pierwsze to:
  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53,
  59, 61, 67, 71, 73, 79, 83, 89, 97 ... .
  UWAGA: Znak # bêdzie umieszczany przed ka¿d¹ liczb¹ pierwsz¹.
*/
bool CzyLiczbPierw(int L = 0) {
  bool _T = true;
  if(L < 2) { L = 2; }
  for(int I = 2; I < L; I++) {
    if(L % I == 0) { _T = false; break; }
  }
  return _T;
}
//
//Blok g³ówny.
int main() {
  cout << "--== [MAT]Dzielniki podanej liczby w4, DO .. WHILE, Liczby pierwsze w2 \n \n \n";
  int Liczba = 0;
  do {
    Liczba = 0;
    cout << "Liczba: ";
    cin >> Liczba;
    if(Liczba > 0) {
      cout << "Liczba " << Liczba << " ";
      if(CzyLiczbPierw(Liczba) == false) { cout << "nie "; }
      cout << "jest liczba pierwsza. \n";
      cout << "Dzielniki liczby " << Liczba << " to: ";
      for(int I = 1; I < Liczba+1; I++) {
        if(Liczba % I == 0) {
          if((CzyLiczbPierw(I) == true) && (I > 1)){ cout << "#"; }
          cout << I << "  ";
        }
      }
      cout << "\n \n \n";
    }
  } while(Liczba != 0);
cout << "\n \n";
}