#include <iostream> 
#include <conio.h> 
/*--== Zliczaj literki 2 ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program, który policzy wystąpienia poszczególnych liter w tekście. 
  Zliczając litery należy pominąć fakt, czy litera jest duża lub mała. 
  Na przykład: 
  Podane zdanie to "Anna chodzi do pracy". 
  Ilość poszczególnych liter w podanym tekście to: 
  "A" lub "a": 3 
  "C" lub "c": 2 
  "D" lub "d": 2 
  "H" lub "h": 1 
  "I" lub "i": 1 
  "N" lub "n": 2 
  "O" lub "o": 2 
  "P" lub "p": 1 
  "R" lub "r": 1 
  "Y" lub "y": 1 
  "Z" lub "z": 1 
*/ 
using namespace std; 
//Blok główny/startowy. 
int main() { 
  cout << "--== Zliczaj literki 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const short int ZnakiIlosc = 26; 
    const char ZnakiT1[ZnakiIlosc] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
                                       'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 
                                       'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' }; 
    const char ZnakiT2[ZnakiIlosc] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
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
        if((Tekst[A] == ZnakiT1[B]) || (Tekst[A] == ZnakiT2[B])) { ZnakiLicznik[B]++; } 
        ZnakiIloscBezSpacji = ZnakiIloscBezSpacji+ZnakiLicznik[B]; //Oblicz ilość wszystkich podanych znaków bez spacji. 
      } 
    } 
  //Statystyka znaków - Raport. 
    cout << "\n\nIlosc znakow (bez spacji) to " << ZnakiIloscBezSpacji << " znak(ow) w tym:"; 
    for(int C = 0; C < ZnakiIlosc; C++) { 
      if(ZnakiLicznik[C] != 0) { 
        cout << "\n\"" << ZnakiT1[C] << "\" lub \"" << ZnakiT2[C] << "\": " << ZnakiLicznik[C]; 
      } 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 