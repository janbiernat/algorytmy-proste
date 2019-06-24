#include <iostream> 
#include <conio.h> 
using namespace std; 
string Dec2Bin(long int Liczba = 0) { 
  //Dec2Bin - Konwersja liczby dziesiętnej na liczbę dwójkową. 
  long int Wynik = 0, Licznik = 0; //Deklaracja zmiennych. 
  string Tablica = "", Rezultat = ""; 
  //Wykonaj konwersję liczby dziesiętnej na liczbę dwójkową. 
    if(Liczba > 0) { 
      do{ 
          Wynik = 0; 
          Wynik = Liczba/2; 
          if(Liczba % 2 != 0) { Tablica = Tablica+"1"; } 
          else { Tablica = Tablica+"0"; } //Dodaj do przechowywanych 
                                          //elementów tablicy tekstowej, 
                                          //kolejny element. 
          Liczba = 0; Liczba = Wynik; 
          Licznik++; 
      } while(Wynik != 0); 
      //Wyświetl wynik pobierając liczby z tablicy od tyłu. 
        Rezultat = ""; 
        for(int I = Licznik-1; I >-1; I--) { 
          Rezultat = Rezultat+Tablica[I]; 
        } 
      return Rezultat; 
    } else { return 0; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Dec2Bin wer2 ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n"; 
  cout <<"Systemy liczbowe: Dziesietny -> Dwojkowy.\n\n"; 
  //Deklaracja zmiennych. 
    long int Liczba = 0; 
  //Pobranie liczby od użytkownika. 
    cout << "Podaj liczbe dziesietna: "; 
    cin >> Liczba; 
  //Przeliczenie liczby 10 na liczbę 2. 
    cout << "\n" << Liczba << " = "; 
    cout << Dec2Bin(Liczba); //Wywołanie funkcji "Dec2Bin". 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 