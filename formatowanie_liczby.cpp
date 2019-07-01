#include <iostream> 
#include <conio.h> 
/*--==  Formatowanie liczby ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string tFL12_345(string Liczba="") { 
  //tFL12_345 - Formatuje liczbê, tj. 12345 = 12 345. 
    short int Licznik = 0; 
    string Znaki = ""; 
    if(Liczba != "") { 
      for(int I = Liczba.length()-1; I > -1; I--) { 
        Znaki = Liczba[I]+Znaki; 
        Licznik++; 
        if(Licznik > 2) { 
          Licznik = 0; 
          Znaki = char(32)+Znaki; 
        } 
      } 
      //Usuñ 1 pusty znak (tzw. spacje). 
        if(Znaki[0] == char(32)) { return Znaki.substr(1, Znaki.length()); } 
        else { return Znaki; } 
    } else { cout << "?"; } 
} 
//Blok g³ówny/startowy. 
int main() { 
  cout <<"--==  Formatowanie liczby ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Liczba = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Liczba: "; 
    cin >> Liczba; 
    cout << Liczba << " = " << tFL12_345(Liczba) << "."; 
  //Naciœnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 