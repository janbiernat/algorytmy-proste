#include <iostream>  //1 
#include <string>    //2 
#include <conio.h>   //3 
#include <windows.h> //4 
using namespace std; 
int main () { 
  cout << "--== Tekst pisany od prawej do lewej ==--\n"; //5 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string Tekst = ""; //6 
  cout << "Podaj tekst: ";  
  getline(cin, Tekst); //7 
  cout << "\n" << Tekst << " = "; //8 
  for(int I = Tekst.length()-1; I > -1; I--) { //9 
    cout << Tekst[I]; //10 
    Sleep(200); //11 
  } 
  cout << "\n\nNacisnij klawisz ENTER..."; 
  getch(); //12 
/* 
  Legenda: 
    1 - Obs³uga strumieni (np. przesy³anie danych na ekran). 
    2 - Obs³uga tekstu (tzw. ci¹gów znaków). 
    3 - Obs³uga klawiatury. 
    4 - Biblioteka posiada funkcje Windows API. 
    5 - Wyœwietlenie na ekranie tekstu znajduj¹cego siê pomiêdzy 
        cudzys³owami. Znaki "\n" powoduj¹ przejœcie do nowej linii.  
    6 - Zadeklarowanie zmiennej tekstowej "Tekst" i wyczyszczenie jej. 
    7 - Pobiera ci¹g znaków ze spacjami w œrodku. 
    8 - Wyœwietlenie na ekranie podanego tekstu /przez u¿ytkownika 
        i tekstu znajduj¹cego siê pomiêdzy cudzys³owami. 
    9 - Poni¿szy blok kodu bêdzie wykonywany tyle razy, z ilu liter 
        sk³ada siê podany tekst. Jest to mo¿liwe dziêki pêtli FOR. 
   10 - Tekst wyœwietlany jest na ekranie od prawej do lewej. 
   11 - Zatrzymanie programu na 200 milisekund. Sleep - funkcja biblioteki Windows API. 
   12 - Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
*/ 
} 