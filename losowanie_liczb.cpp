/* 
 --== Borland C++Builder (Console Application) na C++ ==-- 
                               Kurs podstawowy 
 Copyright(c)by Jan T. Biernat 
*/ 
#include <iostream> 
#include <conio.h> 
#include <cstdlib> /*Posiada instrukcje do zainicjowania 
                     generatora liczb pseudolosowych.*/ 
#include <ctime> /*Biblioteka "ctime " zawiera funkcje 
                   zwi¹zane z obs³ug¹ czasu i daty.*/ 
using namespace std; 
int main() { 
  cout << "--== Losowanie liczb ==--"; /*Wyœwietlenie na ekranie 
                                         tekstu znajduj¹cego 
                                         siê pomiêdzy cudzys³owami.*/ 
  const int Zakres = 34; /*Zadeklarowanie sta³ej liczbowej 
                           ca³kowitej "Zakres" i przypisanie 
                           jej konkretnej wartoœci (np. 34).*/ 
  srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
  int Liczba=0; /*Zadeklarowanie zmiennej liczbowej ca³kowitej 
                  "Liczba" z równoczesnym wyzerowaniem zmiennej.*/ 
  Liczba = rand()%Zakres; /*Wylosowanie jednej liczby z podanego zakresu, 
                            który przechowywany jest w sta³ej liczbowej 
                            ca³kowitej "Zakres" i przypisanie 
                            wylosowanej liczby do zmiennej liczbowej 
                            ca³kowitej "Liczba". 
                            Funkcja RAND - umo¿liwia wylosowanie jednej 
                                           liczby z podanego zakresu.*/ 
  cout << "\n\nWylosowano liczbe " << Liczba; /*Obni¿enie kursora 
                                                tekstowego o dwa 
                                                wiersze i wyœwietlenie 
                                                na ekranie tekstu 
                                                znajduj¹cego siê 
                                                pomiêdzy cudzys³owami 
                                                oraz wyœwietlenie 
                                                na ekranie zawartoœci 
                                                zmiennej liczbowej 
                                                ca³kowitej "Liczba". 
                                                Znak "\n" umo¿liwia 
                                                przeniesienie tekstu 
                                                do kolejnego wiersza. 
                                                Parametry oddzielane 
                                                s¹ znakiem "<<".*/ 
  cout << "\nWylosowana liczba jest liczba "; 
  if(Liczba % 2 == 0) {  cout << "parzysta."; } 
  else { cout << "nieparzysta."; } 
  /*"if(Liczba % 2 == 0)" - Je¿eli warunek jest spe³niony 
                            (tj. zawartoœæ zmiennej liczbowej 
                            ca³kowitej "Liczba" podzielonej 
                            przez dwa posiada po przecinku zero), 
                            to wyœwietl informacjê "parzysta". 
                            W innym przypadku wyœwietl 
                            informacjê "nieparzysta". 
                            Znak "%" - Umo¿liwia sprawdzenie liczby 
                                       po przecinku.*/ 
  //Naciœnij dowolny klawisz. 
  cout << "\n\nNacisnij dowolny klawisz..."; 
  getch(); 
} 