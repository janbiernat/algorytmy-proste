#include <iostream> 
#include <conio.h> 
#include <fstream> 
/*--== Wyszukaj znaki bez powtórzeń 2 - Plik tekstowy ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string ZnakiBezPowtorzen(string Str = "") { 
  //ZnakiBezPowtorzen - Wyszukuje wszystkie znaki, które występują tylko raz. 
    short int Licznik = 0; 
    string Znaki = ""; 
    if(Str != "") { 
      for(int A = 0; A < Str.length(); A++) { 
        Licznik = 0; 
        for(int B = 0; B < Str.length(); B++) { 
          if(Str[A] == Str[B]) { Licznik++; } 
        } 
        if(Licznik == 1) { Znaki+= Str[A]; } 
      } 
      return Znaki; 
    } else { return "BLAD -?Brak podanego ciagu znakow!"; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Wyszukaj znaki bez powtorzen 2 - Plik tekstowy ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = "", Znaki = "", ZnakiWynik = ""; 
    int Licznik = 0, LiniaNr = 0; 
  //Pobranie danych z pliku. 
    cout << "\nProsze czekac..."; 
    fstream PlikDane("znaki.txt", ios::in); //1. 
    if(PlikDane != NULL) { //2. 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { //3. 
        Licznik++; 
        Znaki = ""; Znaki = ZnakiBezPowtorzen(Linia); 
        if(Znaki.length() > ZnakiWynik.length()) { 
          ZnakiWynik = Znaki; 
          LiniaNr = 0; LiniaNr = Licznik; 
        } 
      } 
    } else { cout << "\nBLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); //4. 
  //Raport. 
    cout << "\nZnaki bez powtorzen: \"" << ZnakiWynik << "\""; 
    cout << "\nZnakow jest        : " << ZnakiWynik.length(); 
    cout << "\nNr linii           : " << LiniaNr; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
  1) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
     Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
     Otwarcie pliku do odczytu (tj. ios::in). 
  2) Jeżeli warunek jest spełniony, czyli obiekt "PlikDane" przechowuje 
     wartość różną od NULL, to plik istnieje fizycznie na dysku. 
     Gdy plik istnieje fizycznie na dysku, to nastąpi jego odczyt linia po linii. 
  3) Odczytanie kolejnej linii. Odczyt będzie kontynuowany, do momentu 
     napotkania końca pliku. 
  4) Zamknięcie strumienia (pliku tekstowego). 
*/ 
} 