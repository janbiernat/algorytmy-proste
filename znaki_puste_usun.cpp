#include <iostream> 
using namespace std; 
/*--== Usuwaj nadmiarowe znaki puste (czyli znaki spacji) ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program w którym za pomocą funkcji 
  zostaną usunięte nadmiarowe spacje. 
  Przykład: 
       Podany jest ciąg znaków: 
       "          Komputer          jest        przydatny          w     życiu    człowieka    ". 
 
       Wynikiem działania funkcji ma być zwrócony ciąg znaków: 
       "Komputer jest przydatny w życiu człowieka". 
*/ 
string znaki_puste_usun(string Str = "") { 
  //znaki_puste_usun - Funkcja usuwa nadmiarowe znaki puste (czy znaki spacji). 
  string Tekst = ""; 
  int Tak = 0; 
  if(Str != "") { 
    for(int I = 0; I < Str.length(); I++) { 
      if(Str[I] != ' ') { Tekst += Str[I]; Tak = 0; } 
      else { 
             if(Tak == 0) { Tekst += ' '; Tak++; } 
           } 
    } 
    Str = ""; 
    if(Tekst[0] == ' ') { Str = Tekst.substr(1, Tekst.length()); } 
    else { Str = Tekst; } 
    if(Str[Str.length()-1] == ' ') { return Str.substr(0, Str.length()-1); } 
    else { return Str; } 
  } else { return "\n-?Brak podanego tekstu!"; } 
} 
//Blok główny(startowy). 
int main() { 
  cout << "--== Usuwaj nadmiarowe znaki puste (czyli znaki spacji) ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string Tekst = ""; 
  cout << "Podaj tekst: "; getline(cin, Tekst); 
  cout << "\nPodany tekst to: \"" << Tekst << "\"."; 
  cout << "\nTekst bez nadmiarowych spacji: \"" << znaki_puste_usun(Tekst) << "\".\n\n"; 
} 