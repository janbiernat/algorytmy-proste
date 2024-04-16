#include <iostream>
/*--== Liczba na odwrót ==--
               BEZ BIBLIOTEK
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Napisz program, który wyświetli
  podaną liczbę na odwrót.
*/
using namespace std;
long long LiczbaNaOdwrot(long Liczba) {
//LiczbaNaOdwrot - Wyświetla liczbę w odwrotnej kolejności.
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
//
//Blok główny(startowy).
int main() {
  cout << "--== Liczba na odwrot  ==--\n";
  cout << "              BEZ BIBLIOTEK\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  //Deklaracja zmiennych.
    long long Liczba = 0;
  //Wykonaj zadanie.
    cout << "Liczba: ";
    cin >> Liczba;
    cout << "\nLiczba odwrotnie: [" << LiczbaNaOdwrot(Liczba) << "]";
  cout << "\n\n";
}
/*
Legenda:
Funkcja "long long LiczbaNaOdwrot(long Liczba)".
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