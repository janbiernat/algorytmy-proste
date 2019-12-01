#include <iostream> 
#include <conio.h> 
/*--== Tagi HTML'owe - Formatowanie ==-- 
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
  <html><hEAd><TITLE>Nazwa strony</Title></head><body>pt. "<font style="fONt-weIght:boLd;">Terminator 1</fonT>". Dowolny TEKST </boDy></html> 
 
  Plik wyjściowy: 
  <HTML><HEAD><TITLE>Nazwa strony</TITLE></HEAD><BODY>pt. "<FONT STYLE="font-weight:bold;">Terminator 1</FONT>". Dowolny TEKST </BODY></HTML> 
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
  cout <<"--== Tagi HTML'owe - Formatowanie ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
    cout << "\"" << Tekst << "\".\n= \"" << tagi_html_formatowanie(Tekst) << "\"."; 
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
*/ 
} 