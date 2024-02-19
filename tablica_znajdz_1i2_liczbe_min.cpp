#include <iostream>
#include <conio.h>
using namespace std;
/*--== Znajdź 1 i 2 liczbę minimalną ==--
  Copyright (c)by Jan T. Biernat
  =
  Napisz program który wczyta z klawiatury
  n liczb całkowitych.
  Zadaniem programu będzie wyszukanie drugiej
  liczby (większej od najmniejszej, ale
  mniejszej od pozostałych liczb).
  Zadanie należy wykonać bez sortowania.
  Przykład 1:
      Wprowadzono następujące liczby: 8, 7, 1, 1, 3, 2, 4, 6.
      Najmniejsza liczba to: 1.
      Kolejną najmniejszą liczbą jest: 2 (jest większa
      od najmniejszej liczby oraz jest mniejsza od pozostałych liczb).
  Przykład 2:
      Wprowadzono następujące liczby: 4, 7, 6, 2, -3, 2, 4, 6.
      Najmniejsza liczba to: -3.
      Kolejną najmniejszą liczbą jest: 2 (jest większa
      od najmniejszej liczby oraz jest mniejsza od pozostałych liczb).
*/
int main() {
  cout << "--== Znajdz 1 i 2 liczbe minimalna ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n";
  //Deklaracja stałych.
    const short Ile = 6;
  //Deklaracja zmiennych.
    short Licznik = 0;
    int Min = 0, Min2 = 0, Wynik = 0;
    int Tablica[Ile];
  //Ustawienia startowe.
    for(int I = 0; I < Ile; I++) { Tablica[I] = 0; }
  //Wprowadzenie danych do komputera.
    for(int I = 0; I < Ile; I++) {
      cout.width(2);
      cout.fill(' ');
      cout << (I+1) << ": ";
      cin >> Tablica[I];
      if(Licznik == 0) { Min = Tablica[I]; Licznik++; }
      else if(Min > Tablica[I]) { Min = Tablica[I]; }
      Min2+= Tablica[I];
    }
    cout << "\nLiczba najmniejsza to: " << Min;
  //Znajdź 2 liczbę większą od najmniejszej,
  //ale mniejszą od pozostałych liczb.
    Licznik = 0;
    for(int I = 0; I < Ile; I++) {
      Wynik = 0; Wynik = (Min-Tablica[I]);
      if((-1 * Wynik) != 0) {
        if(Min2 > (-1 * Wynik)) { Min2 = (-1 * Wynik); Licznik = I; }
      }
    }
    cout << "\nKolejna min. liczba jest: " << Tablica[Licznik];
  cout << "\n\n";
}