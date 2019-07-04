#include <iostream> 
#include <conio.h> 
/*--== Szukaj wyrazu w wyrazie 2 ==-- 
  Copyright (c)by Jan T. Biernat 
  == 
  Treść zadania: 
  Napisz program, który pobiera od użytkownika dwa słowa. 
  Następnie sprawdza, czy pierwsze z podanych słów jest częścią drugiego słowa. 
  Jeśli tak, to z tego drugiego słowa zostanie usunięta ta część wspólna. 
  Na koniec zostanie wypisane drugie słowo (po ewentualnych zmianach). 
*/ 
using namespace std; 
string Znajdz(string Str1="", string Str2="") { 
  //Znajdz - Znajdź wyraz 1 w 2 wyrazie. 
    string Str = ""; 
  //Wyszukanie 1 wyrazu w 2 wyrazie. 
    for(int I = 0; I < Str2.length(); I++) { 
      if(Str2.substr(I, Str1.length()) == Str1) { 
        Str = Str2.substr(0, I)+Str2.substr(I+Str1.length(), Str2.length()); 
        break; 
      } 
    } 
    return Str; 
} 
//Blok główny/startowy. 
int main () { 
  cout << "--== Szukaj wyrazu w wyrazie 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst1 = "", Tekst2 = "", Tekst3 = ""; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj tekst 1: "; getline(cin, Tekst1); 
    cout << "Podaj tekst 2: "; getline(cin, Tekst2); 
  //Wyświetlenie podanych danych przez użytkownika. 
    cout << "\nTekst 1: \"" << Tekst1 << "\"."; 
    cout << "\nTekst 2: \"" << Tekst2 << "\"."; 
  //Wyszukanie 1 wyrazu w 2 wyrazie. 
    Tekst3 = Znajdz(Tekst1, Tekst2); 
    if(Tekst3 != "") { 
      cout << "\n\nZnaleziono w drugim wyrazie pierwszy wyraz!"; 
      cout << "\nDrugie slowo po usunieciu czesci wspolnej: \"" << Tekst3 << "\"."; 
    } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 