#include <iostream>
/*--== Tagi HTML ==--
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Często się zdarza, że pisząc stronę internetową
  piszemy tagi HTMLowe w postaci dużych,
  a czasami małych liter.
  Powoduje, że kod strony wygląda nieestetycznie.
  Twoim zadanie jest napisanie programu, który
  przerobi wszystkie tagi HTMLowe na duże litery,
  tzn, wszystkie litery pomiędzy znakami "<" a ">"
  zamieni na duże litery.
  Na wejściu:
       Na wejściu znajduje się fragment kodu HTMLowego.
  Na wyjściu:
       Na wyjściu znajduje się kod HTML z wejścia,
       tyle tylko, że wszystkie tagi HTMLowe składają
       się z dużych liter.
  Przykład:
      Wejście:
            <html>
                <head>
                    <TITLE>To jest tytul</Title>
                </head>
                <body>
                    <b>Cos tam</b>
                </body>
            </html>
    Wyjście:
            <HTML>
                <HEAD>
                    <TITLE>To jest tytul</TITLE>
                </HEAD>
                <BODY>
                    <B>Cos tam</B>
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
  cout <<"--== Tagi HTML'owe pisz duzymi literami ==--\n";
  cout <<"Copyright (c)by Jan T. Biernat\n\n";
  //Deklaracja stałych.
    const int Ilosc = 8; 
    const string Dane[Ilosc] = {
                                "<html>",
                                "    <head>",
                                "        <TITLE>To jest tytul</Title>",
                                "    </head>",
                                "    <body>",
                                "        <b>Cos tam</b>",
                                "    </body>",
                                "</html>"
                               };
  //Wykonaj zadanie.
    for(int I = 0; I < Ilosc; I++) {
      cout << "\n" << tagi_html_na_TAGI_HTML(Dane[I]);
    }
  cout << "\n\n";
}