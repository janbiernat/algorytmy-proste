#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Pliki tekstowe - łączenie plików ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main() { 
  cout << "--== Pliki tekstowe - laczenie plikow ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const string PlikAng = "ang.txt"; 
    const string PlikPol = "pol.txt"; 
    const string PlikAngPol = "ang-pol.txt"; 
  //Deklaracja zmiennych. 
    string LiniaAng = "", LiniaPol = "", Razem = ""; 
    long int Licznik = 0; 
  //Kod program. 
    fstream PlikDaneA(PlikAng.c_str(), ios::in); //1 
    fstream PlikDaneP(PlikPol.c_str(), ios::in); 
    fstream PlikDaneW(PlikAngPol.c_str(), ios::out | ios::trunc); //2 
  //Pobranie danych z pliku. 
    if((PlikDaneA != NULL) && (PlikDaneP != NULL)) { //3 
      LiniaAng = ""; LiniaPol = ""; //4 
      while((getline(PlikDaneA, LiniaAng)) && (getline(PlikDaneP, LiniaPol))) { //5 
        Licznik++; //6 
        Razem = ""; 
        Razem = LiniaAng + " <> " + LiniaPol + "."; //7 
        PlikDaneW << Razem << "\n"; //8 
        cout << "\n" << Licznik << ": " << Razem; //9 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDaneA.close(); //10 
    PlikDaneP.close(); 
    PlikDaneW.close(); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
   1) Utworzenie obiektu o nazwie "PlikDaneA" na podstawie klasy "fstream". 
      Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
      Otwarcie pliku do odczytu (tj. ios::in). 
      c_str() - Instrukcja wykonuje konwersję tekstu na tablicę znaków. 
                Taki zapis umożliwia przekazanie tekstu jako parametru funkcji 
                w postaci char* lub const char* (w standardzie języka C). 
   2) Utworzenie obiektu o nazwie "PlikDaneW" na podstawie klasy "fstream". 
      Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
      Otwarcie pliku do zapisu (tj. ios::out) i zredukowanie rozmiaru pliku do zera 
      (tj. ios::trunc), jeżeli plik wcześniej istniał. 
      Skrót: trunc pochodzi do słowa ang. truncate - skracać, skrócić (dotyczy czasu). 
   3) Jeżeli warunek jest spełniony, czyli obiekty "PlikDaneA" i "PlikDaneP" przechowują 
      wartość różną od NULL, to poszczególne pliki istnieją fizycznie na dysku. 
      Gdy pliki istnieją fizycznie na dysku, to nastąpi ich odczyt linia po linii. 
   4) Wyczyszczenie zmiennych tekstowych. 
   5) Odczytanie kolejnej linii z poszczególnych plików. 
      Odczyt będzie kontynuowany, do momentu napotkania końca pliku. 
   6) Zapis "Licznik++" = "Licznik = Licznik+1". Oba zapisy są prawidłowe 
      i oznaczają zwiększenie zawartości zmiennej liczbowej "Licznik" o wartość 1. 
   7) Przypisanie do zmiennej tekstowej "Razem" połączonych ciągów znaków za pomocą operatora "+". 
   8) Zapisanie pobranych i połączonych danych do pliku tekstowego. 
   9) Wyświetlenie na ekranie zawartości zmiennej liczbowe "Licznik", tekstu znajdującego się 
      pomiędzy cudzysłowami oraz zawartości zmiennej tekstowej "Razem". 
  10) Zamknięcie pliku. 
*/ 
} 