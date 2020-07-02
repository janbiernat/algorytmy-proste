#include <iostream> 
#include <math.h> 
#include <conio.h> 
using namespace std; 
/*--== Liczba kwadratowa ==-- 
                 Konsola 
  Copyright (c)by Jan T. Biernat 
  = 
  Liczba kwadratowa to taka liczba, która 
  powstała z podniesienia do potęgi drugiej 
  liczby całkowitej. 
  Np. 225 jest liczba kwadratową, 
      ponieważ powstała z podniesienia 
      do potęgi drugiej liczby całkowitej 15. 
  Przykład liczb kwadratowych: 
    1, 4, 9, 16, ..., 225, ..., 961, ..., n. 
*/ 
int main() { 
  cout << "--== Liczba kwadratowa ==--\n"; 
  cout << "               Konsola\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int Liczba = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Liczba: "; 
    cin >> Liczba; 
    if(Liczba < 1) { 
      Liczba = 1; 
      cout << "Podana liczba musi byc wieksza od wartosci 0.\n"; 
      cout << "Wprowadzilem wartosc domyslna 1.\n"; 
    } 
  //Wyliczenia - metoda 1. 
    if(sqrt(Liczba) * sqrt(Liczba) == Liczba) { 
      cout << "\nMetoda 1: " 
           << Liczba << " = " 
           << sqrt(Liczba) << " * " << sqrt(Liczba) << "\n"; 
      cout.width(18); cout.fill(' '); 
      cout << "Liczba \"" << Liczba << "\" jest kwadratem liczby calkowitej \"" << sqrt(Liczba) << "\"."; 
    } 
    cout << "\n"; 
  //Wyliczenia - metoda 2. 
    for(int I = 0; I < Liczba+1; I++) { 
      if(Liczba == (I*I)) { 
        cout << "\nMetoda 2: " 
             << Liczba << " = " 
             << I << " * " << I << "\n"; 
        cout.width(18); cout.fill(' '); 
        cout << "Liczba \"" << Liczba << "\" jest kwadratem liczby calkowitej \""<< I <<"\"."; 
        break; 
      } 
    } 
  //Zatrzymaj program do czasu naciśnięcia klawisza. 
    cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
} 