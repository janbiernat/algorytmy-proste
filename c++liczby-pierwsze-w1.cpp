#include<iostream> 
using namespace std; 
int main() { 
  /*--== Liczby pierwsze - w1 ==-- 
    Copyright (c)by Jan T. Biernat 
    - 
    Definicja: 
    Liczba pierwsza to taka liczba naturalna, która jest wiêksza 
    od 1 i dzieli siê tylko przez 1 i sam¹ siebie. 
    Pocz¹tkowe liczby pierwsze: 
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
    59, 61, 67, 71, 73, 79, 83, 89, 97 ... .*/ 
  cout << "--== Liczby pierwsze - w1 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int Liczba = 0; 
    short int CzyNie = 0; 
  //Pobranie danych. 
    cout << "Liczba: "; 
    cin >> Liczba; 
  //Zabezpieczenie, by u¿ytkownik nie poda³ liczby mniejszej ni¿ 2. 
    if(Liczba < 2) { 
      Liczba = 2; 
      cout << "BLAD -?Podales wartosc mniejsza od liczby 2,\n" 
           << "       dlatego wprowadzilem wartosc domyslna 2.\n\n"; 
    } 
  //Sprawdzenie, czy podana liczba jest liczb¹ pierwsz¹. 
    for(int L=2; L < Liczba; L++) { 
      if(Liczba % L == 0) { 
        CzyNie = 1; 
        break; 
      } 
    } 
  //Wyœwietl informacjê o liczbie. 
    cout << "Liczba \"" << Liczba << "\" "; 
    if(CzyNie == 1) { cout << "<- nie jest liczba pierwsza!"; } 
    else { cout << "<- jest liczba pierwsza."; }  
  cout << "\n"; 
} 