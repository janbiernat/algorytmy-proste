#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Rozdziel pełny adres na części - konsola ==-- 
  Copyright (c)by Jan T. Biernat 
  - 
  Zadanie: 
  Napisz program, który rozdzieli podanych adres 
  na poszczególne elementy. 
  Na przykład: 
    Adres pełny: Armii Krajowej 543/23a. 
    Poszczególne części adresu: 
      1) Ul.                    : Armii Krajowej. 
      2) Nr domu i nr mieszkania: 543/23a. 
      3) Nr domu                : 543. 
      4) Nr mieszkania          : 23a. 
*/ 
int main() { 
  cout << "--== Rozdziel pelny adres na czesci - konsola ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string AdresPelny = ""; 
    int AdresNrSpacji = 0, AdresNrUkosnik = 0, ZnakNr = 0; 
  //Pobranie danych z klawiatury. 
    cout << "\nAdres: "; getline(cin, AdresPelny); 
    if(AdresPelny != "") { 
      cout << "\nAdres pelny                      : \"" << AdresPelny << "\"."; 
      //Znajdź znak spacji od prawej strony. 
        for(int I = AdresPelny.length(); I > -1; I--) { //1. 
          if(AdresPelny[I] == '/') { AdresNrUkosnik = I; } //2. 
          if(AdresPelny[I] == ' ') { AdresNrSpacji = I; break; } //3. 
        } 
        if(AdresNrSpacji != 0) { 
          ZnakNr = 0; ZnakNr = (int)AdresPelny[AdresNrSpacji+1]; //4. 
          if((ZnakNr > 47) && (ZnakNr < 58)) { 
            cout << "\nUlica                            : \"" << AdresPelny.substr(0, AdresNrSpacji) << "\"."; //5. 
            cout << "\nNr domu lub bloku i nr mieszkania: \"" << AdresPelny.substr(AdresNrSpacji+1, AdresPelny.length()) << "\"."; 
            if(AdresNrUkosnik > 0) { 
              cout << "\nNr domu lub bloku                : \"" << AdresPelny.substr(AdresNrSpacji+1, AdresNrUkosnik-(AdresNrSpacji+1)) << "\"."; 
              cout << "\nNr mieszkania                    : \"" << AdresPelny.substr(AdresNrUkosnik+1, AdresPelny.length()) << "\"."; 
            } 
          } 
        } 
    } else { cout << "BLAD -?Brak danych!\n"; } 
  //Zatrzymaj program do czasu naciśnięcia klawisza. 
    cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
/* 
  Legenda: 
   1) Pętla FOR będzie tyle razy wykonana, ile jest znaków w podanym tekście. 
      W tym przykładzie pętla wykonana jest od tyły (czyli od prawej do lewej). 
   2) Wykrycie za pomocą warunku, na którym nr indeksu znajduje się znak ukośnika (tj. "/"). 
      Jeżeli znak ukośnika zostanie wykryty, to nr indeksu (który przechowywany jest w zmiennej liczbowej "I") 
      zostanie przepisany do zmiennej liczbowej "AdresNrUkosnik". 
   3) Wykrycie za pomocą warunku, na którym nr indeksu znajduje się znak spacji (tj. " "). 
      Jeżeli znak spacji zostanie wykryty, to nr indeksu (który przechowywany jest w zmiennej liczbowej "I") 
      zostanie przepisany do zmiennej liczbowej "AdresNrSpacji" i nastąpi przerwanie działanie pętli. 
   4) Wyzerowanie zmiennej liczbowej "ZnakNr". 
      Następnie wykonaj następujące kroki: 
       a) Pobierz znak znajdujący się na pozycji o podanym nr indeksu. 
          Nr indeksu jest przechowywany w zmiennej "AdresNrSpacji" i jest powiększony o dodaną wartość liczbową 1. 
          Plus 1 jest dlatego, że sama zmienna liczbowa "AdresNrSpacji" przechowuje 
          tylko nr indeksu na którym znajduje się znak spacji. Natomiast pobrany musi być znak kolejny 
          w celu wykrycia, czy jest to liczba. 
       b) Wykonaj rzutowanie pobranego znaku na typ integer. Czyli zamień znak na jego dziesiętny odpowiednik. 
       c) Dziesiętny kod znaku (który jest typu integer) przepisz do zmiennej liczbowej "ZnakNr". 
   5) Wyświetlenie na ekranie tekstu znajdującego pomiędzy cudzysłowami oraz wyświetlenie na ekranie 
      fragmentu tekstu. Fragment tekstu jest wyciągnięty ze zmiennej tekstowej "AdresPelny" za pomocą 
      funkcji "substr". 
*/ 
} 