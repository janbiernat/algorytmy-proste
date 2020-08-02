#include <iostream> 
#include <conio.h> 
#include <fstream> 
#include <windows.h> 
using namespace std; 
/*--== Readme 2 - konsola ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program do odczytywania plików tekstowych 
  z małą ilością tekstu. 
  Program ma posiadać następujące funkcjonalności: 
   1) Jeżeli doczytana linia posiada więcej znaków niż 71, 
      to kolejne znaki mają znajdować w kolejnych wierszach. 
   2) Posiadać statystykę wyrazów wczytanego dokumentu tekstowego: 
      2.1) Ilość wczytanych wierszy. 
      2.2) Ilość wyrazów. 
      2.3) Ilość znaków bez spacji. 
      2.4) Ilość znaków ze spacją. 
*/ 
long int ZnakiBezSpacji(string Tekst="") { 
  string T = ""; 
  //Policz wszystkie znaki, bez znaku spacji (tzw. znaku pustego). 
    if(Tekst != "") { 
      for(int I = 0; I < Tekst.length(); I++) { 
        if(Tekst[I] != ' ') { T = T+Tekst[I]; } 
      } 
    } 
    return T.length(); 
} 
//= 
long int WyrazowJest(string Tekst="") { 
  long int L = 0; 
  Tekst = Tekst+char(32); //Dodanie do podanego ciągu znaków, znaku spacji (tzw. znaku pustego). 
  //Oblicz, ile jest wyrazów w podanym ciągu znaków. 
    if(Tekst != "") { 
      for(int I = 0; I < Tekst.length(); I++) { 
        if((Tekst[I] != ' ') && (Tekst[I+1] == ' ')) { L++; } //Zapis "L++;" = "L = L+1;". 
      } 
    } 
    return L; 
} 
//= 
string tFL12_345(string Liczba="") { 
  //tFL12_345 - Formatuje liczbę, tj. 12345 = 12 345. 
    short int Licznik = 0; 
    string Znaki = ""; 
    if(Liczba != "") { 
      for(int I = Liczba.length()-1; I > -1; I--) { 
        Znaki = Liczba[I]+Znaki; 
        Licznik++; 
        if(Licznik > 2) { 
          Licznik = 0; 
          Znaki = char(32)+Znaki; 
        } 
      } 
      //Usuń 1 pusty znak (tzw. spacje). 
        if(Znaki[0] == char(32)) { return Znaki.substr(1, Znaki.length()); } 
        else { return Znaki; } 
    } else { cout << "?"; } 
} 
//Blok główny(startowy). 
int main(int argc, char *argv[]) { 
  //Deklaracja stałych. 
    const int maxIlosc = 32767; 
    const short int maxIloscWierszy = 20; 
    const short int maxIloscZnakow = 71; 
  //Deklaracja zmiennych. 
    int KodKlaw = 0; 
    int Licznik = 0, LiniaNr = 0; 
    int ZnakZliczaj = 0, TablicaLicznik = 0; 
    long int StatZnakowSuma = 0, StatZnakowSumaBezSpc = 0, StatWyrazIlosc = 0; 
    char CharLiczba[20]; 
    string Tablica[maxIlosc]; 
    string Linia = "", Tym = ""; 
  //Wyczyść tablicę. 
    for(int I = 0; I < maxIlosc; I++) { Tablica[I] = ""; } 
  //Odczytanie zawartości pliku tekstowego. 
    fstream PlikDane(argv[1], ios::in); 
    if(PlikDane != NULL) { 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { 
        StatZnakowSuma += Linia.length(); 
        StatZnakowSumaBezSpc += ZnakiBezSpacji(Linia); 
        StatWyrazIlosc += WyrazowJest(Linia); 
        //Łamanie wierszy, gdy ilość znaków w wierszu jest zbyt duża. 
          Tym = ""; ZnakZliczaj = 0; 
          for(int I = 0; I < Linia.length(); I++) { 
            Tym += Linia[I]; 
            ZnakZliczaj++; 
            if(ZnakZliczaj > maxIloscZnakow-1) { 
              Tablica[TablicaLicznik] = Tym; 
              TablicaLicznik++; 
              Tym = ""; 
              ZnakZliczaj = 0; 
            } else { Tablica[TablicaLicznik] = Tym; } 
          } 
          TablicaLicznik++; 
        Licznik++; 
        if(Licznik > maxIlosc-1) { break; } 
      } 
      //Wyświetl dane na ekranie. 
        do { 
          system("cls"); 
          cout << "Readme 2 (c)by Jan T. Biernat\n"; 
          cout << "Nazwa pliku: " << argv[1] << "\n"; 
          cout << "Ilosc wierszy: " << tFL12_345(itoa(Licznik, CharLiczba, 10)) << "/" 
               << tFL12_345(itoa(TablicaLicznik, CharLiczba, 10)) << ".    "; 
          cout << "Ilosc wyrazow: " << tFL12_345(itoa(StatWyrazIlosc, CharLiczba, 10)) << "\n"; 
          cout << "Znakow (ze spacjami): " << tFL12_345(itoa(StatZnakowSuma, CharLiczba, 10)) << ".    "; 
          cout.width(9); cout << "Znakow (bez spacji): " << tFL12_345(itoa(StatZnakowSumaBezSpc, CharLiczba, 10)) << ".\n"; 
          cout.width(80); cout.fill('-'); 
          for(int I = 0; I < maxIloscWierszy; I++) { 
            cout << "\n"; cout.width(5); cout.fill(' '); 
            cout << (I+1+LiniaNr) << ": " << Tablica[I+LiniaNr].substr(0, maxIloscZnakow); 
          } 
            //Kod klawiszy. 
              KodKlaw = 0; 
              KodKlaw = getch(); 
              if((KodKlaw == 0) || (KodKlaw == 224)) { 
                KodKlaw = 0; 
                KodKlaw = getch()+224; 
              } 
                if(KodKlaw == 296) { 
                  //Strzałka w górę. 
                    LiniaNr--; 
                    if(LiniaNr < 0) { LiniaNr = 0; } 
                } else if(KodKlaw == 304) { 
                         //Strzałka w dół. 
                           LiniaNr++; 
                           if(LiniaNr > TablicaLicznik-maxIloscWierszy) { LiniaNr = TablicaLicznik-maxIloscWierszy; } 
                       } 
        } while(KodKlaw != 27); //Klawisz ESC kończy działanie programu. 
    } else { cout << "\nBLAD -?Brak pliku lub plik o podanej nazwie nie istnieje!\n\n"; } 
    PlikDane.close(); 
  cout << "\n"; 
} 