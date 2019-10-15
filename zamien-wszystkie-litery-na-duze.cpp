#include <iostream> 
#include <conio.h> 
/*--== Zamień wszystkie litery na duże ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string znaki_na_ZNAKI(string Str = "") { 
  //znaki_na_ZNAKI - Zamienia małe znaki na duże znaki. 
    string Tekst = ""; 
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        if((int(Str[A]) > 96) && (int(Str[A]) < 123)) { Tekst = Tekst + char(int(Str[A])-32); } 
        else { Tekst += Str[A]; } 
      } 
      return Tekst; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Zamien wszystkie litery na duze ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
    cout << "\"" << Tekst << "\"\n= \"" << znaki_na_ZNAKI(Tekst) << "\"."; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 