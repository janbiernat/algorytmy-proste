#include <iostream> 
#include <conio.h> 
#include <cstdlib> /*Posiada instrukcje do zainicjowania 
                     generatora liczb pseudolosowych.*/ 
#include <ctime> /*Biblioteka "ctime " zawiera funkcje 
                   związane z obsługą czasu i daty.*/ 
/*--== Tablice wielowymiarowe - znajdź ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
void TablicaWW_Pokaz(int Tablica[9][9], int IloscElementow=0) { 
  //TablicaWW_Pokaz - Wyświetl zawartość tablicy podanej w 1 parametrze. 
    if(IloscElementow > 0) { 
      for(int A = 0; A < IloscElementow; A++) { 
        cout << "\n "; 
        for(int B = 0; B < IloscElementow; B++) { 
          if(B > 0) { cout << ", "; } 
          cout.width(2); //Przesunięcie liczby do prawej strony na polu 2 znakowym. 
                         //(tzn. napisanie liczby 3, spowoduje dodanie 1 znaku pustego przed napisaną liczbą/cyfrą). 
          cout << Tablica[A][B]; 
        } 
      } 
    } else { cout << "BLAD -?"; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice wielowymiarowe - znajdz ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 9; 
    const int Zakres = 99; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow][IloscElementow]; 
    int TablicaWynikK[IloscElementow*IloscElementow]; 
    int TablicaWynikW[IloscElementow*IloscElementow]; 
    int Liczba = 0, Licznik = 0; 
  //Wprowadź dane do tablicy. 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    for(int A = 0; A < IloscElementow; A++) { 
      for(int B = 0; B < IloscElementow; B++) { 
        Tablica[A][B] = 0; 
        Tablica[A][B] = rand()%Zakres; 
      } 
    } 
  //Wyświetl zawartość tablicy za pomocą funkcji "TablicaWW_Pokaz()". 
    cout << "\n"; TablicaWW_Pokaz(Tablica, IloscElementow); 
  //Pobierz liczbę od użytkownika. 
    cout << "\n\nSzukana liczba (tylko dodatnie): "; 
    cin >> Liczba; 
    if(Liczba > -1) { 
      //Wyszukaj podaną liczbę w tablicy. 
        for(int A = 0; A < IloscElementow; A++) { 
          for(int B = 0; B < IloscElementow; B++) { 
            if(Tablica[A][B] == Liczba) { 
              TablicaWynikK[Licznik] = 0; 
              TablicaWynikK[Licznik] = (B+1); 
              TablicaWynikW[Licznik] = 0; 
              TablicaWynikW[Licznik] = (A+1); 
              Licznik++; 
            } 
          } 
        } 
      //Wyświetl raport. 
        cout << "\nSzukana liczba znajduje sie: "; 
        //Dla kolumn. 
          cout << "\nw kolumn(ie/ach) nr: "; 
          for(int I = 0; I < Licznik; I++) { 
            if(I > 0) { cout << ", "; } 
            cout << TablicaWynikK[I]; 
          } 
          cout << "."; 
        //Dla wierszy. 
          cout << "\nw wiersz(u/ach) nr : "; 
          for(int I = 0; I < Licznik; I++) { 
            if(I > 0) { cout << ", "; } 
            cout << TablicaWynikW[I]; 
          } 
          cout << "."; 
    } else { cout << "BLAD -?Podano ujemna liczbe!"; } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 