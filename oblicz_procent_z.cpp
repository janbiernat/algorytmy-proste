#include <iostream> 
#include <conio.h> 
/*--== Oblicz procent z ... ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main () { 
  cout << "--== Oblicz procent z ... ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  cout << "Uwaga: Prosze podawac tylko liczby dodatnie.\n" 
       << "       Wpisanie wartosci zerowej, spowoduje wyjscie z programu.\n\n"; 
  //Deklaracja zmiennych. 
    float StalaWartosc = 0, Liczba = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj maksymalna stala wartosc: "; cin >> StalaWartosc; 
    cout << "Podaj dowolna liczbe wieksza od 0, a mniejsza lub rowna "<< StalaWartosc << ".: "; 
    cin >> Liczba; 
  //Obliczenie ile procent stanowy liczba 2 z liczby 1. 
    if((StalaWartosc > 0) && (Liczba > 0)) { 
      if(Liczba <= StalaWartosc) { 
        cout << "\n" << Liczba << " * 100 / " << StalaWartosc << " = " << (Liczba*100/StalaWartosc) << "%."; 
      } else { cout << "BLAD -?Druga podana liczba musi byc mniejsza od pierwszej podanej liczby!"; } 
    } else { cout << "BLAD -?Jedna z podanych wartosci jest mniejsza od 1!"; } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 