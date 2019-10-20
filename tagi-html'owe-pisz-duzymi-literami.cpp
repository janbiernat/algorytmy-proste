#include <iostream> 
#include <conio.h> 
/*--== Tagi HTML'owe pisz dużymi literami ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program, który przerobi wszystkie tagi HTML'owe 
  na duże litery, tzn. wszystkie litery pomiędzy znakami 
  "<" a ">" zamieni na duże. 
 
  Przykład: 
  Zawartość pliku wejściowego: 
  <html><head><TITLE>Nazwa strony</Title></head><body><b>Cos tam</b> Dowolny TEKST </body></html> 
 
  Plik wyjściowy: 
  <HTML><HEAD><TITLE>Nazwa strony</TITLE></HEAD><BODY><B>Cos tam</B> Dowolny TEKST </BODY></HTML> 
*/ 
using namespace std; 
string tagi_html_na_TAGI_HTML(string Str = "") { 
  //tagi_html_na_TAGI_HTML - Zamienia wszystkie znaczniki HTML na duże. 
    int A = 0, B = 0; 
    if(Str != "") { 
      for(A = B; A < Str.length(); A++) { 
        if(Str[A] == '<') { 
          for(B = A; B < Str.length(); B++) { 
            if(Str[B] == '>') { break; } 
            else { 
                   if(int(Str[B]) > 96) { Str[B] = char(int(Str[B])-32); } 
                 } 
          } 
        } 
      } 
      return Str; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tagi HTML'owe pisz duzymi literami ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
    cout << "\"" << Tekst << "\"\n= \"" << tagi_html_na_TAGI_HTML(Tekst) << "\"."; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 