#include <iostream>
/*--== Prostokąt (największe 2 liczby) ==--
  Copyright (c)by Jan T. Biernat
  =
  Dane są:
    > Liczba całkowita n większa od 1.
    > Zbiór A zawierający n dodatnich,
      różnych liczb całkowitych.
    > Liczba pierwsza P.
  Treść zadania:
    Dla danych z każdego wiersza w tabeli
    oblicz największe pole powierzchni
    prostokąta, które nie jest podzielne przez P,
    a długości sąsiednich boków tego prostokąta
    są różne (nie może on być kwadratem)
    i należą do zbioru A.
    Zapisz pole tego prostokąta w kolumnie S.
    Jeżeli taki prostokąt nie istnieje,
    jako wynik podaj liczbę 0 (zero).
    -------------------------------------------------
    |              Zbiór A                | P |  S  |
    -------------------------------------------------
    | 7, 5, 11, 33                        | 3 |  77 |
    -------------------------------------------------
    |15, 12, 10, 6, 5, 1                  | 5 |     |
    -------------------------------------------------
    |6, 28, 7, 12, 10, 14, 5, 9, 4, 8, 18 | 7 |     |
    -------------------------------------------------
    |4, 34, 16, 8, 6, 22, 14, 12, 2, 7    | 2 |     |
    -------------------------------------------------
    Legenda:
    S - pole szukanego prostokąta
        lub 0 (zero), jeśli nie można
        zbudować takiego prostokąta.
*/
using namespace std;
int main() {
  cout << "--== Prostokat (najwieksze 2 liczby) ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n";
  //Deklaracja stałej.
    const short IloscMaks = 7;
  //Deklaracja zmiennych.
    int Ilosc = 0, P = 0, LiczbaNaj1 = 0, LiczbaNaj2 = 0, Tym = 0;
    int Dane[IloscMaks];
  //Pobranie danych.
    for(int I = 0; I < IloscMaks; I++) {
      Dane[I] = 0;
      cout.width(3); cout.fill(' ');
      cout << (I+1) << ". ";
      cin >> Dane[I];
      if(Dane[I] < 2) { Dane[I] = 2; }
    }
    cout << "\nLiczba P: "; cin >> P;
  //Wyświetlenie podanych liczb.
    cout << "\nPodane liczby: ";
    for(int I = 0; I < IloscMaks; I++) {
      if(I > 0) { cout << ", "; }
      cout << Dane[I];
    }
    cout << " = ";
  //Kod główny.
  //Znajdź 2 największe liczby niepodzielne przez P.
    for(int I = 0; I < IloscMaks; I++) {
      if((LiczbaNaj1 < Dane[I]) && (Dane[I] % P != 0)) {
        LiczbaNaj1 = Dane[I];
        if(LiczbaNaj2 < LiczbaNaj1) {
          Tym = 0; Tym = LiczbaNaj2;
          LiczbaNaj2 = LiczbaNaj1;
          LiczbaNaj1 = Tym; 
        }
      }
    }
    cout << LiczbaNaj1 << " i " << LiczbaNaj2 << ".\n\n";
    cout << "Pole prostokata, to P = a * b = " 
         << LiczbaNaj1 << " * " << LiczbaNaj2
         << " = " << (LiczbaNaj1*LiczbaNaj2);
cout << "\n\n";
}