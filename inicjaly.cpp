#include <iostream> 
#include <conio.h> 
/*--== Inicjały ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string Inicjaly(string Str = "") { 
  //Inicjaly - Pobiera z podanego imienia i nazwiska 1 literę. 
    string Litery = ""; 
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        if(((Str[A-1] == ' ') && (Str[A] != ' ')) 
        || ((Str[A-1] == '-') && (Str[A] != ' '))) { Litery = Litery+Str[A]; } 
      } 
      return Str[0]+Litery; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Inicjaly ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj imie i nazwisko: "; 
    getline(cin, Tekst); 
    cout << "\"" << Tekst << "\"\n= [" << Inicjaly(Tekst) << "]"; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 