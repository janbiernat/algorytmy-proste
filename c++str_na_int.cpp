#include <iostream> 
#include <cstdlib> 
using namespace std; 
/*--== Konwersja STRING na INT ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który wykona konwersję 
  liczby traktowanej jako tekst na liczbę 
  typu INT(ang. integer). 
*/ 
int StrToInt(string Str = "") { 
  //StrToInt - Konwersja liczby taktowanej jako tekst na typ INT(ang. integer). 
  const string Inf = "\nBLAD -?Brak danych!\n"; 
  string Cyfry = ""; 
  if(Str != "") { 
    for(int I = 0; I < Str.length(); I++) { 
      if(((int)Str[I] > 47) && ((int)Str[I] < 58)) { Cyfry += Str[I]; } //"Cyfry += Str[I];" = "Cyfry = Cyfry+Str[I];". 
    } 
    if(Cyfry != "") { return atoi(Cyfry.c_str()); } 
    else { cout << Inf; return 0; } 
  } else { cout << Inf; return 0; } 
} 
//Blok główny (startowy). 
int main() { 
  cout << "--== Konwersja STRING na INT ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string Liczba = ""; 
  cout << "\nLiczba: "; getline(cin, Liczba); 
  cout << "Podano \"" << Liczba << "\".\n"; 
  cout << "\nSuma: \"" << (StrToInt(Liczba) + StrToInt(Liczba))<< "\"."; 
  cout << "\n"; 
} 