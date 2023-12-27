#include <iostream>
#include <conio.h>
using namespace std;
/*--== Edycja tekstu ==--
  Usuwanie pojedynczych znaków
  znajdujących się na końcu wiersza.
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który usunie pojedyncze
  znaki znajdujące się na końcu wiersza
  (tzw. sieroty).
  Usunięte znaki muszą pojawić się
  na początku kolejnego wiersza.
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
int main() {
  cout << "--== Edycja tekstu: Usuwanie 1 znakow znajdujacych sie na koncu wiersza ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n";
  //Deklaracja stałych.
    const short int Ile = 6; 
    string Tekst[Ile] = {"Wracam do domu z",
                         "kina. To jest test i z",
                         "ciekawości zobaczymy czy będzie OK.",
                         "I tak, jest OK. I",
                         "koniec!",
                         ""};
  //Przed usunięciem 1 znaków z końca wiersza.
    cout << "\nPodany tekst:\n";
    for(int I = 0; I < Ile; I++) {
      cout << "[" << Tekst[I] << "]\n";
    } 
  //Wykonanie zadania.
    for(int I = 0; I < Ile-1; I++) {
      TekstUsun1Znaki(Tekst[I], Tekst[I+1]);
    }
  //Po usunięciu 1 znaków z końca wiersza.
    cout << "\n\nZadanie wykonane:\n";
    for(int I = 0; I < Ile; I++) {
      cout << "[" << Tekst[I] << "]\n";
    }
  //Czekaj, aż użytkownik naciśnie dowolny klawisz.
    cout << "\n\nNacisnij dowolny klawisz..."; getch();
}