#include <iostream> 
#include <conio.h> 
/*--== Pobieranie liczby z podanego ciągu znaków ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
string PobierzCyfry(string Str="") { 
  //PobierzCyfry - Funkcja pobiera tylko cyfry z podanego ciągu znaków. 
    string Cyfry = ""; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if((Str[I] == '0') || (Str[I] == '1') || (Str[I] == '2') 
        || (Str[I] == '3') || (Str[I] == '4') || (Str[I] == '5') 
        || (Str[I] == '6') || (Str[I] == '7') || (Str[I] == '8') 
        || (Str[I] == '9')) { Cyfry = Cyfry+Str[I]; } 
      } 
      return Cyfry; 
    } else { return ""; } 
} 
//Blok główny/startowy. 
int main () { 
  cout << "--== Pobieranie liczby z podanego ciagu znakow ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
  //Wykonanie zadania. 
    cout << "\nPodany tekst to: \"" << Tekst << "\"."; 
    cout << "\nCyfry to       : " << PobierzCyfry(Tekst) << "."; 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 