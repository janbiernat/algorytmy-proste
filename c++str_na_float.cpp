#include <iostream> 
#include <cstdlib> 
using namespace std; 
/*--== Konwersja STRING na FLOAT ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który wykona konwersję 
  liczby traktowanej jako tekst na liczbę 
  typu FLOAT. 
*/ 
float StrToFloat(string Str = "") { 
  //StrToFloat - Konwersja liczby taktowanej jako tekst na typ FLOAT. 
  const string Inf = "\nBLAD -?Brak danych!\n"; 
  string Cyfry = ""; 
  short int Poz = 0; 
  if(Str != "") { 
    if(Str[0] == '-') { Poz = 1; } 
    for(int I = Poz; I < Str.length(); I++) { 
      if(((int)Str[I] > 47) && ((int)Str[I] < 58) 
      || ((int)Str[I] == 46)) { Cyfry += Str[I]; } //"Cyfry += Str[I];" = "Cyfry = Cyfry+Str[I];". 
    } 
    if(Poz == 1) { Cyfry = Str[0]+Cyfry; } 
    if(Cyfry != "") { return atof(Cyfry.c_str()); } 
    else { cout << Inf; return 0; } 
  } else { cout << Inf; return 0; } 
} 
//Blok główny (startowy). 
int main() { 
  cout << "--== Konwersja STRING na FLOAT ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string Liczba = ""; 
  cout << "\nLiczba: "; getline(cin, Liczba); 
  cout << "Podano \"" << Liczba << "\".\n"; 
  cout << "\nSuma: \"" << (StrToFloat(Liczba) + StrToFloat(Liczba)) << "\"."; 
  cout << "\n"; 
} 