#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Czy liczba ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program który sprawdzi, czy podany tekst jest liczbą. 
*/ 
short int iCzyZnaki(string Str = "") { 
  //iCzyZnaki - Funkcja sprawdza, czy podany tekst posiada znaki alfanumeryczne. 
    short int CzyZnaki = 0; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if((Str[I] < '0') || (Str[I] > '9')) { CzyZnaki = 1; break; } 
      } 
      return CzyZnaki; 
    } else { return -1; } 
} 
//Blok główny/startowy. 
int main() { 
  cout << "--== Czy liczba ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Wykonanie programu. 
    cout << "\nPodaj dowolny tekst: "; 
    getline(cin, Tekst); 
    if(iCzyZnaki(Tekst) == -1) { cout << "BLAD -?Nie podano zadnego tekstu!"; } 
    else if(iCzyZnaki(Tekst) == 1) { cout << "Podany tekst sklada sie ze znakow alfanumerycznych!"; } 
         else { cout << "Podany tekst sklada sie tylko z cyfr."; } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 