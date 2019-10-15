#include <iostream> 
#include <conio.h> 
/*--== Usuń podwójne spacje ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program, który z podanego 
  łańcucha znaków usunie powtarzające 
  się spacje występujące obok siebie.*/ 
using namespace std; 
string UsunPodwojneSpacje(string Str = "") { 
  //UsunPodwojneSpacje - Funkcja usuwa podwójne spacje występujące obok siebie w podanym ciągu znaków. 
    string Tekst = ""; 
    short int Tak = 0; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if(Str[I] != ' ') { Tekst = Tekst+Str[I]; Tak = 0; } 
        else { 
               if(Tak == 0 ) { Tekst+= ' '; Tak++; } 
             } 
      } 
      return Tekst; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Usun podwojne spacje ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
    cout << "\"" << Tekst << "\"\n= \"" << UsunPodwojneSpacje(Tekst) << "\"."; 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 