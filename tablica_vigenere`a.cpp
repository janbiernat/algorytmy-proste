#include <iostream>  //1 
#include <string>    //2 
#include <conio.h>   //3 
using namespace std; 
int main () { 
  cout << "--== Tablica Vigenere`a ==--\n"; //4 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string ASCII = ""; //5 
  short int Licznik = 0; //6 
  //Wype³nienie zmiennej tekstowej "ASCII" znakami od A do Z. 
  for(int I = 0; I < 26; I++) { 
    ASCII = ASCII+char(65+I); //7 
  } 
  //Wygenerowanie Tablicy Vigenere`a. 
  for(int A = 0; A < 26; A++) { 
    cout << "\n"; //8 
    Licznik = A;  //9 
    for(int B = 0; B < 26; B++) { 
      if(Licznik > 25) { Licznik = 0; } //10 
        cout << " " << ASCII[Licznik]; //11 
        Licznik++; //12 
      } 
    } 
  cout << "\n\nNacisnij klawisz ENTER..."; 
  getch(); //13 
/* 
  Legenda: 
    1 - Obs³uga strumieni (np. przesy³anie danych na ekran). 
    2 - Obs³uga tekstu (tzw. ci¹gów znaków). 
    3 - Obs³uga klawiatury. 
    4 - Wyœwietlenie na ekranie tekstu znajduj¹cego siê pomiêdzy 
        cudzys³owami. Znaki "\n" powoduj¹ przejœcie do nowej linii.  
    5 - Zadeklarowanie zmiennej tekstowej "ASCII" i wyczyszczenie jej. 
    6 - Zadeklarowanie zmiennej liczbowej ca³kowitej krótkiej "Licznik". 
    7 - "ASCII = ASCII+char(65+I)" - Dodanie do zmiennej tekstowej ASCII 
        kolejnego znaku. Funkcja CHAR() wyœwietla znak o podanym numerze 
        w nawiasach, np. CHAR(65) - wyœwietli du¿¹ literê A. 
    8 - "\n" - Przejœcie do kolejnej linii. 
    9 - "Licznik = A" - Przypisanie do zmiennej "Licznik" zawartoœci 
        zmiennej "A". 
   10 - Je¿eli zawartoœæ zmiennej liczbowej "Licznik" jest wiêksza od liczby 
        25, to przypisz do zmiennej "Licznik" wartoœæ zero. 
   11 - Wyœwietl na ekranie spacje znajduj¹c¹ siê pomiêdzy cudzys³owami 
        oraz znaki przechowywane w zmiennej tekstowej ASCII. 
        Znaki odczytywane s¹ ze zmiennej tekstowej ASCII za pomoc¹ 
        indeksów numerycznych. 
   12 - Zwiêkszenie zawartoœci zmiennej liczbowej ca³kowitej "Licznik" 
        o wartoœæ 0. Jest to inkrementacja. 
   13 - Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
*/ 
} 