#include<iostream> 
using namespace std; 
bool CzyLiczbaPierwsza(int Liczba = 0) { 
  /*--== Liczby pierwsze - w2 ==-- 
    Copyright (c)by Jan T. Biernat 
    - 
    Definicja: 
    Liczba pierwsza to taka liczba naturalna, która jest wiêksza 
    od 1 i dzieli siê tylko przez 1 i sam¹ siebie. 
    Pocz¹tkowe liczby pierwsze: 
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
    59, 61, 67, 71, 73, 79, 83, 89, 97 ... .*/ 
  //Deklaracja zmiennych. 
    short int CzyNie = 0; 
  //Zabezpieczenie, by u¿ytkownik nie poda³ liczby mniejszej ni¿ 2. 
    if(Liczba < 2) { Liczba = 2; } 
  //Sprawdzenie, czy podana liczba jest liczb¹ pierwsz¹. 
    for(int L=2; L < Liczba; L++) { 
      if(Liczba % L == 0) { 
        CzyNie = 1; 
        break; 
      } 
    } 
  //Wyœwietl informacjê o liczbie.  
    if(CzyNie == 1) { return false; } else { return true; } 
} 
//Main. 
int main() { 
  cout << "--== Liczby pierwsze - w2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int Zakres = 0; 
  //Pobranie danych. 
    cout << "Podaj gorny zakres: "; 
    cin >> Zakres; 
  //Sprawdzenie, czy podana liczba jest liczb¹ pierwsz¹. 
   if(Zakres < 2) { Zakres = 2; } 
   cout << "\nLiczby pierwsze: "; 
   for(int L = 1; L < Zakres+1; L++) { 
     if(CzyLiczbaPierwsza(L) == true) { 
       cout << L; 
       if(L < Zakres) { cout << ", "; } 
     } 
   } 
  cout << ".\n"; 
} 