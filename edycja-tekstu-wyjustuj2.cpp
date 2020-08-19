#include <iostream> 
#include <conio.h> 
#include <fstream> 
using namespace std; 
/*--== Edycja tekstu: Wyjustowanie tekstu 2 ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, którego zadaniem będzie 
  wyjustowanie podanego tekstu. 
  Tekst ma być pobierany z pliku tekstowego. 
*/ 
string TekstWyjustowany(string Str = "", int IloscZnakow = 0) { 
  //TekstWyjustowany - Funkcja zwraca wyjustowany tekst (tj. do lewej i prawej strony). 
    string Tym = ""; 
    int Wynik = 0; 
    if(Str != "") { 
      if(Str.length() < IloscZnakow) { 
        while(Str.length() < IloscZnakow) { 
          for(int I = 0; I < Str.length(); I++) { 
            if((Str[I] == ' ') && (Str[I+1] != ' ')) { Tym += "  "; } 
            else { Tym += Str[I]; } 
          } 
          Str = ""; Str = Tym; Tym = ""; 
        } 
      } 
      //Korekta (usuwanie nadmiarowych spacji [tzw. znaków pustych]). 
        Wynik = 0; Tym = ""; 
        if(Str.length() > IloscZnakow) { 
          Wynik = Str.length()-IloscZnakow; 
          for(int I = Str.length()-1; I > -1; I--) { 
            if((Str[I] == ' ') && (Str[I+1] != ' ') && (Wynik > 0)) { Wynik--; } 
            else { Tym = Str[I]+Tym; } 
          } 
          Str = ""; Str = Tym; Tym = ""; 
        } 
      return Str; 
    } else { return ""; } 
} 
//= 
string NowaNazwaPliku(string Str = "") { 
  string Roz = "", Nazwa = ""; 
  if(Str != "") { 
    Roz = Str.substr(Str.length()-4, Str.length()); 
    Nazwa = Str.substr(0, Str.length()-4); 
    return Nazwa+"-wynik"+Roz; 
  } else { return ""; } 
} 
//Blok główny(startowy). 
int main(int argc, char *argv[]) { 
  cout << "--== Edycja tekstu: Wyjustowanie tekstu 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const short int IloscZnakow = 40; 
  //Deklaracja zmiennych. 
    string Linia = "", PlikNazwa = "", Tekst = ""; 
  //Wykonaj zadanie. 
    fstream PlikDane(argv[1], ios::in); 
    if(PlikDane != NULL) { 
      cout << "\nPlik tekstowy [zrodlo]  : \"" << argv[1] << "\"."; 
      PlikNazwa = NowaNazwaPliku(argv[1]); 
      cout << "\nPlik tekstowy [wynikowy]: \"" << PlikNazwa << "\".\n"; 
      fstream PlikDaneZ(PlikNazwa.c_str(), ios::out | ios::trunc); 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { 
        Tekst = ""; Tekst = TekstWyjustowany(Linia, IloscZnakow); 
        PlikDaneZ << Tekst << "\n"; 
      } 
      PlikDaneZ.close(); 
    } else { 
             cout << "\nBLAD -?Brak pliku o podanej nazwie na dysku!\n"; 
             //Czekaj, aż użytkownik naciśnie dowolny klawisz. 
               cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
           } 
    PlikDane.close(); 
} 