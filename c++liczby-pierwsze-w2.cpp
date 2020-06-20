#include <iostream> 
#include <math.h> 
using namespace std; 
/*--== Liczby pierwsze - w2 ==-- 
  Copyright (c)by Jan T. Biernat 
  - 
  Definicja: 
  Liczba pierwsza to taka liczba naturalna, która jest większa 
  od 1 i dzieli się tylko przez 1 i samą siebie. 
  Początkowe liczby pierwsze: 
  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
  59, 61, 67, 71, 73, 79, 83, 89, 97 ... . 
*/ 
short int CzyLiczbaPierwsza(int Liczba = 0) { 
  short int CzyNie = 0; 
  if(Liczba < 2) { Liczba = 2; cout << "Wartosc domyslna 2."; } 
  for(int L = 2; L < Liczba; L++) { 
    if(Liczba % L == 0) { CzyNie = 1; break; } 
  } 
  return CzyNie; 
} 
short int CzyLiczbaPierwsza2(int Liczba = 0) { 
  short int CzyNie = 0; 
  if(Liczba < 2) { Liczba = 2; cout << "Wartosc domyslna 2."; } 
  for(int L = 2; L <= sqrt(Liczba); L++) { 
    if(Liczba % L == 0) { CzyNie = 1; break; } 
  } 
  return CzyNie; 
} 
//Blok startowy/główny. 
int main() { 
  cout << "--== Liczby pierwsze - w2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int Zakres = 0; 
  //Pobranie danych. 
    cout << "Podaj gorny zakres: "; 
    cin >> Zakres; 
    if(Zakres < 2) { Zakres = 2; cout << "Wartosc domyslna 2.\n"; } 
  //Sposób 1: Sprawdzenie, czy podana liczba jest liczbą pierwszą. 
    cout << "Sposob 1: Liczby pierwsze: "; 
    for(int L = 2; L < Zakres+1; L++) { 
      if(CzyLiczbaPierwsza(L) == 0) { 
        if(L > 2) { cout << ", "; } 
        cout << L; 
      } 
    } 
    cout << ".\n"; 
  //Sposób 2: Sprawdzenie, czy podana liczba jest liczbą pierwszą. 
    cout << "Sposob 2: Liczby pierwsze: "; 
    for(int L = 2; L < Zakres+1; L++) { 
      if(CzyLiczbaPierwsza2(L) == 0) { 
        if(L > 2) { cout << ", "; } 
        cout << L; 
      } 
    } 
    cout << ".\n"; 
  cout << "\n"; 
} 