#include <iostream> 
using namespace std; 
string WyrWielLit(string Str = "") { 
  //WyrWielLit - Każdy wyraz pisz z Wielkiej Litery. 
  string T = ""; 
  if(Str != "") { 
    Str = ' '+Str; 
    for(int I = 0; I < Str.length(); I++) { 
      if((Str[I-1] == ' ') && (Str[I] != ' ')) { 
        if(((int)Str[I] > 96) && ((int)Str[I] < 123)) { T = T+char((int)Str[I]-32); } 
        else { T += Str[I]; } 
      } else { 
               if(((int)Str[I] > 64) && ((int)Str[I] < 91)) { T = T+char((int)Str[I]+32); } 
               else { T += Str[I]; } 
             } 
    } 
    return T.substr(1, T.length()); 
  } else { return "?"; } 
} 
//Blok główny (startowy). 
int main() { 
  cout << "--== Kazdy wyraz pisz z Wielkiej Litery ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n"; 
  cout << "\n\n"; 
  string T = ""; 
  cout << "Podaj dowolny tekst: "; getline(cin, T); 
  cout << "Podany tekst to  : \"" << T << "\".\n"; 
  cout << "Tekst po zamianie: \"" << WyrWielLit(T) << "\"."; 
  cout << "\n\n"; 
} 