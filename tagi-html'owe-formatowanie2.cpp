#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
/*--== Tagi HTML'owe - Formatowanie 2 - pliki tekstowe ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program, który przerobi wszystkie tagi HTML'owe 
  na duże litery, tzn. wszystkie litery pomiędzy znakami 
  "<" a ">" zamieni na duże za wyjątkiem styli. 
  Style mają być pisane małymi literami i znajdują się 
  pomiędzy znakami cudzysłowia (tj. "). 
 
  Przykład: 
  Zawartość pliku wejściowego: 
  <html> 
    <head> 
       <meta charset="utf-8"> 
       <title>To jest strona WWW</TitLE> 
    </hEAD> 
    <body> 
       <font style="foNt-weIGht:bold; foNT-SIze:32pt;">To jest strona WWW</FonT> 
       <br/><font style="COLOR:RED;" style="foNT-SIze:10pt;">Algorytm jest napisany w C++</fONt> 
       <br/><font style="foNT-SIZE:10pt; cOLOR:BLuE;"><script>document.write("To jest JavaScript.");</script></font> 
    </bODy> 
  </htML> 
 
  Plik wyjściowy: 
  <HTML> 
    <HEAD> 
       <META CHARSET="utf-8"> 
       <TITLE>To jest strona WWW</TITLE> 
    </HEAD> 
    <BODY> 
       <FONT STYLE="font-weight:bold; font-size:32pt;">To jest strona WWW</FONT> 
       <BR/><FONT STYLE="color:red;" STYLE="font-size:10pt;">Algorytm jest napisany w C++</FONT> 
       <BR/><FONT STYLE="font-size:10pt; color:blue;"><SCRIPT>document.write("To jest JavaScript.");</SCRIPT></FONT> 
    </BODY> 
  </HTML> 
*/ 
using namespace std; 
string tagi_html_formatowanie(string Str = "") { 
  //tagi_html_formatowanie - funkcja zwraca sformatowane znaczniki i arkusze styli. 
    int A = 0, B = 0; 
    short int Jest = 0; 
    if(Str != "") { 
      for(A = B; A < Str.length(); A++) { 
        if(Str[A] == '<') { 
          for(B = A+1; B < Str.length(); B++) { 
            if(Str[B] == '>') { break; } 
            else { 
                   if(Jest == 0) { 
                     if((int(Str[B]) > 96) && (int(Str[B]) < 123)) { Str[B] = char(int(Str[B])-32); } 
                     if(Str[B] == '"') { Jest = 1; } 
                   } else { 
                            if((int(Str[B]) > 64) && (int(Str[B]) < 91)) { Str[B] = char(int(Str[B])+32); } 
                            if(Str[B] == '"') { Jest = 0; } 
                          } 
                 } 
          } 
        } 
      } 
      return Str; 
    } else { return "BLAD -?Brak podanego ciagu znakow!"; } 
} 
//Blok główny/startowy. 
int main () { 
  cout <<"--== Tagi HTML'owe - Formatowanie 2 - pliki tekstowe ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = "", LiniaPoZmianie = ""; 
    long int Licznik = 0; 
  //Konwertowanie danych. 
    fstream PlikDane("strona.html", ios::in); //1 
  //Pobranie danych z pliku. 
    if(PlikDane != NULL) { //2 
      fstream PlikDaneWynikowe("strona-wynik.html", ios::out | ios::trunc); //3 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { //4 
        Licznik++; 
        cout << "\n" << Licznik << ": " << Linia; 
        LiniaPoZmianie = ""; LiniaPoZmianie = tagi_html_formatowanie(Linia); 
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
    int(Str[B]) - Odczytanie kodu w systemie dziesiętnym znaku, który jest przechowywany 
                  w zmiennej tekstowej "Str" pod podanym nr indeksu. Nr indeksu jest przechowywany 
                  przez zmienną liczbową całkowitą "B". 
    char(int(Str[B])-32) - Odczytanie kodu dziesiętnego podanego znaku 
                           (znak jest przechowywany w zmiennej tekstowej "Str" 
                            pod nr indeksu, który jest przechowywany przez 
                            zmienną liczbową całkowitą "B"). 
                           Następnie od odczytanego kodu odjęta jest wartość 32 
                           i po wykonaniu tych działań następuje wyświetlenie znaku 
                           (za pomocą instrukcji "char"). 
    = 
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