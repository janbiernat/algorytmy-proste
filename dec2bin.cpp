#include<iostream> //1 
#include <conio.h> //2 
using namespace std; //3 
int main() { 
  cout <<"--== Dec2Bin ==--\n"; //4 
  cout <<"Copyright (c)by Jan T. Biernat\n"; 
  cout <<"Systemy liczbowe: Dziesietny -> Dwojkowy.\n\n"; 
  //Deklaracja zmiennych. 
    long int Liczba = 0, Wynik = 0, Licznik = 0; //5 
    short int Tablica[99]; //6 
  //Pobranie liczby od u¿ytkownika. 
    cout << "Podaj liczbe dziesietna: "; 
    cin >> Liczba; //7 
  //Przeliczenie liczby 10 na liczbê 2. 
    cout << "\n" << Liczba << " = "; //8 
    if(Liczba > 0) { //9 
        do{ 
          Wynik = 0;                                    //10 
          Wynik = Liczba/2;                             //11 
          Tablica[Licznik] = 0;                         //12 
          if(Liczba % 2 != 0) { Tablica[Licznik] = 1; } //13 
          Liczba = 0; Liczba = Wynik;                   //14 
          Licznik++;                                    //15 
        } while(Wynik != 0);                            //16 
        //Wyœwietl wynik pobieraj¹c liczby z tablicy od ty³u. 
          for(int I = Licznik-1; I >-1; I--) { 
            cout << Tablica[I]; //17 
          } 
    } 
  //Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); //18 
/* 
  Legenda: 
    1) Obs³uga strumieni (np. przesy³anie danych na ekran). 
    2) Obs³uga m.in. klawiatury. 
    3) Podczas pracy nad du¿ymi projektami, w których u¿ywa 
       siê wielu bibliotek z licznymi deklaracjami, mo¿emy 
       w koñcu natkn¹æ siê na problem konfliktu nazw - gdy kilka obiektów, 
       typów czy funkcji ma tê sam¹ nazwê. Rozwi¹zaniem mo¿e byæ 
       np. zamkniêcie nazw w "zakresach", w celu oddzielenia ich. 
       Z pomoc¹ przychodzi nam mechanizm przestrzeni nazw. 
       Przestrzeñ nazw jest zatem zbiorem obiektów, która ogranicza 
       dostêp do nich - oprócz nazwy obiektu niezbêdne jest te¿ wspomnienie, 
       z której przestrzeni nazw chcemy go u¿yæ, obchodz¹c tym samym problem konfliktu nazw. 
    4) Wyœwietlenie na ekranie tekstu znajduj¹cego siê pomiêdzy cudzys³owami. 
       Zapis "\n" powoduje przejœcie do nastêpnej linii. 
    5) zadeklarowanie zmiennych liczbowy z równoczesnym przypisaniem wartoœci pocz¹tkowej zero. 
    6) Zadeklarowanie zmiennej tablicowej 99 elementowej tego samego typu, czyli liczbowego krótkiego. 
    7) Pobranie danych z klawiatury i przypisanie ich do zmiennej liczbowej "Liczba". 
    8) Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej "Liczba" oraz tekstu znajduj¹cego siê pomiêdzy cudzys³owami. 
    9) Sprawdzenie, czy podana wartoœæ (przechowywana w zmiennej liczbowej "Liczba") jest wiêksza od wartoœci 0. 
       Je¿eli tak, to wykonuj poni¿sze instrukcje. 
   10) Wyzerowanie zmiennej liczbowej 'Wynik". 
   11) Przypisanie do zmiennej liczbowej "Wynik" wyniku z dzielenia liczby 
       (przechowywanej w zmiennej liczbowej "Liczba") przez liczbê 2. 
   12) Przypisanie wartoœci zerowej do tablicy na pozycji o podanym nr indeksu 
       (nr indeksu jest przechowywany w zmiennej liczbowej "Licznik"). 
   13) Sprawdzenie, czy po przecinku wartoœæ jest ro¿na od zera. Je¿eli tak to przypisz do tablicy na pozycji 
       o nr indeksu wartoœæ 1 (nr indeksu jest przechowywany przez zmienn¹ liczbow¹ "Licznik"). 
   14) Wyzerowanie zmiennej liczbowej "Liczba" oraz przypisanie do zmiennej "Liczba" wartoœci przechowywanej 
       w zmiennej liczbowej "Wynik". 
   15) Inkrementacja, czyli zwiêkszenie zawartoœci zmiennej "Licznik" o wartoœæ 1. 
       Zapis "Licznik++" = "Licznik = Licznik+1". 
   16) WyjdŸ z pêtli DO ... WHILE, gdy zawartoœæ zmiennej liczbowej "Wynik" bêdzie równa wartoœci zero. 
   17) Wyœwietlenie na ekranie liczby pobranej z tablicy. 
       Pobranie liczb z tablicy odbywa siê w kolejnoœci od prawej do lewej. 
       Pobieranie liczby z tablicy odbywa siê za pomoc¹ nr indeksu. 
       Nr indeksu jest przechowywany w zmiennej liczbowej "I". 
   18) Oczekiwanie na naciœniêcie dowolnego klawisza na klawiaturze. 
*/ 
} 