#include <iostream> /*Biblioteka "iostream" (ang. input/output stream) 
                      oznacza strumieñ wejœcia/wyjœcia. 
                      Za pomoc¹ tej biblioteki mo¿na m.in. wprowadzaæ 
                      informacje ze standardowych urz¹dzeñ 
                      wejœcia (klawiatura) lub wyprowadzaæ 
                      informacje ze standardowych urz¹dzeñ 
                      wyjœcia (ekran).*/ 
#include <conio.h>  /*Obs³uga klawiatury za pomoc¹.*/ 
#include <cstdlib>  /*Posiada m.in. instrukcje do zainicjowania generatora liczb pseudolosowych.*/ 
#include <ctime>    /*Biblioteka "ctime " zawiera funkcje zwi¹zane z obs³ug¹ czasu i daty.*/ 
#include <string.h> /*Pod³¹czenie biblioteki umo¿liwiaj¹cej obs³ugê ³añcuchów znaków.*/ 
/* 
  --== Wyszukaj najmniejsz¹ i najwiêksz¹ liczbê z podanych liczb ==-- 
  Copyright(c)by Jan T. Biernat 
  C++ Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/g³ówny. 
int main() { 
  cout << "--== Wyszukaj MIN i MAX liczbe z podanych liczb - w1 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  cout << "UWAGA: Wpisanie liczby mniejszej od zera, spowoduje wyjscie z programu.\n\n"; 
  //Deklaracja zmiennych. 
    int Licznik=0, Liczba=0, LiczbaMin=0, LiczbaMax=0; 
  //Pobranie danych oraz wyszukanie najmniejszej i najwiêkszej liczby z podanych liczb. 
    do { //1 
      Licznik++; //2 
      cout << "Liczba " << Licznik << ": "; //3 
      Liczba = 0; //4 
      cin >> Liczba; //5 
      if(Licznik == 1) { //6 
        LiczbaMin = Liczba; //7 
        LiczbaMax = Liczba; //8 
      } 
      if(Liczba > 0) { //9 
        if(LiczbaMin > Liczba) { LiczbaMin = Liczba; } //10 
        if(LiczbaMax < Liczba) { LiczbaMax = Liczba; } //11 
      } 
    } while(Liczba > 0); //12 
    cout << "\n\nRaport:" 
         << "\nIlosc podanych liczb: " << (Licznik-1) 
         << "\nNajmniejsza liczba  : " << LiczbaMin 
         << "\nNajwieksza liczba   : " << LiczbaMax; 
  //Naciœnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
/* 
   1) Rozpoczêcie pêtli DO ... WHILE. 
   2) Licznik++ = Licznik = Licznik+1 - Zwiêkszenie zawartoœci 
      zmiennej liczbowej ca³kowitej "Licznik" o wartoœæ 1. 
   3) Wyœwietlenie na ekranie tekstu znajduj¹cego siê pomiêdzy 
      apostrofami oraz zawartoœci zmiennej liczbowej ca³kowitej "Licznik". 
   4) Wyzerowanie zmiennej liczbowej ca³kowitej "Liczba". 
   5) Pobranie danych (tj. cyfr/liczb) z klawiatury i przypisanie ich do 
      zmiennej liczbowej ca³kowitej "Liczba". 
   6) Je¿eli jest podana pierwsza liczba (tzn. zawartoœæ zmiennej 
      liczbowej ca³kowitej "Licznik" jest równa wartoœci 1), 
      to wykonaj poni¿sze instrukcje (tzn. przypisz tê liczbê 
      do zmiennych liczbowych "LiczbaMin" i "LiczbaMax"). 
   7) Przypisanie do zmiennej liczbowej ca³kowitej "LiczbaMin" 
      pierwszej podanej liczby, jako liczbê minimaln¹. 
   8) Przypisanie do zmiennej liczbowej ca³kowitej "LiczbaMax" 
      pierwszej podanej liczby, jako liczbê maksymaln¹. 
   9) Je¿eli zawartoœæ zmiennej liczbowej ca³kowitej "Liczba" zawiera 
      wartoœæ wiêksz¹ od zera, to wykonaj poni¿sze instrukcje 
      (tzn. sprawdŸ, czy podana liczba jest najmniejsza lub najwiêksza). 
  10) Je¿eli podana liczba jest mniejsza od liczby przechowywanej 
      w zmiennej liczbowej ca³kowitej "LiczbaMin", to przepisz j¹ do 
      tej zmiennej usuwaj¹c poprzedni¹ zawartoœæ/wartoœæ. 
  11) Je¿eli podana liczba jest wiêksza od liczby przechowywanej 
      w zmiennej liczbowej ca³kowitej "LiczbaMax", to przepisz j¹ do 
      tej zmiennej usuwaj¹c poprzedni¹ zawartoœæ/wartoœæ. 
  12) Wykonuj pêtlê DO ... WHILE, tak d³ugo dopóki spe³niony jest warunek 
      (tzn. zawartoœæ zmiennej liczbowej ca³kowitej "Liczba" jest wiêksza od zera). 
*/ 
} 