#include <iostream> 
#include <conio.h> 
#include <cstdlib> //Biblioteka zawierająca standardowe funkcje języka C (w tym funkcje itoa). 
using namespace std; 
/*--== Tablica ASCII 2 ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Turbo Pascal 7 - Kurs podstawowy 
 = 
 Tablica kodów ASCII (ang. American Standard Code for Information 
 Interchange) stanowi zestaw kodów używanych do reprezentacji znaków 
 (liter, cyfr, znaków specjalnych np. @, $, # itp.). 
 Każdy znak w tabeli ma przyporządkowaną wartość liczbową dziesiętną, 
 np. litera duża "A"  ma wartość dziesiętną 65. 
 Tablica ASCII składa się 255 znaków, które podzielone są na kilka grup: 
   > Od 0 do 31 - znaki sterujące np. klawiszem ENTER, TAB, drukarką; 
   > Od 32 do 126 - znaki podstawowe; 
   > Od 127 do 255 - znaki dodatkowe (zawierają znaki graficzne, 
                     oraz znaki polskie itp.). 
 Podstawowa tabela ASCII (tj. od 0 do 127) nie podlega wymianie, 
 natomiast rozszerzona tablica (tj. od 128 do 255) może ulegać zmianie 
 np. w celu zakodowania polskich znaków. 
*/ 
int main() { 
  cout << "--== Tabela kodow ASCII 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych znakowych. 
    char Hex[32], Bin[32]; 
  //Tablica kodów ASCII od znaku pustego (tzw. spacji). 
    for(int I = 0; I < 224; I++) { 
      cout << "\n" << char(32) << char(32+I) << char(32) << char(32); 
      if((32+I) < 100) { cout << "0" << (32+I); } else { cout << (32+I); } 
      cout << char(32) << char(32) << itoa((32+I), Hex, 16); 
      cout << char(32) << char(32) << itoa((32+I), Bin, 2); 
    } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
/* 
  itoa(P1, P2, P3) - Konwertuje liczbę całkowitą na łańcuch znaków. 
  P1 - w tym parametrze umieszczamy liczbę całkowitą. 
  P2 - w tym parametrze umieszczamy zmienną typu char, która 
       będzie przechowywać wynik konwersji. 
  P3 - w tym parametrze określamy podstawę systemu liczbowego w którym 
       będzie zapisy wynik. 
*/ 
} 