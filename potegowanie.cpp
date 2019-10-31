#include <iostream> 
#include <conio.h> 
/*--== Potęgowanie ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Potęgowanie jest działaniem matematycznym 
 i polega na wielokrotnym mnożeniu liczby przez samą siebie. 
 Liczba, którą będziemy potęgować nazywa się podstawą. 
 Natomiast liczbę określającą ile razy pomnożymy 
 podstawę przez samą siebie, nazywa się wykładnikiem. 
*/ 
using namespace std; 
long int Potega(long int Podstawa, int Wykladnik = 0) { 
  long int Wynik = 1; //Przypisz do zmiennej "Wynik" domyślną wartość 1, 
                      //gdy zmienna "Wykladnik" będzie przechowywała wartość 0. 
  for(int I = 0; I < Wykladnik; I++) { 
    Wynik *= Podstawa; 
  } 
  return Wynik; 
} 
long int Potega2(long int Podstawa, int Wykladnik = 0) { 
  long int Wynik = 1; //Przypisz do zmiennej "Wynik" domyślną wartość 1, 
                      //gdy zmienna "Wykladnik" będzie przechowywała wartość 0. 
  for(int I = 0; I < Wykladnik; I++) { 
    Wynik = Wynik*Podstawa; 
  } 
  return Wynik; 
} 
//Blok główny/startowy. 
int main() { 
  cout << "--== Potegowanie ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja zmiennych znakowych. 
    int Podstawa = 0, Wykladnik = 0; 
  //Pobierz dane z klawiatury. 
    cout << "Wpisz podstawe : "; cin >> Podstawa; 
    cout << "Wpisz wykladnik: "; cin >> Wykladnik; 
  //Wywołanie funkcji. 
    cout << "\n" << Podstawa << "^" << Wykladnik << " = " << Potega(Podstawa, Wykladnik); 
    cout << "\n" << Podstawa << "^" << Wykladnik << " = " << Potega2(Podstawa, Wykladnik); 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
} 