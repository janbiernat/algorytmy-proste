#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
using namespace std;
/*--== Tablice: Znajdź liczbę ==--
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Napisz program, który wprowadzi do tablicy wylosowane
  liczby. Następnie poprosi użytkownika o padanie 1 liczby.
  Zadaniem programu jest wyszukanie podanej liczby lub
  najbliższej jej wartości w przypadku, gdy podanej liczby
  nie będzie w tablicy.
 */
int main() {
  cout << "--== Tablice: Znajdz liczbe ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n";
  cout << "\n";
  //Deklaracja stałych.
    const int IloscElementow = 20;
    const int Zakres = 1000;
  //Deklaracja zmiennych.
    int Liczby[IloscElementow];
    int Losuj = 0, Pytanie = 0, Wynik = 0;
    int Min[2];
  //Inicjowanie programu.
    bool Jest = false;
    Min[0] = 0; Min[1] = 0;
  //Losowanie liczb i wpisanie ich do tablicy oraz wyświetlenie na ekranie.
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    cout << "Tablica zawiera nastepujace liczby:\n";
    for(int I = 0; I < IloscElementow; I++) {
      Losuj = 0; Losuj = rand()%Zakres;
      if(Losuj < 1) { Losuj = 1; }
      Liczby[I] = 0; Liczby[I] = Losuj;
      if(I > 0) { cout << ", "; } 
      cout << Liczby[I];
    }
  //Pytanie o liczbę, którą należy znaleźć w tablicy.
    cout << ".\n\nJaka liczbe mam znalezc: "; cin >> Pytanie;
    if(Pytanie > 0) {
      for(int I = 0; I < IloscElementow; I++) {
        if(Pytanie == Liczby[I]) {
          cout << "Znalazlem podana liczbe \"" << Pytanie << "\" na pozycji o nr " << (I+1) << "."; 
          Jest = true; break; 
        }
      }
      //Znajdź wartość najbliższą podanej liczby przez użytkownika.
        if(Jest == false) {
          cout << "Brak podanej liczby (tj. " << Pytanie << ") w tablicy.";
          Min[0] = Zakres; 
          for(int I = 0; I < IloscElementow; I++) {
            Wynik = 0;
            if((Pytanie-Liczby[I]) > -1) { Wynik = Pytanie-Liczby[I]; }
            else { Wynik = Liczby[I]-Pytanie; }
            if(Wynik < Min[0]) { Min[0] = Wynik; Min[1] = I; }
          }
          cout << "\n\nLiczba o najblizszej wartosci to " << Liczby[Min[1]] 
               << ". Znajduje sie na pozycji nr " << (Min[1]+1) << ".";
        }
    } else { cout << "BLAD -?Podana liczba jest bledna! \nINFO: Prosze podac liczbe dodatnia, wieksza od zera!"; }
  cout << "\n\n";
}