#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Tagi HTML'owe pisz dużymi literami 2 ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program, który przerobi wszystkie tagi HTML'owe 
  na duże litery, tzn. wszystkie litery pomiędzy znakami 
  "<" a ">" zamieni na duże. 
  Dane należy pobrać z pliku tekstowego, natomiast 
  wynik działania programu zapisać do nowego pliku tekstowego. 
 
  Przykład: 
  Zawartość pliku wejściowego: 
  <html> 
    <head> 
       <TITLE>Nazwa strony</Title> 
    </head> 
    <body> 
       <b>Cos tam</b> 
       Dowolny TEKST 
    </body> 
    </html> 
 
  Plik wyjściowy: 
  <HTML> 
    <HEAD> 
      <TITLE>Nazwa strony</TITLE> 
    </HEAD> 
    <BODY> 
      <B>Cos tam</B> 
      Dowolny TEKST 
    </BODY> 
    </HTML> 
*/ 
using namespace std; 
string tagi_html_na_TAGI_HTML(string Str = "") { 
  //tagi_html_na_TAGI_HTML - Zamienia wszystkie znaczniki HTML na duże. 
    int A = 0, B = 0; 
    if(Str != "") { 
      for(A = B; A < Str.length(); A++) { 
        if(Str[A] == '<') { 
          for(B = A; B < Str.length(); B++) { 
            if(Str[B] == '>') { break; } 
            else { 
                   if(int(Str[B]) > 96) { Str[B] = char(int(Str[B])-32); } 
                 } 
          } 
        } 
      } 
      return Str; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tagi HTML'owe pisz duzymi literami 2 ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = "", LiniaPoZmianie = ""; 
    long int Licznik = 0; 
  //Konwertowanie danych. 
    fstream PlikDane("index.html", ios::in); //1 
  //Pobranie danych z pliku. 
    if(PlikDane != NULL) { //2 
      fstream PlikDaneWynikowe("index-wynik.html", ios::out | ios::trunc); //3 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { //4 
        Licznik++; 
        cout << "\n" << Licznik << ": " << Linia; 
        LiniaPoZmianie = ""; LiniaPoZmianie = tagi_html_na_TAGI_HTML(Linia); 
        if(Licznik > 1) { PlikDaneWynikowe << "\n"; } 
        PlikDaneWynikowe << LiniaPoZmianie; 
      } 
      PlikDaneWynikowe.close(); //5 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); //5 
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
    3) Utworzenie obiektu o nazwie "PlikDaneWynikowe" na podstawie klasy "fstream". 
       Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
       Otwarcie pliku do zapisu (tj. ios::out) i zredukowanie rozmiaru pliku do zera 
       (tj. ios::trunc), jeżeli plik wcześniej istniał. 
       Skrót: trunc pochodzi do słowa ang. truncate - skracać, skrócić (dotyczy czasu). 
    4) Odczytanie kolejnej linii. Odczyt będzie kontynuowany, do momentu 
       napotkania końca pliku. 
    5) Zamknięcie strumienia (w tym przykładzie) pliku tekstowego. 
*/ 
} 