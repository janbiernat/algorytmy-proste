#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Sortowanie alfabetyczne 2 od A do Z do A - funkcja ==-- 
  Copyright(c)by Jan T. Biernat*/ 
void SortAZA(string Tablica[], int Ile = 0, bool Kierunek = false) { 
  //SortAZA - Sortowanie alfabetyczne od A do Z do A. 
    string Tym = ""; 
    if(Ile > 0) { 
      for(int A = 0; A < Ile; A++) { 
        for(int B = A+1; B < Ile; B++) { 
          if(((Tablica[A] > Tablica[B]) && (Kierunek == false)) 
          || ((Tablica[A] < Tablica[B]) && (Kierunek == true))) { 
            Tym = ""; Tym = Tablica[B]; 
            Tablica[B] = Tablica[A]; 
            Tablica[A] = Tym; 
          } 
        } 
      } 
    } else { cout << "\n-?SortAZA: Drugi parametr funkcji!"; } 
} 
//= 
void TablicaJW_Pokaz(string Tablica[], int IloscElementow = 0) { 
  //TablicaJW_Pokaz - Wyświetl zawartość tablicy podanej w 1 parametrze. 
    if(IloscElementow > 0) { 
      for(int I = 0; I < IloscElementow; I++) { 
        if(I > 0) { cout << ", "; } 
        cout << "\n" << Tablica[I]; 
      } 
      cout << "."; 
    } else { cout << "\n-?Drugi parametr funkcji!"; } 
} 
//Blok główny (startowy). 
int main() { 
  cout << "--== Sortowanie alfabetyczne 2 od A do Z do A - funkcja ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const short int IloscElementow = 15; 
  //Deklaracja zmiennych. 
    string Tablica[IloscElementow]  = { 
                                        "Atari", 
                                        "Amiga", 
                                        "ZX Spectrum", 
                                        "Amstrad", 
                                        "Commodore", 
                                        "Pegasus", 
                                        "Atari Portfolio", 
                                        "Atari TT", 
                                        "Atari 65XE", 
                                        "Joystick", 
                                        "Rive Raid", 
                                        "Robbo", 
                                        "Fred", 
                                        "Misja", 
                                        "Lasermania" 
                                      }; 
  //Wyświetl zawartość tablicy, przed posortowaniem alfabetycznym. 
    cout << "\nZawartosc tablicy, przed posortowaniem alfabetycznym:"; 
    TablicaJW_Pokaz(Tablica, IloscElementow); //Wywołanie funkcji "TablicaJW_Pokaz". 
    cout << "\n\n"; 
  //Wyświetl zawartość tablicy, po posortowaniu alfabetycznym od A do Z. 
    SortAZA(Tablica, IloscElementow); 
    TablicaJW_Pokaz(Tablica, IloscElementow); 
    cout << "\n\n"; 
  //Wyświetl zawartość tablicy, po posortowaniu alfabetycznym od Z do A. 
    SortAZA(Tablica, IloscElementow, true); 
    TablicaJW_Pokaz(Tablica, IloscElementow); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 