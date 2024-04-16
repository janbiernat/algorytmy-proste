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
long long LiczbaNaOdwrot3(long Liczba) {
//LiczbaNaOdwrot3 - Wyświetla liczbę w odwrotnej kolejności.
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
long long LiczbaNaOdwrot4(long Liczba) {
//LiczbaNaOdwrot4 - Wyświetla liczbę w odwrotnej kolejności.
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
  cout << "\n\n";
}
/*
Legenda:
1. Funkcja "void LiczbaNaOdwrot(long Liczba)".
   Zmieniamy kolejność cyfr w podanej liczbie całkowitej,
   np. 1357. Wynikiem działania funkcji ma być liczba 7531.
   Algorytm - Kroki:
   Pętla DO ... WHILE wykonuje zawarte pomiędzy klamrami instrukcje
   do czasu, aż zawartość zmiennej LICZBA będzie mniejsza od 1.
   W momencie, gdy zawartość zmiennej LICZBA będzie mniejsza
   od 1 nastąpi przerwanie wykonania pętli DO ... WHILE.
   W trakcie działania pętli podana liczba całkowita jest przy
   każdym powtórzeniu dzielona bez reszty oraz wyciągana jest
   cyfra z dzielenia moduło (dzielenie moduło, tj. %).
   Wyciągana cyfra po przecinku (dzielenie moduło %) jest wyświetlana
   na ekranie, w wyniku czego otrzymujemy liczbę odwróconą.
   Przykład:
      Odwracamy liczbę 1357.
   Rozwiązanie:
      Dziel bez reszty | Reszta | Faktyczny wynik
     ---------------------------------------------
         1357/10 = 135 |      7 | 1357/10 = 135.7
          135/10 =  13 |      5 |  135/10 =  13.5
           13/10 =   1 |      3 |   13/10 =   1.3
            1/10 =   0 |      1 |    1/10 =   0.1
   Liczba odwrócona to 7531.
=
2. Funkcja "long long LiczbaNaOdwrot2(long Liczba)".
   Podana jest liczba całkowita 2468.
   Krok 1. Najpierw należy określić z ilu cyfr składa się
           podana liczba całkowita (liczba posiada 4 cyfry).
   Krok 2. Od wyliczonej ilości cyfry odejmujemy 1,
           ponieważ ilość cyfr będziemy liczyć od zera
           (tj. 2[0], 4[1], 6[2], 8[3]).
   Krok 3. Na podstawie ilości cyfr obliczamy potęgę podstawy
           (tj. 10) pomniejszoną o wartość 1 (tj. 10^3 = 1000).
   Krok 4. Odwracamy podaną liczbę całkowitą.
           Każdą liczbę po przecinku mnożymy przez potęgę,
           która w kolejnym kroku jest dzielona przez 10.
           Również podana liczba całkowita jest dzielona przez 10
           w kolejnych krokach, do czasu, gdy wynik z dzielenia
           osiągnie wartość mniejszą od 1. Wtedy nastąpi przerwania
           działania pętli DO ... WHILE.
   Przykład:
        Dziel bez reszty | Reszta | Faktyczny wynik | Liczba po przecinku * potęga 
       ---------------------------------------------|------------------------------
           2468/10 = 246 |      8 | 2468/10 = 246.8 | 8 * 10^3 = 8000
            246/10 =  24 |      6 |  246/10 =  24.6 | 6 * 10^2 =  600
             24/10 =   2 |      4 |   24/10 =   2.4 | 4 * 10^1 =   40
              2/10 =   0 |      2 |    1/10 =   0.2 | 2 * 10^0 =    2
        Liczba odwrócona to 8000+600+40+2 = 8642.
*/