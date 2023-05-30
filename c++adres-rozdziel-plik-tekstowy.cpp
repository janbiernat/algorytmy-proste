#include <iostream> 
#include <conio.h> 
#include <fstream> 
using namespace std; 
/*--== Rozdziel pełny adres na części (plik tekstowy) - konsola ==-- 
  Copyright (c)by Jan T. Biernat 
  - 
  Zadanie: 
  Napisz program, który rozdzieli podanych adres 
  na poszczególne elementy. 
  Na przykład: 
    Adres pełny: Armii Krajowej 123/45a. 
    Poszczególne części adresu: 
      1) Ul.                    : Armii Krajowej. 
      2) Nr domu i nr mieszkania: 123/45a. 
      3) Nr domu                : 123. 
      4) Nr mieszkania          : 45a. 
*/ 
string NazwaPlikuBezRoz(string Str = "") { 
  string Wynik = ""; 
  if(Str != "") { 
    for(int I = Str.length(); I > -1; I--) { 
      if(Str[I] == '.') { Wynik = Str.substr(0, I); break; } 
      else { Wynik = Str; } 
    } 
  } else { Wynik = "-?"; } 
  return Wynik; 
} 
string AdresRozdzielNaCzesci(string AdresPelny = "") { 
  string Rezultat = "";  
  int AdresNrSpacji = 0, AdresNrUkosnik = 0, ZnakNr = 0; 
  if(AdresPelny != "") { 
    Rezultat += AdresPelny; 
    //Znajdź znak spacji od prawej strony. 
      for(int I = AdresPelny.length(); I > -1; I--) { 
        if((AdresPelny[I] == '/') && ( AdresNrUkosnik == 0)) { AdresNrUkosnik = I; } 
        if((AdresPelny[I] == ' ') && (AdresNrSpacji == 0)) { AdresNrSpacji = I; break; } 
      } 
    //Poprawność adresu. 
      if(AdresNrSpacji != 0) { 
        ZnakNr = 0; ZnakNr = (int)AdresPelny[AdresNrSpacji+1]; 
        if((ZnakNr > 47) && (ZnakNr < 58)) { 
          Rezultat += ';'+AdresPelny.substr(0, AdresNrSpacji); 
          Rezultat += ';'+AdresPelny.substr(AdresNrSpacji+1, AdresPelny.length()); 
          if(AdresNrUkosnik > 0) { 
            Rezultat += ';'+AdresPelny.substr(AdresNrSpacji+1, AdresNrUkosnik-(AdresNrSpacji+1)); 
            Rezultat += ';'+AdresPelny.substr(AdresNrUkosnik+1, AdresPelny.length()); 
          } 
        } 
      } 
    return Rezultat; 
  } else { return "BLAD -?Brak danych!"; } 
} 
int main(int argc, char *argv[]) { 
  cout << "--== Rozdziel pelny adres na czesci (plik tekstowy) - konsola ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  cout << "UWAGA: Program pracuje TYLKO na plikach tekstowych.\n\n"; 
  //Deklaracja zmiennych. 
    string NazwaPliku = "", Linia = ""; 
  //Pobranie danych z pliku. 
    fstream PlikDane(argv[1], ios::in); 
      if(PlikDane != NULL) { 
        cout << "\nDane pobierane sa z pliku: \"" << argv[1] << "\".\n"; 
        NazwaPliku = NazwaPlikuBezRoz(argv[1])+"-wynik.csv"; 
        cout << "Wynik zapisz w pliku: \"" << NazwaPliku << "\".\n\n"; 
        cout << "Wykonuje zadanie...\n"; 
        fstream PlikDaneWynikowe(NazwaPliku.c_str(), ios::out | ios::trunc); 
          PlikDaneWynikowe << "Adres;Ulica;Nr domu i mieszkania;Nr domu;Nr mieszkania\n"; 
          Linia = ""; 
          while(getline(PlikDane, Linia)) { 
            cout << Linia << "\n"; 
            PlikDaneWynikowe << AdresRozdzielNaCzesci(Linia) << "\n"; 
          } 
          PlikDaneWynikowe.close(); 
      } else { 
               cout << "\nBLAD -?Brak podanej nazwy pliku jako parametru!"; 
               cout << "\n\n\nNacisnij dowolny klawisz..."; getch(); 
             } 
    PlikDane.close(); 
  cout << "\n"; 
} 