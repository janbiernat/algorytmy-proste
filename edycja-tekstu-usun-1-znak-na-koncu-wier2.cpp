#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
/*--== Edycja tekstu w2 ==--
  Usuwanie pojedynczych znaków
  znajdujących się na końcu wiersza.
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który usunie pojedyncze
  znaki znajdujące się na końcu wiersza
  (tzw. sieroty).
  Usunięte znaki muszą pojawić się
  na początku kolejnego wiersza.
  Dane są pobierane z pliku tekstowego.
*/
void TekstUsun1Znaki(string &S1, string &S2) {
//TekstUsun1Znaki.
//Funkcja usuwa 1 znaki umieszczone na końcu
//wiersza i przenosi je do kolejnego wiersza.
  string T1 = "", T2 = "";
  T1 = S1; T2 = S2;
  for(int I = S1.length(); I > -1; I--) {
    if((S1[I-2] != ' ')
    && (S1[I-1] != ' ')
    && (S1[I] != ' ')) { break; }
    else if((S1[I-2] != ' ')
         && (S1[I-1] != ' ')
         && (S1[I] == ' ')) {
           T1 = ""; T1 = S1.substr(0, I);
           T2 = ""; T2 = S1.substr(I+1, S1.length())+' '+S2;
           break;
         }
  }
  S1 = ""; S1 = T1; S2 = ""; S2 = T2;
}
//Blok główny(startowy).
int main(int argc, char *argv[]) {
  cout << "--== Edycja tekstu w2: Usuwanie 1 znakow znajdujacych sie na koncu wiersza ==--\n";
  cout << "Praca z plikami tekstowymi.\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  //Deklaracja zmiennych.
    string Linia = "", LiniaTym = "";
    long LiniaNr = 0;
  //Odczytaj plik tekstowy.
    fstream PlikDane(argv[1], ios::in);
    if(PlikDane != NULL) {
      cout << "Odczytany plik to:\n"
           << "\"" << argv[1] << "\".\n\n";
      cout << "Zawartosc pliku tekstowego:\n";
      LiniaNr = 0; LiniaTym = "";
      while(getline(PlikDane, Linia)) {
        LiniaNr++;
        if(LiniaTym != "") {
          Linia = LiniaTym+Linia;
          LiniaTym = "";
        }
        TekstUsun1Znaki(Linia, LiniaTym);
        cout.width(5); cout.fill(' '); cout << (LiniaNr) << ") ";
        cout << "[" << Linia << "]\n"; 
      } 
    } else { cout << "\nBLAD -?Brak pliku lub plik o podanej nazwie nie istnieje!\n\n"; } 
  //Czekaj, aż użytkownik naciśnie dowolny klawisz.
    cout << "\n\nNacisnij dowolny klawisz..."; getch();
}