#include <iostream> //Obsługa strumieni (np. przesyłanie danych na ekran). 
#include <conio.h>  //Obsługa klawiatury. 
using namespace std; 
/*--== Liczba doskonała ==-- 
  Copyright (c)by Jan T. Biernat 
  == 
  Liczby naturalne - mat. to liczby 1, 2, 3, ... (niektóre definicje zaliczają do nich również 0). 
  Liczba doskonała - mat. liczba naturalna równa sumie wszystkich 
                     swoich dzielników mniejszych od niej samej. 
  Powyższe definicje pochodzą z encyklopedii PWN. 
  = 
  Przykłady liczb doskonałych, są poniżej. 
  Przykład 1. 
              Liczba 6 jest doskonała, ponieważ: 1+2+3 = 6 
              Liczby 1, 2 i 3 to podzielniki liczby 6 mniejsze od 6. 
  Przykład 2. 
              Liczba 28 jest doskonała, ponieważ: 1+2+4+7+14 = 28 
              Liczby 1, 2, 4, 7, 14 to podzielniki liczby 28 mniejsze od 28. 
  Przykład 3. 
              Liczba 496 jest doskonała, ponieważ: 1+2+4+8+16+31+62+124+248 = 496 
              Liczby 1, 2, 4, 8, 16, 31, 62, 124, 248 to jedyne podzielniki liczby 496 mniejsze od 496. 
  = 
  Kolejne liczby doskonałe to: 8 128, 33 550 336, 8 589 869 056, 137 438 691 328, ... . 
  Wszystkie znane dotychczas liczby doskonałe (jest ich 39) są parzyste. <- za encyklopedią PWN. 
*/ 
long int LiczbaDoskonala(long int Liczba = 0) { 
  //LiczbaDoskonala - funkcja sprawdza, czy podana liczba jest liczbą doskonałą. 
    long int Wynik = 0; 
    if(Liczba > 0) { 
      for(int I = 1; I < Liczba; I++) { 
        if(Liczba % I == 0) { Wynik += I; } 
      } 
      if(Wynik == Liczba) { return Liczba; } else { return 0; } 
    } else { return 0; } 
} 
int main() { 
  cout << "--== Liczba doskonala ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych liczbowych. 
    long int Liczba = 0; 
  //Pobierz dane z klawiatury. 
    cout << "Liczba: "; cin >> Liczba; 
  //Wywołanie funkcji "LiczbaDoskonala". 
    cout << "\n" << Liczba << " <-- jest liczba "; 
    if(LiczbaDoskonala(Liczba) > 0) { cout << "doskonala."; } 
    else { cout << "naturalna."; } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 