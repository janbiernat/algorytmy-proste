#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Pliki tekstowe - odczyt ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main() { 
  cout << "--== Pliki tekstowe - odczyt ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = ""; 
    long int Licznik = 0; 
  //Kod program. 
    fstream PlikDane("dane.txt", ios::in); //1 
  //Pobranie danych z pliku. 
    if(PlikDane != NULL) { //2 
      Linia = ""; //3 
      while(getline(PlikDane, Linia)) { //4 
        Licznik++; //5 
        if(Licznik > 1) { cout << ","; } 
        cout << "\n" << Licznik << ": [" << Linia << "]"; //6 
      } 
      if(Licznik > 0) cout << "."; 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); //7 
/* 
  Legenda: 
  1) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
     Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
     Otwarcie pliku do odczytu (tj. ios::in). 
  2) Jeżeli warunek jest spełniony, czyli obiekt "PlikDane" przechowuje 
     wartość różną od NULL, to plik istnieje fizycznie na dysku. 
     Gdy plik istnieje fizycznie na dysku, to nastąpi jego odczyt linia po linii. 
  3) Wyczyszczenie zmiennej tekstowej "Linia". 
  4) Odczytanie kolejnej linii. Odczyt będzie kontynuowany, do momentu 
     napotkania końca pliku. 
  5) Zapis "Licznik++" = "Licznik = Licznik+1". Oba zapisy są prawidłowe 
     i oznaczają zwiększenie zawartości zmiennej liczbowej "Licznik" o wartość 1. 
  6) Wyświetla na ekranie odczytany tekst z pliku oraz nadany numer odczytanej linii. 
     Numer linii przechowywany jest w zmiennej "Licznik". 
  7) Oczekuje na naciśnięcie klawisza przez użytkownika. 
*/ 
} 