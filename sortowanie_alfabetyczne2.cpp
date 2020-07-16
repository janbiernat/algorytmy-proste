#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Sortowanie alfabetyczne 2 od A do Z do A - funkcja ==-- 
  Copyright(c)by Jan T. Biernat*/ 
void SortAlfabetOdAdoZ(string Tablica[], int IloscElementow = 0) { 
  //SortAlfabetOdAdoZ - Sortowanie alfabetyczne od A do Z. 
    string Tym = ""; 
    if(IloscElementow > 0) { 
      for(int A = 0; A < IloscElementow; A++) { 
        for(int B = 0; B < IloscElementow; B++) { 
          if(Tablica[A] < Tablica[B]) { 
            Tym = ""; Tym = Tablica[B]; 
            Tablica[B] = Tablica[A]; 
            Tablica[A] = Tym; 
          } 
        } 
      } 
    } else { cout << "\n-?SortAlfabet: Drugi parametr funkcji!"; } 
} 
//= 
void SortAlfabetOdZdoA(string Tablica[], int IloscElementow = 0) { 
  //SortAlfabetOdZdoA - Sortowanie alfabetyczne od Z do A. 
    string Tym = ""; 
    if(IloscElementow > 0) { 
      for(int A = 0; A < IloscElementow; A++) { 
        for(int B = 0; B < IloscElementow; B++) { 
          if(Tablica[A] > Tablica[B]) { 
            Tym = ""; Tym = Tablica[B]; 
            Tablica[B] = Tablica[A]; 
            Tablica[A] = Tym; 
          } 
        } 
      } 
    } else { cout << "\n-?SortAlfabet: Drugi parametr funkcji!"; } 
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
    SortAlfabetOdAdoZ(Tablica, IloscElementow); 
    cout << "\nZawartosc tablicy, po posortowaniu alfabetycznym od A od Z:"; 
    TablicaJW_Pokaz(Tablica, IloscElementow); //Wywołanie funkcji "TablicaJW_Pokaz". 
    cout << "\n\n"; 
  //Wyświetl zawartość tablicy, po posortowaniu alfabetycznym od Z do A. 
    SortAlfabetOdZdoA(Tablica, IloscElementow); 
    cout << "\nZawartosc tablicy, po posortowaniu alfabetycznym od Z do A:"; 
    TablicaJW_Pokaz(Tablica, IloscElementow); //Wywołanie funkcji "TablicaJW_Pokaz". 
    cout << "\n"; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 