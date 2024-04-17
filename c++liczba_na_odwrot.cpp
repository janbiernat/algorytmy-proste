#include <iostream>
#include <stdlib.h>
/*--== Liczba na odwrót  ==--
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Napisz program, który wyświetli
  podaną liczbę na odwrót.
*/
using namespace std;
void LiczbaNaOdwrot(long Liczba) {
//LiczbaNaOdwrot - Wyświetla liczbę w odwrotnej kolejności.
  short Cyfra = 0;
  do {
    Cyfra = 0;
    Cyfra = (Liczba % 10);
    Liczba /= 10;
    cout << Cyfra;
  } while(Liczba > 0);
}
//--------------------------------------------
long long LiczbaNaOdwrot2(long Liczba) {
//LiczbaNaOdwrot2 - Wyświetla liczbę w odwrotnej kolejności.
  long long Odwrocona = 0;
  while(Liczba > 0) {
    Odwrocona = ((Odwrocona * 10) + (Liczba % 10));
    Liczba /= 10;
  }
  return Odwrocona;
}
//--------------------------------------------
long long LiczbaNaOdwrot3(long Liczba) {
//LiczbaNaOdwrot3 - Wyświetla liczbę w odwrotnej kolejności.
  short Licznik = 0; 
  long long Tym = 0, Potega = 0, Suma = 0;
  Tym = Liczba;
  //Wyliczenie z ilu cyfr składa się podana liczba całkowita.
    do {
      Tym /= 10;
      Licznik++;
    } while(Tym > 0);
  Licznik = Licznik-1; Potega = 1;
  for(int I = 0; I < Licznik; I++) { Potega *= 10; }
  //Odwrócenie podanej liczby całkowitej.
    do {
      Suma+= (Liczba % 10)*Potega;
      Liczba /= 10;
      Potega /= 10;
    } while(Liczba > 0);
  return Suma;
}
//--------------------------------------------
long long LiczbaNaOdwrot4(long Liczba) {
//LiczbaNaOdwrot4 - Wyświetla liczbę w odwrotnej kolejności.
  short Cyfra = 0;
  char _Cyfra[1];
  string NaOdwrot = "";
  do {
    Cyfra = 0;
    Cyfra = (Liczba % 10);
    Liczba /= 10;
    itoa(Cyfra, _Cyfra, 10);
    NaOdwrot+= _Cyfra;
  } while(Liczba > 0);
  return atol(NaOdwrot.c_str());
}
//--------------------------------------------
long long LiczbaNaOdwrot5(long Liczba) {
//LiczbaNaOdwrot5 - Wyświetla liczbę w odwrotnej kolejności.
  char ZnakiCyfr[33];
  string _Liczba = "", NaOdwrot = "";
  ltoa(Liczba, ZnakiCyfr, 10);
  _Liczba = ZnakiCyfr;
  for(int I = _Liczba.length(); I > -1; I--) {
    if(((int)_Liczba[I] > 47)
    && ((int)_Liczba[I] < 58)) {
      NaOdwrot+= _Liczba[I];
    }
  }
  return atol(NaOdwrot.c_str());
}
//
//Blok główny(startowy).
int main() {
  cout << "--== Liczba na odwrot  ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  //Deklaracja zmiennych.
    long long Liczba = 0;
  //Wykonaj zadanie.
    cout << "Liczba: ";
    cin >> Liczba;
    cout << "\nMetoda 1, Liczba odwrotnie: [";
    LiczbaNaOdwrot(Liczba); cout << "]";
    cout << "\nMetoda 2, Liczba odwrotnie: [" << LiczbaNaOdwrot2(Liczba) << "]";
    cout << "\nMetoda 3, Liczba odwrotnie: [" << LiczbaNaOdwrot3(Liczba) << "]";
    cout << "\nMetoda 4, Liczba odwrotnie: [" << LiczbaNaOdwrot4(Liczba) << "]";
    cout << "\nMetoda 5, Liczba odwrotnie: [" << LiczbaNaOdwrot5(Liczba) << "]";
  cout << "\n\n";
}
/*
Opis:
Podana jest liczba 2468, którą należy wyświetlić
od prawej do lewej strony.
W ten sposób otrzymamy liczbę 8642.
Rozwiązanie:
      Dzielenie bez reszty | Reszta | Faktyczny wynik
     -------------------------------------------------
             2468/10 = 246 |      8 | 2468/10 = 246.8
              246/10 =  24 |      6 |  246/10 =  24.6
               24/10 =   2 |      4 |   24/10 =   2.4
                2/10 =   0 |      2 |    2/10 =   0.2
     Liczba odwrócona to 8642 (liczbę odczytujemy z kolumny
     RESZTA od góry do dołu).
   W celu przypisania otrzymanej liczby 8642 do zmiennej
   liczbowej całkowitej należy wykonać następujące obliczenia:
     8 * 10^3 = 8 * 1000 = 8000
     6 * 10^2 = 6 *  100 =  600
     4 * 10^1 = 4 *   10 =   40
     2 * 10^0 = 2 *    1 =    2
     Teraz należy wykonać sumowanie poszczególnych wyników.
     8000 + 600 + 40 + 2 = 8642. Otrzymany wynik jest odwrotnością
     podanej liczby przez użytkownika.
*/