#include <iostream> 
#include <conio.h> 
/*--== Zamień wszystkie litery na małe ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string ZNAKI_na_znaki(string Str = "") { 
  //ZNAKI_na_znaki - Zamienia duży znak na mały znak. 
    string Tekst = ""; 
    short int CzyDuzyZnak = 0; 
    int B = 0; 
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        CzyDuzyZnak = 0; 
        for(B = 0; B < 26; B++) { 
          if(char(B+65) == Str[A]) { 
            CzyDuzyZnak = 1; 
            break; 
          } 
        } 
        if(CzyDuzyZnak == 1) { Tekst = Tekst+char(B+97); } 
        else { Tekst = Tekst+Str[A]; } 
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