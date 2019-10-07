#include <iostream> 
#include <conio.h> 
/*--== Zliczaj literki ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program, który policzy wystąpienia poszczególnych liter w tekście. 
  Na przykład: 
  Podane zdanie to "jest fajnie". 
  Ilość poszczególnych liter w podanym tekście to: 
  'a': 1 
  'e': 2 
  'f': 1 
  'i': 1 
  'j': 2 
  'n': 1 
  's': 1 
  't': 1 
*/ 
using namespace std; 
//Blok główny/startowy. 
int main() { 
  cout << "--== Zliczaj literki ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const short int ZnakiIlosc = 52; 
    const char Znaki[ZnakiIlosc] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
                                     'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 
                                     'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
                                     'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
                                     'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 
                                     's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
    short int ZnakiLicznik[ZnakiIlosc]; 
    int ZnakiIloscBezSpacji = 0; 
  //Wyzerowanie zmiennej tablicowej "ZnakiLicznik". 
    for(int I = 0; I < ZnakiIlosc; I++) { ZnakiLicznik[I] = 0; } 
  //Pobierz dane z klawiatury. 
    cout << "\nPodaj dowolny tekst: "; 
    getline(cin, Tekst); //Pobierz cały ciąg znaków z klawiatury. 
    cout << "Podany tekst to \"" << Tekst << "\"."; 
  //Statystyka - Obliczanie. 
    for(int A = 0; A < Tekst.length(); A++) { 
      ZnakiIloscBezSpacji = 0; //Wyzerowanie zmiennej liczbowej. 
      for(int B = 0; B < ZnakiIlosc; B++) { 
        if(Tekst[A] == Znaki[B]) { ZnakiLicznik[B]++; } 
        ZnakiIloscBezSpacji = ZnakiIloscBezSpacji+ZnakiLicznik[B]; //Oblicz ilość wszystkich podanych znaków bez spacji. 
      } 
    } 
  //Statystyka znaków - Raport. 
    cout << "\n\nIlosc znakow (bez spacji) to " << ZnakiIloscBezSpacji << " znak(ow) w tym:"; 
    for(int C = 0; C < ZnakiIlosc; C++) { 
      if(ZnakiLicznik[C] != 0) { 
        cout << "\n\"" << Znaki[C] << "\": " << ZnakiLicznik[C]; 
      } 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 