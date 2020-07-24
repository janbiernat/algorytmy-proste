#include <iostream> 
#include <conio.h> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
/*--== Tabliczka mnożenia - Losowanie kolumny ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który wylosuje 
  1 z 10 kolumn tabliczki mnożenia 
  i wyświetli ją na ekranie. 
*/ 
int main() { 
  cout << "--== Tabliczka mnozenia - Losowanie kolumny ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
  int Liczba = 0; /*Zadeklarowanie zmiennej liczbowej całkowitej 
                    "Liczba" z równoczesnym wyzerowaniem zmiennej.*/ 
  Liczba = rand()%11; /*Wylosowanie jednej liczby z podanego zakresu 
                        (tj. od 0 do 11) i przypisanie wylosowanej 
                        liczby do zmiennej liczbowej całkowitej "Liczba". 
                        Funkcja RAND - umożliwia wylosowanie jednej 
                                       liczby z podanego zakresu.*/ 
  //Wyświetl wylosowaną kolumnę z tabliczki mnożenia. 
    if(Liczba < 1) { Liczba = 1; } 
    cout << "\nKolumna nr: " << Liczba << "\n"; 
    for(int I = 1; I < 11; I++) { 
      cout << "\n "; 
      cout.width(2); cout << I << " * "; 
      cout.width(2); cout << Liczba << " = "; 
      cout.width(3); cout << (I*Liczba); 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
  cout << "\n"; 
} 