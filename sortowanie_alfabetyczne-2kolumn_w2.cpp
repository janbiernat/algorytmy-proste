#include <iostream> 
#include <conio.h> 
#include <windows.h> 
using namespace std; 
/*--== Sortowanie alfabetyczne 2 kolumn, w2 ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który umożliwi sortowanie 
  alfabetyczne według wybranej kolumny. 
*/ 
void SortAZ(int Kol1Szer, string Kol1[], string Kol2[], int Ile = 0, bool Kol = false) { 
  string K1 = "", K2 = ""; 
  if(Ile > 0) { 
    for(int A = 0; A < Ile; A++) { 
      for(int B = A+1; B < Ile; B++) { 
        if(((Kol1[A] > Kol1[B]) && (Kol == false)) 
        || ((Kol2[A] > Kol2[B]) && (Kol == true))) { 
          K1 = ""; K1 = Kol1[B]; //Kolumna 1. 
          Kol1[B] = Kol1[A]; 
          Kol1[A] = K1; 
          K2 = ""; K2 = Kol2[B]; //Kolumna 2. 
          Kol2[B] = Kol2[A]; 
          Kol2[A] = K2; 
        } 
      } 
    } 
    //Wyświetl kolumny. 
      for(int I = 0; I < Ile; I++) { 
        cout << "\n" << Kol1[I]; 
        cout.width(Kol1Szer-Kol1[I].length()); cout.fill(' '); 
        cout << " " << Kol2[I]; 
      } 
  } 
} 
//Blok główny(startowy). 
int main() { 
  //Deklaracja stałych. 
    const short int Ile = 13; 
    const int Kol1Szer = 20; 
    string Kolumna1[Ile]  = { "Amiga 500", 
                              "ZX Spectrum", 
                              "Amstrad", 
                              "Commodore", 
                              "Pegasus", 
                              "Atari Portfolio", 
                              "Atari TT", 
                              "Atari 65XE", 
                              "Rive Raid", 
                              "Robbo", 
                              "Fred", 
                              "Misja", 
                              "Lasermania" }; 
    string Kolumna2[Ile]  = { "16bit - Amiga 500", 
                              "8bit  - ZX Spectrum", 
                              "8bit  - Amstrad", 
                              "8bit  - Commodore", 
                              "8bit  - Pegasus", 
                              "8bit  - Atari portfolio", 
                              "16bit - Atari TT", 
                              "8bit  - Atari 65XE", 
                              "Gra   - RR", 
                              "Gra   - Robbo", 
                              "Gra   - Fred", 
                              "Gra   - Misja", 
                              "Gra   - Lasermania" }; 
  //Deklaracja zmiennych. 
    int KodKlaw = 0; 
    bool Kol = false; 
  //Wyświetl kolumny. 
    do { 
      system("cls"); 
      cout << "--== Sortowanie alfabetyczne 2 kolumn, w2 ==--\n"; 
      cout << "Copyright (c)by Jan T. Biernat\n\n"; 
      cout << "Kolumna 1"; 
      cout.width(Kol1Szer-9); cout.fill(' '); cout << " "; 
      cout << "Kolumna 2"; 
      SortAZ(Kol1Szer, Kolumna1, Kolumna2, Ile, Kol); 
      cout << "\n\n"; 
      cout << "\nKtora kolumne posortowac (1 - Kolumna 1, 2 - Kolumna 2)?: "; 
      //Obsługa klawiatury. 
        KodKlaw = 0; 
        KodKlaw = getch(); 
        if((KodKlaw == 0) || (KodKlaw == 224)) { 
          KodKlaw = 0; 
          KodKlaw = getch()+224; 
        } 
          if(KodKlaw == 49) { Kol = false; } 
          else if(KodKlaw == 50) { Kol = true; } 
    } while(KodKlaw != 27); 
  cout << "\n\n"; 
} 