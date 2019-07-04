#include <iostream> 
#include <conio.h> 
/*--== Szukaj wyrazu w wyrazie ==-- 
  Copyright (c)by Jan T. Biernat 
  == 
  Treść zadania: 
  Napisz program, który pobiera od użytkownika dwa słowa. 
  Następnie sprawdza, czy pierwsze z podanych słów jest częścią drugiego słowa. 
  Jeśli tak, to z drugiego słowa zostanie usunięta ta część wspólna. 
  Na koniec zostanie wypisane drugie słowo (po ewentualnych zmianach). 
*/ 
using namespace std; 
int main () { 
  cout << "--== Szukaj wyrazu w wyrazie ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst1 = "", Tekst2 = ""; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj tekst 1: "; getline(cin, Tekst1); 
    cout << "Podaj tekst 2: "; getline(cin, Tekst2); 
  //Wyświetlenie podanych danych przez użytkownika. 
    cout << "\nTekst 1: \"" << Tekst1 << "\"."; 
    cout << "\nTekst 2: \"" << Tekst2 << "\"."; 
  //Wyszukanie 1 wyrazu w 2 wyrazie. 
    for(int I = 0; I < Tekst2.length(); I++) { 
      if(Tekst2.substr(I, Tekst1.length()) == Tekst1) { 
        cout << "\n\nZnaleziono w drugim wyrazie pierwszy wyraz!"; 
        cout << "\nDrugie slowo po usunieciu czesci wspolnej: "; 
        cout << "\"" << Tekst2.substr(0, I) 
             << Tekst2.substr(I+Tekst1.length(), Tekst2.length()) 
             << "\"."; 
        break; 
      } 
    } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 