#include <iostream>
using namespace std;
/*
--== [c++edu08a_tabl] Tablice liczbowe ==--
Zadanie: Napisz program, który przechowa
         wprowadzone liczby w tablicy.
*/
int main() {
  cout << "--== [c++edu08a_tabl] Tablice liczbowe ==-- \n \n";
  //
  //Deklaracja zmiennej tablicowej.
    int Dane[4];
  //
  //Pobranie danych liczbowych i przypisanie ich do tablicy.
    for(int I = 0; I < 4; I++) {
      cout << (I+1) << ".: ";
      Dane[I] = 0;
      cin >> Dane[I];
    }
  //
  //Wyœwietlenie danych przechowywanych w tablicy.
  cout << "\n \nDane przechowywane w tablicy: ";
  for(int I = 0; I < 4; I++) { cout << Dane[I] << " "; }
cout << "\n \n";
}
/*
Legenda:
Wiersz 10:  int Dane[4];
            Deklaracja zmiennej liczbowej ca³kowitej tablicowej
            4 elementowej.
            Do elementu w tablicy mo¿na siê dostaæ przez
            podanie nr indeksu danego elementu. Nr indeksu
            jest umieszczony pomiêdzy nawiasami klamrowymi,
            zaraz za nazw¹ zmiennej tablicowej (tj. Dane[4]).
   
*/