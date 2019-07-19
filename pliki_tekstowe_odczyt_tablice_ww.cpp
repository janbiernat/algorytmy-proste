#include <iostream> 
#include <conio.h> 
#include <fstream> //1 
/*--== Tablice wielowymiarowe - Pliki tekstowe - Odczyt ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main() { 
  cout << "--== Tablice wielowymiarowe - Pliki tekstowe - Odczyt ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = ""; 
  //Kod program. 
    fstream PlikDane("tablice.txt", ios::in); //2 
  //Pobranie danych z pliku. 
    if(PlikDane != NULL) { //3 
      Linia = ""; //4 
      while(getline(PlikDane, Linia)) { //5 
        cout << "\n" << Linia; //6 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
   1) Posiada funkcje związane z obsługą plików. 
   2) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
      Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
      Otwarcie pliku do odczytu (tj. ios::in). 
   3) Jeżeli warunek jest spełniony, czyli obiekt "PlikDane" przechowuje 
      wartość różną od NULL, to plik istnieje fizycznie na dysku. 
      Gdy plik istnieje fizycznie na dysku, to nastąpi jego odczyt linia po linii 
      (patrz linia nr 17, komentarz nr 5). 
   4) Wyczyszczenie zmiennej tekstowej "Linia". 
   5) Odczytanie kolejnej linii. Odczyt będzie kontynuowany, do momentu 
       napotkania końca pliku. 
   6) Wyświetla na ekranie odczytany tekst z pliku tekstowego. 
*/ 
} 