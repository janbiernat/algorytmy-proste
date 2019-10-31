#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
using namespace std; 
/*--== Liczba binarna(dwójkowa) - zliczaj zera ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Napisz program, który wyświetli nr linii zawierającej 
 liczbę w zapisie binarnym z większą ilością zer niż jedynek. 
 Liczby w zapisie binarnym znajdują się w pliku tekstowym 
 o nazwie "bin-liczby.txt". 
*/ 
short int bin_CzyWiecejZer(string Liczba = "") { 
  //bin_CzyWiecejZer - funkcja sprawdza, czy podana liczba w zapisie 
  //                   binarnym posiada więcej zer niż jedynek. 
    int Licznik = 0; 
    for(int I = 0; I < Liczba.length(); I++) { 
      if(Liczba[I] == '0') { Licznik++; } 
      else { Licznik--; } 
    } 
    if(Licznik > 0) { return 1; } 
    else { return 0; } 
} 
//Blok główny/startowy. 
int main() { 
  cout << "--== Liczba binarna(dwojkowa) - zliczaj zera ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = ""; 
    long int Licznik = 0; 
  //Sprawdza wszystkie liczby znajdujące się w pliku tekstowym. 
    fstream PlikDane("bin-liczby.txt", ios::in); //1 
    if(PlikDane != NULL) { //2 
      Linia = ""; 
      cout << "Linia nr:";  
      while(getline(PlikDane, Linia)) { //3 
        Licznik++; 
        if(bin_CzyWiecejZer(Linia) == 1) { 
          cout << " " << Licznik; 
        } 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
/* 
  Legenda: 
  1) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
     Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
     Otwarcie pliku do odczytu (tj. ios::in). 
  2) Jeżeli warunek jest spełniony, czyli obiekt "PlikDane" przechowuje 
     wartość różną od NULL, to plik istnieje fizycznie na dysku. 
     Gdy plik istnieje fizycznie na dysku, to nastąpi jego odczyt linia po linii. 
  3) Odczytanie kolejnej linii. Odczyt będzie kontynuowany, do momentu 
     napotkania końca pliku. Odczytana z pliku tekstowego linia będzie przypisana 
     do zmiennej tekstowej "Linia". 
*/ 
} 