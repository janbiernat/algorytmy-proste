#include <iostream> 
#include <cstdlib> //1 
#include <conio.h> 
using namespace std; 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Dec2Bin3 ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n"; 
  cout <<"Systemy liczbowe: Dziesietny -> Dwojkowy.\n\n"; 
  //Deklaracja zmiennych. 
    long int Liczba = 0; 
    char Wynik[] = ""; 
  //Pobranie liczby od użytkownika. 
    cout << "Podaj liczbe dwojkowa: "; 
    cin >> Liczba; 
  //Przeliczenie liczby 10 na liczbę 2 i 16. 
    cout << "\n" << Liczba << " = "; 
    itoa(Liczba, Wynik, 2); //2 
    cout << Wynik; 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
/* 
  Legenda: 
    1) Biblioteka zawierająca funkcje ogólne 
       (m.in. losowanie liczb, konwersji łańcuchów znaków). 
    2) //itoa(p1, p2, p3) - Konwertuje podaną liczbę na określony 
                            system liczbowy w postaci łańcucha znaków. 
                            Opis  parametrów: 
                            p1 - należy podać liczbę całkowitą. 
                            p2 - należy umieścić zmienną typu "char", 
                                 w której będzie przechowywany wynik 
                                 w postaci odpowiedniego systemu liczbowego. 
                                 Wybór systemu liczbowego następuje w parametrze 3. 
                            p3 - umożliwia wybranie systemu liczbowego, w którym 
                                 będzie zapisany wynik konwersji liczby znajdującej 
                                 się w pierwszym parametrze. 
*/ 
} 