#include <iostream> 
#include <conio.h> 
/*--== Statystyka wyrazów ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
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
//Blok główny/startowy. 
int main () { 
  cout << "--== Statystyka wyrazow ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj tekst: "; getline(cin, Tekst); 
  //Statystyka wyrazów - raport. 
    cout << "\nTekst \"" << Tekst << "\" posiada: "; 
    cout << "\na) wyrazow           : " << WyrazowJest(Tekst); 
    cout << "\nb) znakow bez spacji : " << ZnakiBezSpacji(Tekst); 
    cout << "\nc) znakow ze spacjami: " << Tekst.length(); 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 