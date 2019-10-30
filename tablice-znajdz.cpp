#include <iostream> 
#include <conio.h> 
/*--== Tablice jednowymiarowe - Znajdź ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
short int TablicaZnajdz(int Tablica[], int Ilosc = 0, int ZnajdzLiczbe = 0) { 
  //TablicaSuma - Sumuj wszystkie elementy tablicy. 
    int Znajdz = 0; 
    if(Ilosc > 0) { 
      for(int I = 0; I < Ilosc; I++) { 
        if(ZnajdzLiczbe == Tablica[I]) { Znajdz = 1; break; } 
      } 
    } else { cout << "BLAD -?"; } 
    return Znajdz; 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice jednowymiarowe - Znajdz ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n"; 
  cout <<"Uwaga: 1 - liczba zostala znaleziona. Inna wartosc, to brak szukanej liczby.\n\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 9; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow] = { -5, -9, -2, 0, 1, 10, 3, 5, 7 }; 
  //Wyświetl zawartość tablicy. 
    for(int I = 0; I < IloscElementow; I++) { 
      if(I > 0) { cout << ", "; } 
      cout << Tablica[I]; 
    } 
  //Wyświetl zawartość tablicy. 
    cout << " = " << TablicaZnajdz(Tablica, IloscElementow, 3); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 