#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Pliki tekstowe - zapis 2 ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main() { 
  cout << "--== Pliki tekstowe - zapis 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Nazwisko = "", Imie = "", Wiek = ""; 
  //Kod program. 
    fstream PlikDane("dane.txt", ios::out | ios::ate | ios::app); //1 
  //Pobranie danych od użytkownika. 
    cout << "Nazwisko: "; 
    getline(cin, Nazwisko); //2 
    cout << "Imie    : "; getline(cin, Imie); 
    cout << "Wiek    : "; getline(cin, Wiek); 
  //Zapisanie pobranych danych do pliku tekstowego. 
    PlikDane << "\n" << Nazwisko << ";" << Imie << ";" << Wiek; //3 
    PlikDane.close(); //4 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
  1) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
     Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
     Otwarcie pliku do zapisu (tj. ios::out), po otwarciu pliku ustaw 
     się na koniec pliku (tj. ios::ate) i dołącz nowe dane na koniec pliku 
     (tj. ios::app). 
  2) Pobranie danych z całej linii i wpisanie ich do zmiennej tekstowej "Nazwisko". 
  3) Zapisanie pobranych danych do pliku tekstowego w formacie SSV 
     (ang. semicolon-separated values, wartości rozdzielone średnikiem). 
  4) Zamknięcie pliku. 
*/ 
} 