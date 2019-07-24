#include <iostream> /*Biblioteka "iostream" (ang. input/output stream) 
                      oznacza strumień wejścia/wyjścia. 
                      Za pomocą tej biblioteki można m.in. wprowadzać 
                      informacje ze standardowych urządzeń 
                      wejścia (klawiatura) lub wyprowadzać 
                      informacje ze standardowych urządzeń 
                      wyjścia (ekran).*/ 
#include <conio.h>  /*Obsługa klawiatury za pomocą.*/ 
/*--== Sortowanie alfabetyczne ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
void TablicaJW_Pokaz(string Tablica[], int IloscElementow=0) { 
  //TablicaJW_Pokaz - Wyświetl zawartość tablicy podanej w 1 parametrze. 
    if(IloscElementow > 0) { 
      for(int I = 0; I < IloscElementow; I++) { 
        if(I > 0) { cout << ", "; } 
        cout << "\n" << Tablica[I]; 
      } 
      cout << "."; 
    } else { cout << "BLAD -?"; } 
} 
//Blok główny. 
int main() { 
  cout << "--== Sortowanie alfabetyczne ==--\n"; 
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
    string Temp = ""; 
  //Wyświetl zawartość tablicy, przed posortowaniem alfabetycznym. 
    cout << "\nZawartosc tablicy, przed posortowaniem alfabetycznym:"; 
    TablicaJW_Pokaz(Tablica, IloscElementow); //Wywołanie funkcji "TablicaJW_Pokaz". 
    cout << "\n\n"; 
  //Sortowanie alfabetyczne. 
    for(int A = 0; A < IloscElementow; A++) { 
      for(int B = 0; B < IloscElementow; B++) { 
        if(Tablica[A] < Tablica[B]) { 
          Temp = ""; 
          Temp = Tablica[B]; 
          Tablica[B] = Tablica[A]; 
          Tablica[A] = Temp; 
        }; 
      }; 
    }; 
  //Wyświetl zawartość tablicy, po posortowaniu alfabetycznym. 
    cout << "\nZawartosc tablicy, po posortowaniu alfabetycznym:"; 
    TablicaJW_Pokaz(Tablica, IloscElementow); //Wywołanie funkcji "TablicaJW_Pokaz". 
    cout << "\n"; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 