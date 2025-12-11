#include <iostream>
using namespace std;
/*
--== [c++edu08b_tabl_stala] Tablice liczbowe, Sta³a ==--
Zadanie: Napisz program, który przechowa
         wprowadzone liczby w tablicy.
*/
int main() {
  cout << "--== [c++edu08b_tabl_stala] Tablice liczbowe, Stala ==-- \n \n";
  //
  //Deklaracja sta³ej i zmiennej.
    const short Ilosc = 7;
    int Dane[Ilosc];
  //
  //Pobranie danych liczbowych od u¿ytkownika i zapisanie ich do tablicy.
    for(int I = 0; I < Ilosc; I++) {
      cout << (I+1) << ".: ";
      Dane[I] = 0;
      cin >> Dane[I];
    }
  //
  //Wyœwietlenie zawartoœci tablicy.
    cout << "\n \nDane przechowywane w tablicy: ";
    for(int I = 0; I < Ilosc; I++) { cout << Dane[I] << " "; }
cout << "\n \n";
}