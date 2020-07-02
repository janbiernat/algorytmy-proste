#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Ciekawe napisy (napis rosnący) ==-- 
                              Konsola 
  Copyright (c)by Jan T. Biernat 
  = 
  Napis rosnący to taki napis, w którym 
  kod ASCII każdej kolejnej litery jest większy 
  od kodu poprzedniej. 
  Np.: GIMP, most, gry, mors. 
  = 
  Napisz program, który wykryje czy podany 
  tekst jest rosnący. 
*/ 
int main() { 
  cout << "--== Ciekawe napisy (napis rosnacy) ==--\n"; 
  cout << "                            Konsola\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
    int KodZnaku = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Tekst: "; 
    getline(cin, Tekst); 
    if(Tekst != "") { 
      for(int I = 0; I < Tekst.length(); I++) { 
        if((int)Tekst[I] > KodZnaku) { KodZnaku = (int)Tekst[I]; } 
        else { KodZnaku = 0; break; } 
      } 
      if(KodZnaku > 0) { cout << "Wyraz \"" << Tekst << "\" jest wyrazem rosnacym."; } 
      //Zatrzymaj program do czasu naciśnięcia dowolnego klawisza. 
        cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
    } 
} 