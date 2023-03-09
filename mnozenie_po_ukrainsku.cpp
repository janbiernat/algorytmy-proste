#include <iostream> 
#include <conio.h> 
using namespace std; 
/* 
  --== Możenie po ukraińsku ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Algorytm: 
  Krok 1 - Zapisz obok siebie 2 liczby, które chcesz pomnożyć (np. 120 i 47 lub 5 i 10). 
  Krok 2 - W 1 kolumnie w kolejnych wierszach podwajaj zapisaną liczbę. 
           Natomiast w drugiej kolumnie w kolejnych wierszach dziel liczbę 
           całkowitą przez 2 i odrzucaj resztę (np. 5/2 = 2.5, to odrzucaj resztę tj. 0.5). 
  Krok 3 - Kontynuuj działanie do momentu, aż w drugiej kolumnie osiągniesz 1. 
  Krok 4 - Jeżeli liczba w drugiej kolumnie jest parzysta, to wykreśl cały wiersz. 
  Krok 5 - Podsumuj (dodaj) wszystkie liczby z pierwszej kolumny. To jest wynik z mnożenia. 
  Na przykład: 
    120 | 47 
    240 | 23 
    480 | 11 
    960 |  5 
   1920 |  2 <- ten wiersz cały usuwamy. 
   3840 |  1 
 Sumujemy liczby: 120+240+480+960+3840 = 5640. 
*/ 
int main() { 
  cout << "--== Mozenie po ukrainsku ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int A = 0, B = 0, Suma = 0; 
  //Wyświetlenie pytania i pobranie danych z klawiatury. 
    cout << "A = "; cin >> A; 
    cout << "B = "; cin >> B; 
  //Wyświetlenie wyniku z mnożenia dwóch liczb wykonanego tradycyjną metodą. 
    cout << A << " * " << B << " = " << (A*B); 
  //Algorytm: Mnożenie po ukraińsku. 
    cout << "\n"; 
    for(int I = 0; B > 0; I++) { 
      if(B % 2 != 0) { Suma+= A; } 
      cout << "\n"; 
      cout.width(7); cout << A << " | "; 
      cout.width(7); cout << B; 
      A = 2 * A; 
      B = B / 2; 
    } 
    cout << "\n\nSuma = " << Suma; 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 