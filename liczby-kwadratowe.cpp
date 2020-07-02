#include <iostream> 
#include <math.h> 
#include <conio.h> 
using namespace std; 
/*--== Liczby kwadratowe ==-- 
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
  cout << "--== Liczby kwadratowe ==--\n"; 
  cout << "               Konsola\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int Zakres = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Zakres: "; 
    cin >> Zakres; 
    if(Zakres < 1) { 
      Zakres = 1; 
      cout << "Podana liczba musi byc wieksza od wartosci 0.\n"; 
      cout << "Wprowadzilem wartosc domyslna 1.\n"; 
    } 
  //Wyliczenia. 
    for(int I = 0; I < Zakres; I++) { 
      if(sqrt(I+1) * sqrt(I+1) == (I+1)) { 
        cout << (I+1) << " = " 
             << sqrt(I+1) << " * " 
             << sqrt(I+1) << "\n"; 
      } 
    } 
  //Zatrzymaj program do czasu naciśnięcia klawisza. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
} 