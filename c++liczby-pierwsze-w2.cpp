#include<iostream> 
using namespace std; 
bool CzyLiczbaPierwsza(int Liczba = 0) { 
  /*--== Liczby pierwsze - w2 ==-- 
    Copyright (c)by Jan T. Biernat 
    - 
    Definicja: 
    Liczba pierwsza to taka liczba naturalna, która jest większa 
    od 1 i dzieli się tylko przez 1 i samą siebie. 
    Początkowe liczby pierwsze: 
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
    59, 61, 67, 71, 73, 79, 83, 89, 97 ... .*/ 
  //Deklaracja zmiennych. 
    short int CzyNie = 0; 
  //Zabezpieczenie, by użytkownik nie podał liczby mniejszej niż 2. 
    if(Liczba < 2) { Liczba = 2; } 
  //Sprawdzenie, czy podana liczba jest liczbą pierwszą. 
    for(int L=2; L < Liczba; L++) { 
      if(Liczba % L == 0) { 
        CzyNie = 1; 
        break; 
      } 
    } 
  //Wyświetl informację o liczbie. 
    if(CzyNie == 1) { return false; } else { return true; } 
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
  //Sprawdzenie, czy podana liczba jest liczbą pierwszą. 
   if(Zakres < 2) { Zakres = 2; } 
   cout << "\nLiczby pierwsze: "; 
   for(int L = 2; L < Zakres+1; L++) { 
     if(CzyLiczbaPierwsza(L) == true) { 
       if(L > 2) { cout << ", "; } 
       cout << L; 
     } 
   } 
  cout << ".\n"; 
} 