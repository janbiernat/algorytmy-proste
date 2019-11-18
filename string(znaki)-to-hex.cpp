#include <iostream> //Biblioteka do obsługa strumieni (np. klawiatura i monitor). 
#include <conio.h> //Biblioteka do obsługi klawiatury. 
#include <fstream> //Biblioteka do obsługi plików. 
#include <cstdlib> //Biblioteka posiada m.in. funkcję do losowania i konwertowania liczb. 
using namespace std; 
/*--== String (Znaki) na HEX ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który będzie wczytywał zawartość 
  plików tekstowych. Odczytane dane ma konwertować 
  na postać szesnastkową (HEX) i wypisać na ekranie 
  w formacie: znaki szesnastkowe | odczytane znaki. 
  Po każdym znaku ma być wstawiony znak spacji. 
  Na przykład: "41 74 61 72 69 2c | A t a r i ,". 
*/ 
void string_to_hex(string Str = "") { 
  //string_to_hex - Funkcja zamienia podane znaki na ich odpowiedniki w systemie szesnastkowym (HEX). 
    if(Str != "") { 
      char Znak[Str.length()]; //Zadeklarowanie zmiennej znakowej "Znak" o długości podanego ciągu znaków. 
      for(int I = 0; I < Str.length(); I++) { 
        cout << itoa(int(Str[I]), Znak, 16) << " "; 
      } 
    } else { cout << "?"; } 
} 
void Literowanie(string Str = "") { 
  //Literowanie - Funkcja wyświetla podany ciąg znaków, robiąc znak spacji po każdym znaku. 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { cout << Str[I] << " "; } 
    } else { cout << "?"; } 
} 
//Blog główny/startowy. 
int main() { 
  cout << "--== String (Znaki) na HEX ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const int MaksIloscZnakow = 23; 
  //Deklaracja zmiennych. 
    string Linia = "", Znaki20 = ""; 
  //Konwersja znaków na ich odpowiedniki szesnastkowe (HEX). 
    fstream PlikDane("str-to-hex.txt", ios::in); //1. 
    if(PlikDane != NULL) { 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { 
        Znaki20 = ""; Znaki20 = Linia.substr(0, MaksIloscZnakow); 
        cout << "\n"; 
        string_to_hex(Znaki20); 
        for(int I = 0; I < (MaksIloscZnakow*3)-(Znaki20.length()*3); I ++) { cout << " "; } //Dopełnienie znakami pustymi. 
        cout<<" | "; 
        Literowanie(Znaki20); 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
 /* 
   Legenda: 
   1: Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
      Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
      Otwarcie pliku do odczytu (tj. ios::in). 
*/ 
} 