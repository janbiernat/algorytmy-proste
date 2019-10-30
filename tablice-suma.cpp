#include <iostream> 
#include <conio.h> 
/*--== Tablice jednowymiarowe - Sumowanie ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
int TablicaSuma(int Tablica[], int Ilosc = 0) { 
  //TablicaSuma - Sumuj wszystkie elementy tablicy. 
    int Suma = 0; 
    if(Ilosc > 0) { 
      for(int I = 0; I < Ilosc; I++) { Suma += Tablica[I]; } 
    } else { cout << "BLAD -?"; } 
    return Suma; 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice jednowymiarowe - Sumowanie ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 6; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow] = { 0, 1, 10, 3, 5, 7 }; 
  //Wyświetl zawartość tablicy. 
    for(int I = 0; I < IloscElementow; I++) { 
      if(I > 0) { cout << " + "; } 
      cout << Tablica[I]; 
    } 
  //Wyświetl zawartość tablicy. 
    cout << " = " << TablicaSuma(Tablica, IloscElementow); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 