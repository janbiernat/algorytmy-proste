#include <iostream> //1 
#include <conio.h> //2 
using namespace std; //3 
int main() { 
  cout <<"--== Dec2Bin ==--\n"; //4 
  cout <<"Copyright (c)by Jan T. Biernat\n"; 
  cout <<"Systemy liczbowe: Dziesietny -> Dwojkowy.\n\n"; 
  //Deklaracja zmiennych. 
    long int Liczba = 0, Wynik = 0, Licznik = 0; //5 
    short int Tablica[99]; //6 
  //Pobranie liczby od użytkownika. 
    cout << "Podaj liczbe dziesietna: "; 
    cin >> Liczba; //7 
  //Przeliczenie liczby 10 na liczbę 2. 
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
        //Wyświetl wynik pobierając liczby z tablicy od tyłu. 
          for(int I = Licznik-1; I >-1; I--) { 
            cout << Tablica[I]; //17 
          } 
    } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); //18 
/* 
  Legenda: 
    1) Obsługa strumieni (np. przesyłanie danych na ekran). 
    2) Obsługa m.in. klawiatury. 
    3) Podczas pracy nad dużymi projektami, w których używa 
       się wielu bibliotek z licznymi deklaracjami, możemy 
       w końcu natknąć się na problem konfliktu nazw - gdy kilka obiektów, 
       typów czy funkcji ma tę samą nazwę. Rozwiązaniem może być 
       np. zamknięcie nazw w "zakresach", w celu oddzielenia ich. 
       Z pomocą przychodzi nam mechanizm przestrzeni nazw. 
       Przestrzeń nazw jest zatem zbiorem obiektów, która ogranicza 
       dostęp do nich - oprócz nazwy obiektu niezbędne jest też wspomnienie, 
       z której przestrzeni nazw chcemy go użyć, obchodząc tym samym problem konfliktu nazw. 
    4) Wyświetlenie na ekranie tekstu znajdującego się pomiędzy cudzysłowami. 
       Zapis "\n" powoduje przejście do następnej linii. 
    5) zadeklarowanie zmiennych liczbowy z równoczesnym przypisaniem wartości początkowej zero. 
    6) Zadeklarowanie zmiennej tablicowej 99 elementowej tego samego typu, czyli liczbowego krótkiego. 
    7) Pobranie danych z klawiatury i przypisanie ich do zmiennej liczbowej "Liczba". 
    8) Wyświetlenie na ekranie zawartości zmiennej liczbowej "Liczba" oraz tekstu znajdującego się pomiędzy cudzysłowami. 
    9) Sprawdzenie, czy podana wartość (przechowywana w zmiennej liczbowej "Liczba") jest większa od wartości 0. 
       Jeżeli tak, to wykonuj poniższe instrukcje. 
   10) Wyzerowanie zmiennej liczbowej 'Wynik". 
   11) Przypisanie do zmiennej liczbowej "Wynik" wyniku z dzielenia liczby 
       (przechowywanej w zmiennej liczbowej "Liczba") przez liczbę 2. 
   12) Przypisanie wartości zerowej do tablicy na pozycji o podanym nr indeksu 
       (nr indeksu jest przechowywany w zmiennej liczbowej "Licznik"). 
   13) Sprawdzenie, czy po przecinku wartość jest rożna od zera. Jeżeli tak to przypisz do tablicy na pozycji 
       o nr indeksu wartość 1 (nr indeksu jest przechowywany przez zmienną liczbową "Licznik"). 
   14) Wyzerowanie zmiennej liczbowej "Liczba" oraz przypisanie do zmiennej "Liczba" wartości przechowywanej 
       w zmiennej liczbowej "Wynik". 
   15) Inkrementacja, czyli zwiększenie zawartości zmiennej "Licznik" o wartość 1. 
       Zapis "Licznik++" = "Licznik = Licznik+1". 
   16) Wyjdź z pętli DO ... WHILE, gdy zawartość zmiennej liczbowej "Wynik" będzie równa wartości zero. 
   17) Wyświetlenie na ekranie liczby pobranej z tablicy. 
       Pobranie liczb z tablicy odbywa się w kolejności od prawej do lewej. 
       Pobieranie liczby z tablicy odbywa się za pomocą nr indeksu. 
       Nr indeksu jest przechowywany w zmiennej liczbowej "I". 
   18) Oczekiwanie na naciśnięcie dowolnego klawisza na klawiaturze. 
*/ 
} 
