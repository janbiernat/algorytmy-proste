#include <iostream> 
#include <conio.h> 
/*--== Zamień wszystkie litery na małe ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string ZNAKI_na_znaki(string Str = "") { 
  //ZNAKI_na_znaki - Zamienia duże znaki na małe znaki. 
    string Tekst = "";  
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        if((int(Str[A]) > 64) && (int(Str[A]) < 91)) { Tekst = Tekst + char(int(Str[A])+32); } 
        else { Tekst += Str[A]; } 
      } 
      return Tekst; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Zamien wszystkie litery na male ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
    cout << "\"" << Tekst << "\"\n= \"" << ZNAKI_na_znaki(Tekst) << "\"."; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 