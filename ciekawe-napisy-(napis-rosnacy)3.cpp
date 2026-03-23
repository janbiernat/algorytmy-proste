#include <iostream>
#include <fstream>
/*--== Ciekawe napisy (napis rosn¹cy) 3, Funkcja ==--
                                Konsola
  Copyright (c)by Jan T. Biernat
  =
  Napis rosn¹cy to taki napis, w którym
  kod ASCII ka¿dej kolejnej litery jest wiêkszy
  od kodu poprzedniej.
  Np.: GIMP, most, gry, mors.
  =
  Napisz program, który wykryje czy podany
  wyraz jest rosn¹cy. Wyrazy maj¹ byæ pobierane
  z pliku tekstowego.
*/
using namespace std;
int CzyNapisRosnacy(string Str) {
  int KodZnaku = 0;
  for(int I = 0; I < Str.length(); I++) {
    if((int)Str[I] > KodZnaku) { KodZnaku = (int)Str[I]; }
    else { KodZnaku = 0; break; }
  }
  return KodZnaku;
}
//
//Blok g³ówny.
int main() {
  cout << "--== Ciekawe napisy (napis rosnacy) 3, Funkcja ==-- \n";
  cout << "                              Konsola \n";
  cout << "Copyright (c)by Jan T. Biernat \n \n \n";
  //Deklaracja zmiennych.
    string Linia = "";
    long int Licznik = 0, KodZnaku = 0;
  //Kod program.
    fstream PlikDane("wyrazy.txt", ios::in);
  //Pobranie danych z pliku.
    if(PlikDane != NULL) {
      Linia = "";
      while(getline(PlikDane, Linia)) {
        KodZnaku = 0; KodZnaku = CzyNapisRosnacy(Linia);
          if(KodZnaku > 0) {
            Licznik++;
            if(Licznik > 1) { cout << ", \n"; }
              cout.width(2); cout.fill(' ');
              cout << Licznik << ". " << Linia;
          }
      }
      if(Licznik > 0) cout << ".";
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; }
    PlikDane.close();
cout << "\n \n";
}