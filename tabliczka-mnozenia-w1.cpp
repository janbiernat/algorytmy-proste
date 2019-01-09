/*--== Borland C++Builder (Console Application) ==-- 
                                Kurs podstawowy 
 Copyright(c)by Jan T. Biernat*/ 
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
using namespace std; 
//Blok g³ówny. 
int main() { 
  cout << "--== Tabliczka mnozenia w1 ==--\n";/*Wyœwietlenie na ekranie 
                                                tekstu znajduj¹cego 
                                                siê pomiêdzy 
                                                cudzys³owami. 
                                                Znak "\n" powoduje 
                                                przejœcie kursora 
                                                tekstowego do nastêpnej 
                                                linii.*/ 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    short int A=0, B=0, iOdp=0; /*Deklaracja zmiennych liczbowych z równoczesnym wyzerowaniem.*/ 
  //Losowanie pytañ (liczb). 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    A = rand()%11; /*Wylosowanie jednej liczby z przedzia³u liczb 
                     od 0 do 10 i przypisanie wylosowanej liczby do 
                     zmiennej liczbowej ca³kowitej "A".*/ 
    B = rand()%11; 
  //Wyœwietlenie pytania na ekranie oraz sprawdzenie udzielonej odpowiedzi. 
    cout << "\nIle jest " << A << " x " << B << " = "; /*Wyœwietlenie na ekranie 
                                                         tekstu znajduj¹cego 
                                                         siê pomiêdzy cudzys³owami 
                                                         oraz wyœwietlenie 
                                                         na ekranie zawartoœci 
                                                         zmiennych liczbowych 
                                                         "A" i 'B". 
                                                         Parametry oddzielane s¹ 
                                                         znakami "<<". 
                                                         Parametr 1, 3 i 5 
                                                         powoduje wyœwietlenie 
                                                         na ekranie tekstu 
                                                         znajduj¹cego siê 
                                                         pomiêdzy cudzys³owami. 
                                                         Natomiast parametr 2 i 4 
                                                         wyœwietla na ekranie 
                                                         zawartoœæ zmiennych 
                                                         liczbowych ca³kowitych 
                                                         "A" - parametr 2 
                                                         i "B" - parametr 4.*/ 
  cin >> iOdp; /*Pobranie liczb z klawiatury i przypisanie 
                 ich do zmiennej liczbowej ca³kowitej "iOdp".*/ 
  if(A*B == iOdp) cout << "Odpowiedz jest prawidlowa!"; 
  else cout << "Niestety odpowiedz jest zla!!!"; 
  /*Je¿eli odpowiedŸ jest poprawna (tj. A*B == iOdp - zawartoœæ zmiennej 
    liczbowej ca³kowitej "A" mno¿ona przez zawartoœæ zmiennej liczbowej 
    ca³kowitej "B" jest równa zawartoœci zmiennej liczbowej ca³kowitej "iOdp"), 
    to wykonaj instrukcje przed s³owem ELSE. 
    W innym przypadku wykonaj instrukcje po s³owie ELSE.*/ 
  cout << "\n\n"; 
} 