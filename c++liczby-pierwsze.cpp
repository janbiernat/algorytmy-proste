#include <iostream> 
#include <math.h> 
using namespace std; 
/*--== Liczby pierwsze ==-- 
  Copyright (c)by Jan T. Biernat 
  - 
  Definicja: 
  Liczba pierwsza to taka liczba naturalna, która jest większa 
  od 1 i dzieli się tylko przez 1 i samą siebie. 
  Początkowe liczby pierwsze: 
  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
  59, 61, 67, 71, 73, 79, 83, 89, 97 ... . 
*/ 
int main() { 
  cout << "--== Liczby pierwsze ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int Liczba = 0; 
    short int CzyNie = 0; 
  //Pobranie danych. 
    cout << "Liczba: "; 
    cin >> Liczba; 
  //Zabezpieczenie, by użytkownik nie podał liczby mniejszej niż 2. 
    if(Liczba < 2) { 
      Liczba = 2; 
      cout << "BLAD -?Podales wartosc mniejsza od liczby 2,\n" 
           << "       dlatego wprowadzilem wartosc domyslna 2.\n\n"; 
    } 
  //Sposób 1: Sprawdzenie, czy podana liczba jest liczbą pierwszą. 
    CzyNie = 0; 
    for(int L = 2; L < Liczba; L++) { 
      if(Liczba % L == 0) { 
        CzyNie = 1; 
        break; 
      } 
    } 
    cout << "Sposob 1: Liczba \"" << Liczba << "\" "; 
    if(CzyNie == 1) { cout << "<- nie jest liczba pierwsza!"; } 
    else { cout << "<- jest liczba pierwsza."; } 
    cout << "\n"; 
  //Sposób 2: Sprawdzenie, czy podana liczba jest liczbą pierwszą. 
    CzyNie = 0; 
    for(int L = 2; L <= sqrt(Liczba); L++) { 
      if(Liczba % L == 0) { 
        CzyNie = 1; 
        break; 
      } 
    } 
    cout << "Sposob 2: Liczba \"" << Liczba << "\" "; 
    if(CzyNie == 1) { cout << "<- nie jest liczba pierwsza!"; } 
    else { cout << "<- jest liczba pierwsza."; } 
    cout << "\n"; 
  cout << "\n"; 
} 