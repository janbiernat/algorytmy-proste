#include <iostream> //1 
#include <string>   //2 
#include <conio.h>  //3 
using namespace std; 
int main () { 
  cout << "--== Tablica Vigenere`a ==--\n"; //4 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  short int Licznik = 0; //5 
  //Wygenerowanie Tablicy Vigenere`a. 
  for(int A = 0; A < 26; A++) { 
    cout << "\n"; //6 
    Licznik = A;  //7 
    for(int B = 0; B < 26; B++) { 
      if(Licznik > 25) { Licznik = 0; } //8 
      cout << " " << char(Licznik+65); //9 
      Licznik++; //10 
    } 
  } 
  cout << "\n\nNacisnij klawisz ENTER..."; 
  getch(); //11 
/* 
  Legenda: 
    1 - Obs³uga strumieni (np. przesy³anie danych na ekran). 
    2 - Obs³uga tekstu (tzw. ci¹gów znaków). 
    3 - Obs³uga klawiatury. 
    4 - Wyœwietl na ekranie tekst znajduj¹cy siê pomiêdzy 
        cudzys³owami. Znaki "\n" powoduj¹ przejœcie do nowej linii. 
    5 - Zadeklarowanie zmiennej liczbowej ca³kowitej krótkiej "Licznik" 
        z przypisan¹ wartoœci¹ pocz¹tkow¹ zero. 
    6 - "\n" - Przejœcie do kolejnej linii. 
    7 - "Licznik = A" - Przypisanie do zmiennej "Licznik" zawartoœci 
        zmiennej "A". 
    8 - Je¿eli zawartoœæ zmiennej liczbowej "Licznik" jest wiêksza od liczby 
        25, to przypisz do zmiennej "Licznik" wartoœæ zero. 
    9 - Wyœwietl na ekranie spacjê (tzw. znak pusty) znajduj¹cy siê pomiêdzy cudzys³owami 
        oraz znaki ASCII. Znaki ASCII s¹ wyœwietlane dziêki funkcji CHAR, która zwraca znak 
        o podanym numerze. 
   10 - Zwiêkszenie zawartoœci zmiennej liczbowej ca³kowitej "Licznik" 
        o wartoœæ 1. Jest to tzw. inkrementacja. 
   11 - Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
*/ 
} 