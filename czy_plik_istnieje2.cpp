#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Czy plik istnieje ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int iPlikIstnieje(string NazwaPliku) { 
  //iPlikIstnieje - Sprawdza, czy plik fizycznie znajduje się na dysku. 
    fstream PlikOtworz(NazwaPliku.c_str(), ios::in); //1 
    PlikOtworz.close(); //2 
    if(PlikOtworz == NULL) { return 0; } //3 
    else { return 1; } 
/* 
  Legenda: 
    1) Utworzenie obiektu o nazwie "PlikOtworz" na podstawie klasy "fstream". 
       Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
       c_str() - Instrukcja wykonuje konwersję tekstu na tablicę znaków. 
                 Taki zapis umożliwia przekazanie tekstu jako parametru funkcji 
                 w postaci char* lub const char* (w standardzie języka C). 
      Parametr 2 (tj. ios::in) ustawia tryb tylko do odczytu (tzn. plik 
                               będzie można tylko odczytać). Nie będzie możliwe 
                               manipulowanie plikiem (tzn. usuwanie lub modyfikowanie). 
                               Do sprawdzenia, czy plik istnieje tryb do odczytu jest 
                               wystarczający. 
    2) Zamknięcie pliku  za pomocą instrukcji "close", który został otwarty do odczytu. 
    3) Jeżeli warunek jest spełniony, czyli obiekt "PlikOtworz" przechowuje 
       wartość NULL, to funkcja "iPlikIstnieje" zwróci wartość 0. 
       W innym przypadku funkcja "iPlikIstnieje" zwróci wartość 1 (patrz: kod po instrukcji ELSE). 
*/ 
} //iPlikIstnieje. 
//Blok główny/startowy. 
int main() { 
  cout << "--== Czy plik istnieje ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string NazwaPliku = ""; 
    short int PlikJest = 0; 
  //Pobranie nazwy pliku od użytkownika. 
    cout << "Podaj nazwe pliku: "; 
    getline(cin, NazwaPliku); //Pobiera całą linię i wpisuje do zmiennej tekstowej "NazwaPliku" wprowadzone dane. 
  //Sprawdź, czy plik o podanej nazwie istnieje. 
    cout << "\"" << NazwaPliku << "\" = "; 
    PlikJest = iPlikIstnieje(NazwaPliku); //Wywołanie funkcji sprawdzającej, czy plik znajduje się na dysku. 
    if(PlikJest > 0) { cout << "Plik znajduje sie fizycznie na dysku."; } 
    else { cout << "BLAD -?Plik o podanej nazwie nie istnieje!"; } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 