#include <iostream> 
#include <conio.h> 
/*--== Palindrom ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Palindrom (gr. palindromeo – biec z powrotem) 
 wyrażenie brzmiące tak samo czytane 
 od lewej do prawej i od prawej do lewej. 
 Przykład: „Ala”, „Kajak”, "123321". 
*/ 
using namespace std; 
short int palindrom_str(string Wyraz = "") { 
  //palindrom_str - funkcja sprawdza, czy podany wyraz jest palindromem. 
    short int Tak = 0; 
    if(Wyraz != "") { 
      string WyrazOdwrocony = ""; 
      for(int I = 0; I < Wyraz.length(); I++) { 
        WyrazOdwrocony = Wyraz[I]+WyrazOdwrocony; 
      } 
      if(Wyraz == WyrazOdwrocony) { Tak = 1; } 
    } 
    return Tak; 
} 
//Blok główny/startowy. 
int main() { 
  cout << "--== Palindrom ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja zmiennych znakowych. 
    string Wyraz = ""; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj wyraz do sprawdzenia: "; cin >> Wyraz; 
  //Wywołanie funkcji sprawdzającej, czy podany wyraz jest palindromem. 
    cout << "\nPodany wyraz (tj. \"" << Wyraz << "\")"; 
    if(palindrom_str(Wyraz) != 1) { cout << " nie"; } 
    cout << " jest palindromem."; 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
} 