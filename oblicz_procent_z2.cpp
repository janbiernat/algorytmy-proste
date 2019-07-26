#include <iostream> 
#include <conio.h> 
/*--== Oblicz procent z ... - w2 ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main () { 
  cout << "--== Oblicz procent z ... - w2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  cout << "Uwaga: Prosze podawac tylko liczby dodatnie.\n" 
       << "       Wpisanie wartosci zerowej, spowoduje wyjscie z programu.\n\n"; 
  //Deklaracja zmiennych. 
    float StalaWartosc = 0, Liczba = 0; 
  //Pobranie danych z klawiatury i obliczenie ile procent stanowy liczba 2 z liczby 1. 
    do { 
      cout << "\nPodaj maksymalna stala wartosc: "; cin >> StalaWartosc; 
      if(StalaWartosc > 0) { 
        cout << "\n\n--== Podana maksymalna wartosc to " << StalaWartosc << ". ==--"; 
        do { 
          cout << "\nPodaj dowolna liczbe wieksza od 0, a mniejsza lub rowna "<< StalaWartosc << ".: "; 
          cin >> Liczba; 
          if((Liczba > 0) && (Liczba <= StalaWartosc)) { 
            cout << "\n" << Liczba << " * 100 / " << StalaWartosc << " = " << (Liczba*100/StalaWartosc) << "%.\n"; 
          } else { cout << "BLAD -?Druga podana liczba musi byc mniejsza od pierwszej podanej liczby!\n"; } 
        } while (Liczba > 0); 
      } 
    } while(StalaWartosc > 0); 
} 