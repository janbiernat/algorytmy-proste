#include <iostream> 
using namespace std; 
/*--== Wybierz cyfry ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który wybierze tylko 
  cyfry z podanego ciągu znaków. 
*/ 
string tWybierzCyfry(string Str = "") { 
  //tWybierzCyfry - Funkcja wyciąga tylko cyfry z podanego tekstu. 
  string Cyfry = ""; 
  if(Str != "") { 
    for(int I = 0; I < Str.length(); I++) { 
      if(((int)Str[I] > 47) && ((int)Str[I] < 58)) { Cyfry += Str[I]; } //"Cyfry += Str[I];" = "Cyfry = Cyfry+Str[I];". 
    } 
    if(Cyfry != "") { return Cyfry; } else { return "-?Brak cyfr!"; } 
  } else { return "\nBLAD -?Brak danych!\n"; } 
} 
//Blok główny (startowy). 
int main() { 
  cout << "--== Wybierz cyfry ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string Liczba = ""; 
  cout << "\nLiczba: "; getline(cin, Liczba); 
  cout << "Podano \"" << Liczba << "\".\n"; 
  cout << "Wyselekcjonowano: \"" << tWybierzCyfry(Liczba) << "\"."; 
  cout << "\n"; 
} 