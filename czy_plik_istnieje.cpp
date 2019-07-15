#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Czy plik istnieje ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int iPlikIstnieje(const char* NazwaPliku) { 
  //iPlikIstnieje - Sprawdza, czy plik fizycznie znajduje się na dysku. 
    FILE * Plik; //1 
    Plik = fopen(NazwaPliku, "r"); //2 
    fclose(Plik); //3 
    if(Plik == NULL) { return 0; } //4 
    else { return 1; } 
/* 
  Legenda: 
    1) Utworzenie obiektu o nazwie "Plik" na podstawie struktury FILE*. 
       FILE* - to typ obiektu, który identyfikuje strumień I/O 
       (plik tekstowy lub binarny) i zawiera informacje potrzebne do sterowania 
       tym strumieniem (np. początek pliku, koniec itp.). 
       Uwaga: By sprawdzić, czy plik fizycznie istnieje na dysku, to instrukcję 
              "fopen" trzeba wywołać z parametrem "r". ("r" - oznacza tryb tylko do odczytu). 
              Jeżeli parametru 2 (tj. "r") by nie było, to brak pliku na dysku 
              spowoduje automatyczne jego utworzenie. 
    2) Otwarcie pliku, którego nazwa przechowywana jest w zmiennej "NazwaPliku" 
       z informacją, że plik o podanej nazwie będzie tylko odczytywany (parametr 2: "r"). 
       Do obiektu "Plik" zwracany jest status wykonanego zadania. 
       Jeżeli pliku nie da się odczytać z powodu (np. jego braku na dysku), 
       to instrukcja "fopen" zwróci wartość NULL (tj. pusty) do obiektu "Plik". 
    3) Zamknięcie pliku  za pomocą instrukcji "fclose", który został otwarty do odczytu. 
    4) Jeżeli warunek jest spełniony, czyli obiekt "Plik" przechowuje 
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
    PlikJest = iPlikIstnieje(NazwaPliku.c_str()); //Wywołanie funkcji sprawdzającej, czy plik znajduje się na dysku. 
    if(PlikJest > 0) { cout << "Plik znajduje sie fizycznie na dysku."; } 
    else { cout << "BLAD -?Plik o podanej nazwie nie istnieje!"; } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
  c_str() - Instrukcja wykonuje konwersję ciągu znaków na tablicę znaków. 
            Taki zapis umożliwia przekazanie tekstu jako parametru funkcji 
            w postaci char* lub const char* (w standardzie języka C). 
*/ 
} 