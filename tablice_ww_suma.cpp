﻿#include <iostream> 
#include <conio.h> 
#include <cstdlib> /*Posiada instrukcje do zainicjowania 
                     generatora liczb pseudolosowych.*/ 
#include <ctime> /*Biblioteka "ctime " zawiera funkcje 
                   związane z obsługą czasu i daty.*/ 
/*--== Tablice wielowymiarowe - suma ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
void TablicaWW_Pokaz(int Tablica[9][9], int IloscElementow=0) { 
  //TablicaWW_Pokaz - Wyświetl zawartość tablicy podanej w 1 parametrze. 
    if(IloscElementow > 0) { 
      for(int A = 0; A < IloscElementow; A++) { 
        cout << "\n "; 
        for(int B = 0; B < IloscElementow; B++) { 
          if(B > 0) { cout << ", "; } 
          cout.width(2); //Przesunięcie liczby do prawej strony na polu 2 znakowym. 
                         //(tzn. napisanie liczby 3, spowoduje dodanie 1 znaku pustego przed napisaną liczbą/cyfrą). 
          cout << Tablica[A][B]; 
        } 
      } 
    } else { cout << "BLAD -?"; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice wielowymiarowe - suma ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 9; 
    const int Zakres = 99; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow][IloscElementow]; 
    long int Suma = 0; 
  //Wprowadź dane do tablicy. 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    for(int A = 0; A < IloscElementow; A++) { 
      for(int B = 0; B < IloscElementow; B++) { 
        Tablica[A][B] = 0; 
        Tablica[A][B] = rand()%Zakres; 
      } 
    } 
  //Wyświetl zawartość tablicy za pomocą funkcji "TablicaWW_Pokaz()". 
    cout << "\n"; 
    TablicaWW_Pokaz(Tablica, IloscElementow); 
  //Suma - Wierszami. 
    cout << "\n\n\nSuma - Wierszami: "; 
    for(int A = 0; A < IloscElementow; A++) { 
      Suma = 0; 
      for(int B = 0; B < IloscElementow; B++) { 
        Suma = Suma+Tablica[A][B]; 
      } 
      if(A > 0) { cout << ", "; } 
      cout << Suma; 
    } 
    cout << "."; 
  //Suma - Kolumnami. 
    cout << "\n\nSuma - Kolumnami: "; 
    for(int A = 0; A < IloscElementow; A++) { 
      Suma = 0; 
      for(int B = 0; B < IloscElementow; B++) { 
        Suma = Suma+Tablica[B][A]; 
      } 
      if(A > 0) { cout << ", "; } 
      cout << Suma; 
    } 
    cout << "."; 
  //Suma - Na skos 1. 
    cout << "\n\nSuma - Na skos 1: "; 
    Suma = 0; 
    for(int A = 0; A < IloscElementow; A++) { 
      Suma = Suma+Tablica[A][A]; 
      if(A > 0) { cout << ", "; } 
      cout << Tablica[A][A]; 
    } 
    cout << " = " << Suma; 
    cout << "."; 
  //Suma - Na skos 2. 
    cout << "\n\nSuma - Na skos 2: "; 
    Suma = 0; 
    for(int A = 0; A < IloscElementow; A++) { 
      Suma = Suma+Tablica[IloscElementow-(A+1)][A]; 
      if(A > 0) { cout << ", "; } 
      cout << Tablica[IloscElementow-(A+1)][A]; 
    } 
    cout << " = " << Suma; 
    cout << "."; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 