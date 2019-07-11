#include <iostream> 
#include <conio.h> 
#include <cstdlib> /*Posiada instrukcje do zainicjowania 
                     generatora liczb pseudolosowych.*/ 
#include <ctime> /*Biblioteka "ctime " zawiera funkcje 
                   związane z obsługą czasu i daty.*/ 
/*--== Tablice jednowymiarowe ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
void TablicaJW_Pokaz(int Tablica[], int IloscElementow=0) { 
  //TablicaJW_Pokaz - Wyświetl zawartość tablicy podanej w 1 parametrze. 
    if(IloscElementow > 0) { 
      cout << "["; 
      for(int I=0; I < IloscElementow; I++) { 
        if(I > 0) { cout << ", "; } 
        cout << Tablica[I]; 
      } 
      cout << "]"; 
    } else { cout << "BLAD -?"; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice jednowymiarowe ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 9; 
    const int Zakres = 39; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow]; 
  //Wprowadź dane do tablicy. 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    for(int I=0; I < IloscElementow; I++) { 
      Tablica[I] = 0; 
      Tablica[I] = rand()%Zakres; 
    } 
  //Wyświetl zawartość tablicy. 
    cout << "\nZawartosc wylosowanej tablicy:"; 
    cout << "\n["; 
    for(int I=0; I < IloscElementow; I++) { 
      if(I > 0) { cout << ", "; } 
      cout << Tablica[I]; 
    } 
    cout << "]"; 
  //Wyświetl zawartość tablicy za pomocą funkcji "TablicaJW_Pokaz()". 
    cout << "\n"; 
    TablicaJW_Pokaz(Tablica, IloscElementow); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 