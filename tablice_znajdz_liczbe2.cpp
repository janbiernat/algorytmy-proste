#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
using namespace std;
/*--== Tablice: Znajdź liczbę 2 ==--
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
  cout << "--== Tablice: Znajdz liczbe 2 ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n";
  cout << "\n";
  //Deklaracja stałych.
    const int IloscElementow = 41;
    const int Zakres = 1000;
    const string T1 = "Znalazlem podana liczbe ";
    const string T2 = " na pozycji o nr ";
    const string S1 = "Liczba o najblizszej wartosci to "; 
    const string S2 = ". Znajduje sie na pozycji nr ";
  //Deklaracja zmiennych.
    int Liczby[IloscElementow];
    int PlusJeden = 0, Pytanie = 0;
    bool Jest = false;
    int LWartosc[2], PWartosc[2];
    int LWynik = 0, PWynik = 0;
  //Inicjowanie programu.
    LWartosc[0] = 0; LWartosc[1] = 0;
    PWartosc[0] = 0; PWartosc[1] = 0;
  //Sprawdzenie, czy liczba elementów tablicy jest parzysta.
    if(IloscElementow % 2 != 0) { PlusJeden = 1; }
  //Losowanie liczb i wpisanie ich do tablicy oraz wyświetlenie na ekranie.
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych.
    cout << "Tablica zawiera nastepujace liczby:\n";
    for(int I = 0; I < IloscElementow; I++) {
      Liczby[I] = 0; Liczby[I] = rand()%Zakres;
      if(Liczby[I] < 1) { Liczby[I] = 1; }
      if(I > 0) { cout << ", "; }
      cout << Liczby[I];
    }
  //Pytanie o liczbę, którą należy znaleźć w tablicy.
    cout << ".\n\nJaka liczbe mam znalezc: "; cin >> Pytanie;
    if(Pytanie > 0) {
      LWartosc[0] = Zakres;
      PWartosc[0] = LWartosc[0];
      for(int I = 0; I < ((IloscElementow/2)+PlusJeden); I++) {
        //Sprawdź od lewej strony.
          if(Pytanie == Liczby[I]) {
            cout << T1 << "\"" << Pytanie << "\"" << T2 << (I+1) << ". <-- od lewej.";
            Jest = true; break;
          }
        //Sprawdź od prawej strony.
          if(Pytanie == Liczby[(IloscElementow-1)-I]) {
            cout << T1 << "\"" << Pytanie << "\"" << T2 << (IloscElementow-I) << ". <-- od prawej.";
            Jest = true; break;
          }
        //Znajdź wartość najbliższą podanej liczby przez użytkownika.
          //Od lewej strony.
            LWynik = 0;
            if((Pytanie-Liczby[I]) > -1) { LWynik = Pytanie-Liczby[I]; }
            else { LWynik = Liczby[I]-Pytanie; }
            if(LWynik < LWartosc[0]) { LWartosc[0] = LWynik; LWartosc[1] = I; }
          //Od prawej strony.
            PWynik = 0;
            if((Pytanie-Liczby[IloscElementow-I]) > -1) { PWynik = Pytanie-Liczby[IloscElementow-I]; }
            else { PWynik = Liczby[IloscElementow-I]-Pytanie; }
            if(PWynik < PWartosc[0]) { PWartosc[0] = PWynik; PWartosc[1] = (IloscElementow-I); }
      }
      //Wyświetl wartość najbliższą podanej liczby przez użytkownika.
        if(Jest == false) {
          cout << "Brak podanej liczby (tj. " << Pytanie << ") w tablicy.";
          if(LWartosc[0] > PWartosc[0]) {
            cout << "\n\n" << S1 << Liczby[PWartosc[1]] << S2 << (PWartosc[1]+1) << ".";
          } else { cout << "\n\n" << S1 << Liczby[LWartosc[1]] << S2 << (LWartosc[1]+1) << "."; }
        }
    } else { cout << "BLAD -?Podana liczba jest bledna! \nINFO: Prosze podac liczbe dodatnia, wieksza od zera!"; }
  cout << "\n\n";
}