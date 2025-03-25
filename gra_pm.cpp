#include <iostream>
#include <conio.h>
#include <cstdlib> 
#include <ctime> 
#include <fstream>
/*--== Gra w Państwa, Miasta: Ściąga ==--
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który będzie pomagał
  przy grze Państwa, Miasta.
  Założenia dla baz z danymi do programu:
  1. Dane muszą być umieszczone w plikach tekstowych,
     które znajdują się w tym samym katalogu co plik (program) "gra_pm.exe".
  2. Każda kategoria posiada pliki tekstowe, dla poszczególnych liter alfabetu.
     Na przykład: kategoria MIASTA.
                  Tworzymy plik tekstowy dla miast rozpoczynających się
                  od litery A. Tak samo dla miast rozpoczynających się
                  od litery B. Dla kolejnych miast robimy podobnie.
     Dla kolejnych kategorii robimy tak samo.
  3. Nazwa pliku z danymi składa się z trzech elementów:
     3.1. Litery alfabetu podanej przez użytkownika.
     3.2. Nazwy pobranej z pliku konfiguracyjnego (tj. "gra_pm.cfg").
          Nazwa pliku tekstowego znajduje się w pliku konfiguracyjnym
          za znakiem średnika (tj. ";").
     3.3. Kropki i rozszerzenia trzyliterowego (tj. ".txt").
*/
using namespace std;
string TekstWyrownaj(string Str = "", int Dl = 0) {
  string Rezultat = "";
  Rezultat+= Str;
  if((Str != "") && (Dl > Str.length())) {
    for(int I = 0; I < Dl-Str.length(); I++) {
      Rezultat+= " ";
    }
  }
  Rezultat+= ": ";
  return Rezultat;
}
//
string WierszPobierzLos(string PlikNazwa = "") {
  const int Ilosc = 300;
  //
  //Deklaracja zmiennych.
    string Dane[Ilosc];
    string Linia = "", Rezultat = "";
    long Licznik = 0;
  //
  //Odczyt pliku tekstowego.
    fstream PlikDane(PlikNazwa.c_str(), ios::in);
    if(PlikDane != NULL) {
      Linia = "";
      while(getline(PlikDane, Linia)) {
        Dane[Licznik] = Linia; Licznik++;
      }
      Dane[Licznik] = "<k>";
      //
      //Losowanie wiersza.
        srand(time(NULL));
        if(Linia != "") { Rezultat = Dane[rand()%Licznik]+"."; }
        else { Rezultat = "Plik jest pusty!"; }
    } else { Rezultat = "BLAD -?Brak pliku!"; }
    PlikDane.close();
    return Rezultat;
}
//
//Blok główny.
int main() {
  cout << "--== Gra w Panstwa, Miasta: Sciaga ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  //
  //Deklaracja zmiennych.
    string Linia = "";
    int ZnakPoz = 0;
    string Litera = "";
    string PlikNazwa[2];
  //
  //Podaj literę.
    cout << "Litera (a-z): ";
    getline(cin, Litera);
  //
  //Wczytanie pliku konfiguracyjnego.
    if(Litera != "") {
      if((int(Litera[0]) > 64) && (int(Litera[0]) < 91)) {
        Litera[0] = char(int(Litera[0])+32); //Zamień DUŻĄ LITERĘ na małą literę (np. A -> a).
      }
      cout << "Podana litera to \"" << Litera[0] << "\".\n";
      fstream PlikDane("gra_pm.cfg", ios::in);
      if(PlikDane != NULL) {
        Linia = "";
        while(getline(PlikDane, Linia)) {
          ZnakPoz = 0;
          for(ZnakPoz = 0; ZnakPoz < Linia.length(); ZnakPoz++){
           if(Linia[ZnakPoz] == ';') { break; }
          }
          PlikNazwa[0] = ""; PlikNazwa[0] = Linia.substr(0, ZnakPoz);
          PlikNazwa[1] = ""; PlikNazwa[1] = Litera[0]+Linia.substr(ZnakPoz+1, Linia.length())+".txt";
          cout << "\n" << TekstWyrownaj(PlikNazwa[0], 8) << WierszPobierzLos(PlikNazwa[1]);
        }
      } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; }
      PlikDane.close();
  } else { cout << "BLAD -?Brak podanej litery!"; }
  //
  //Naciśnij dowolny klawisz.
    cout << "\n\nNacisnij dowolny klawisz ...";
    getch();
cout << "\n\n";
}