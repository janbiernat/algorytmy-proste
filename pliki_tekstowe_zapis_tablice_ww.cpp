#include <iostream> 
#include <conio.h> 
#include <cstdlib> //1 
#include <ctime>   //2 
#include <fstream> //3 
/*--== Tablice wielowymiarowe - Pliki tekstowe - Zapis ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice wielowymiarowe - Pliki tekstowe - Zapis ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 7; 
    const int Zakres = 9; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow][IloscElementow]; 
  //Wprowadź dane do tablicy. 
    srand(time(NULL)); //4 
    for(int A=0; A < IloscElementow; A++) { 
      for(int B=0; B < IloscElementow; B++) { 
        Tablica[A][B] = 0; 
        Tablica[A][B] = rand()%Zakres; 
      } 
    } 
  //Zapisz tablicę do pliku. 
    cout.width(2); //5 
    fstream PlikDane("tablice.txt", ios::out | ios::trunc); //6 
    PlikDane << "Wylosowana tablica:"; //7 
    for(int A=0; A < IloscElementow; A++) { 
      PlikDane << "\n "; //7 
      for(int B=0; B < IloscElementow; B++) { 
        if(B > 0) { PlikDane << ", "; } //7 
        PlikDane << Tablica[A][B]; //7 
      } 
    } 
    PlikDane.close(); //8 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
   1) Posiada instrukcje do zainicjowania generatora liczb pseudolosowych. 
   2) Biblioteka "ctime " zawiera funkcje związane z obsługą czasu i daty. 
   3) Posiada funkcje związane z obsługą plików. 
   4) Zainicjowanie generatora liczb pseudolosowych. 
   5) Przesunięcie liczby do prawej strony na polu 2 znakowym. 
      (tzn. napisanie liczby 3, spowoduje dodanie 1 znaku pustego przed napisaną liczbą/cyfrą). 
   6) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
      Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
      Otwarcie pliku do zapisu (tj. ios::out) i zredukowanie rozmiaru pliku do zera 
      (tj. ios::trunc), jeżeli plik wcześniej istniał. 
      Skrót: trunc pochodzi do słowa ang. truncate - skracać, skrócić (dotyczy czasu). 
   7) Zapisanie pobranych danych do pliku tekstowego. 
   8) Zamknięcie pliku. 
*/ 
} 