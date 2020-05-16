#include <iostream> 
#include <conio.h> 
/*--== Licznik cyfr i spacji 2 ==-- 
  Copyright (c)by Jan T. Biernat 
  == 
  Treść zadania: 
  Napisz program, który pobiera od użytkownika tekst. 
  Następnie zlicza ilość cyfr i spacji w podanej linii. 
  Na koniec, wyświetla następujące informacje: 
    1) Ilość znaków w linii. 
    2) Ilość cyfr. 
    3) Ilość spacji. 
*/ 
using namespace std; 
long int ZnakiIloscSpacji(string Str="") { 
  //ZnakiIloscSpacji - Funkcja podaje ilość spacji (tzw. znaków pustych) występujących w podanym tekście. 
    long int Licznik = 0; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if(Str[I] == ' ') { Licznik++; } 
      } 
    } 
    return Licznik; 
} 
long int ZnakiIloscCyfr(string Str="") { 
  //ZnakiIloscCyfr - Funkcja podaje ilość cyfr występujących w podanym tekście. 
    string Cyfry = ""; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if(((int)Str[I] > 47) && ((int)Str[I] < 58)) { Cyfry += Str[I]; } 
      } 
      return Cyfry.length(); 
    } else { return 0; } 
} 
//Blok główny/startowy. 
int main () { 
  cout << "--== Licznik cyfr i spacji 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
  //Wykonanie zadania. 
    cout << "\nPodany tekst to: \"" << Tekst << "\"."; 
    cout << "\nIlosc znakow   : " << Tekst.length() << "."; 
    cout << "\nIlosc cyfr     : " << ZnakiIloscCyfr(Tekst) << "."; 
    cout << "\nIlosc spacji   : " << ZnakiIloscSpacji(Tekst) << "."; 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 