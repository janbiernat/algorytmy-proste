#include <iostream> 
using namespace std; 
/*--== Rozdzielenie tekstu (separator tekstu) ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program który pobierze od użytkownika 
  dowolny tekst. Każdy wyraz w tekście należy 
  rozdzielić znakiem średnika (tj. ";") 
  tzw. separatorem tekstu. 
  Następnie program ma wypisać każdy wyraz w osobnym wierszu. 
  Na przykład: 
    Podany tekst to: Atari;Spectrum;Amstrad;Amiga;CRY 
    Wynik działania programu: 
        1) Atari, 
        2) Spectrum, 
        3) Amstrad, 
        4) Amiga, 
        5) CRY. 
*/ 
int main() { 
  cout << "--== Rozdzielenie tekstu (separator tekstu) ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const char ZnakSeparatora = ';'; 
  //Deklaracja zmiennych. 
    string Tekst = "", Tym = ""; 
    int Licznik = 0; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
  //Wykonaj program. 
    if(Tekst != "") { 
      Tekst += ZnakSeparatora; //1. 
      for(int I = 0; I < Tekst.length(); I++) { 
        if(Tekst[I] == ZnakSeparatora) { //2. 
          if(Tym != "") { 
            Licznik++; 
            if(Licznik > 1) { cout << ","; } 
            cout << "\n"; 
            cout.width(3); //3. 
            cout << Licznik << ") " << Tym; 
          } 
          Tym = ""; 
        } else { Tym += Tekst[I]; } //4. 
      } 
      cout << "."; 
    } else { cout << "BLAD -?Brak podanego tekstu!"; } 
  cout << "\n"; 
/* 
  Legenda: 
    1) Zapis "Tekst += ZnakSeparatora;" jest równoznaczny z zapisem "Tekst = Tekst+ZnakSeparatora;". 
       Oznacza dodanie do zmiennej tekstowej "Tekst" znaku, który jest przechowywany w stałej 
       tekstowej "ZnakSeparatora". 
    2) Sprawdzenie czy znak znajdujący się na pozycji pod nr przechowywanym w zmiennej liczbowej "I" 
       jest taki sam, jak znak przechowywany w stałej tekstowej "ZnakSeparatora". 
       Jeżeli warunek będzie spełniony tzn. lewa strona = prawej stronie, to wykonaj instrukcje zaraz po 
       warunku. W innym przypadku wykonaj instrukcje po instrukcji ELSE (komentarz nr 4). 
    3) cout.width(3) - funkcja rezerwuje 3 znakowe miejsce na wyświetlenie liczby lub tekstu. 
       Jeżeli liczba lub tekst jest za krótka, to zostanie dopełniona znakami spacji 
       (tzw. znakami pustymi). Np. podana jest liczba "1" -> i otrzymamy "  2". 
    4) "Tym += Tekst[I];" - Dodanie do zmiennej tekstowej "Tym" kolejnych znaków ze zmiennej tekstowej "Tekst". 
*/ 
} 