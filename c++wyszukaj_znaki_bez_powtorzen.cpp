#include <iostream> 
#include <conio.h> 
/*--== Wyszukaj znaki bez powtórzeń ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string ZnakiBezPowtorzen(string Str = "") { 
  //ZnakiBezPowtorzen - Wyszukuje wszystkie znaki, które występują tylko raz. 
    short int Licznik = 0; 
    string Znaki = ""; 
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        Licznik = 0; 
        for(int B = 0; B < Str.length(); B++) { 
          if(Str[A] == Str[B]) { Licznik++; } 
        } 
        if(Licznik == 1) { Znaki+= Str[A]; } 
      } 
      return Znaki; 
    } else { return "BLAD -?Brak podanego ciagu znakow!"; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Wyszukaj znaki bez powtorzen ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = "", TekstWynik = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
    TekstWynik = ZnakiBezPowtorzen(Tekst); 
    cout << "Znaki bez powtorzen: [" << TekstWynik << "]\n"; 
    cout << "Znakow jest        : " << TekstWynik.length(); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 