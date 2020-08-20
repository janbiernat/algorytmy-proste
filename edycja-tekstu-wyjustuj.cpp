#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Edycja tekstu: Wyjustowanie tekstu ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, którego zadaniem będzie wyjustowanie podanego tekstu. 
*/ 
string TekstWyjustowany(string Str = "", int IloscZnakow = 0) { 
  //TekstWyjustowany - Funkcja zwraca wyjustowany tekst (tj. do lewej i prawej strony). 
    string Tym = ""; 
    int Wynik = 0; 
    if(Str != "") { 
      if(Str.length() < IloscZnakow) { 
        Wynik = IloscZnakow-Str.length(); 
        while(Str.length() < IloscZnakow) { 
          for(int I = 0; I < Str.length(); I++) { 
            if((Str[I] == ' ') && (Str[I+1] != ' ') && (Wynik > 0)) { Tym += "  "; Wynik--; } 
            else { Tym += Str[I]; } 
          } 
          Str = ""; Str = Tym; Tym = ""; 
        } 
      } 
      return Str; 
    } else { return ""; } 
} 
//Blok główny(startowy). 
int main() { 
  cout << "--== Edycja tekstu: Wyjustowanie tekstu ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const short int Ile = 6; 
    string Tekst[Ile] = { "Ciekawy jestem, czy ten program", 
                          "jest fajny(udany).", 
                          "Zadaniem tego programu jest", 
                          "wyjustowanie tekstu.", 
                          "Tego teksu aktualnie czytanego.", 
                          "To jest test!" }; 
  //Deklaracja zmiennych. 
    string Wynik = ""; 
  //Wyjustowanie tekstu. 
    cout << "\nPodany tekst:\n"; 
    for(int I = 0; I < Ile; I++) { 
      cout << Tekst[I] << " (dl. " << Tekst[I].length() << ")"<< "\n"; 
    } 
    cout << "\n\n"; 
    for(int I = 0; I < Ile; I++) { 
      Wynik = ""; Wynik = TekstWyjustowany(Tekst[I], 31); 
      cout << "\"" << Wynik << "\" (dl. " << Wynik.length() << ")" << "\n"; 
    } 
  //Czekaj, aż użytkownik naciśnie dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
} 