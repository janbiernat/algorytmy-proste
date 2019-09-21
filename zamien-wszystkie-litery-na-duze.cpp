#include <iostream> 
#include <conio.h> 
/*--== Zamień wszystkie litery na duże ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string znaki_na_ZNAKI(string Str = "") { 
  //znaki_na_ZNAKI - Zamienia mały znak na duży znak. 
    string Tekst = ""; 
    short int CzyDuzyZnak = 0; 
    int B = 0; 
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        CzyDuzyZnak = 0; 
        for(B = 0; B < 26; B++) { 
          if(char(B+97) == Str[A]) { 
            CzyDuzyZnak = 1; 
            break; 
          } 
        } 
        if(CzyDuzyZnak == 1) { Tekst = Tekst+char(B+65); } 
        else { Tekst = Tekst+Str[A]; } 
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