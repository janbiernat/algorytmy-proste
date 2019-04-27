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
                   związane z obsługą czasu i daty.*/ 
using namespace std; 
int main() { 
  cout << "--== Losowanie liczb ==--"; /*Wyświetlenie na ekranie 
                                         tekstu znajdującego 
                                         się pomiędzy cudzysłowami.*/ 
  const int Zakres = 34; /*Zadeklarowanie stałej liczbowej 
                           całkowitej "Zakres" i przypisanie 
                           jej konkretnej wartości (np. 34).*/ 
  srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
  int Liczba=0; /*Zadeklarowanie zmiennej liczbowej całkowitej 
                  "Liczba" z równoczesnym wyzerowaniem zmiennej.*/ 
  Liczba = rand()%Zakres; /*Wylosowanie jednej liczby z podanego zakresu, 
                            który przechowywany jest w stałej liczbowej 
                            całkowitej "Zakres" i przypisanie 
                            wylosowanej liczby do zmiennej liczbowej 
                            całkowitej "Liczba". 
                            Funkcja RAND - umożliwia wylosowanie jednej 
                                           liczby z podanego zakresu.*/ 
  cout << "\n\nWylosowano liczbe " << Liczba; /*Obniżenie kursora 
                                                tekstowego o dwa 
                                                wiersze i wyświetlenie 
                                                na ekranie tekstu 
                                                znajdującego się 
                                                pomiędzy cudzysłowami 
                                                oraz wyświetlenie 
                                                na ekranie zawartości 
                                                zmiennej liczbowej 
                                                całkowitej "Liczba". 
                                                Znak "\n" umożliwia 
                                                przeniesienie tekstu 
                                                do kolejnego wiersza. 
                                                Parametry oddzielane 
                                                są znakiem "<<".*/ 
  cout << "\nWylosowana liczba jest liczba "; 
  if(Liczba % 2 == 0) { cout << "parzysta."; } 
  else { cout << "nieparzysta."; } 
  /*"if(Liczba % 2 == 0)" - Jeżeli warunek jest spełniony 
                            (tj. zawartość zmiennej liczbowej 
                            całkowitej "Liczba" podzielonej 
                            przez dwa posiada po przecinku zero), 
                            to wyświetl informację "parzysta". 
                            W innym przypadku wyświetl 
                            informację "nieparzysta". 
                            Znak "%" - Umożliwia sprawdzenie liczby 
                                       po przecinku.*/ 
  //Naciśnij dowolny klawisz. 
  cout << "\n\nNacisnij dowolny klawisz..."; 
  getch(); 
} 
