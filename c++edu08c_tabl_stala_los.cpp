#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
/*
--== [c++edu08c_tabl_stala_los] Tablice liczbowe, Sta³a, Losowanie liczb ==--
Zadanie: Napisz program, który przechowa
         wylosowane liczby w tablicy.
*/
int main() {
  cout << "--== [c++edu08c_tabl_stala_los] Tablice liczbowe, Losowanie liczb ==-- \n \n";
  //
  //Deklaracja sta³ej i zmiennej.
    const short Ilosc = 9;
    int Dane[Ilosc];
  //
  //Wylosowanie danych liczbowych i zapisanie ich do tablicy.
    srand(time(NULL));
    for(int I = 0; I < Ilosc; I++) {
      Dane[I] = 0; 
      Dane[I] = rand()%100;
    }
  //
  //Wyœwietlenie zawartoœci tablicy.
    cout << "\nDane przechowywane w tablicy: ";
    for(int I = 0; I < Ilosc; I++) { cout << Dane[I] << " "; }
cout << "\n \n";
}