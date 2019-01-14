#include <iostream> 
#include <string> 
#include <conio.h> 
using namespace std; 
/* 
 --== Szyfr Cezara ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Szyfr Cezara - jedna z najprostszych technik szyfrowania. 
 Jest to rodzaj szyfru podstawieniowego, w którym ka¿da 
 litera tekstu jawnego zastêpowana jest inn¹ (oddalon¹ 
 od niej o sta³¹ liczbê pozycji w alfabecie). 
 Przy czym kierunek zamiany musi byæ zachowany. 
*/ 
int main () { 
  cout << "--== Szyfr Cezara ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Szyfr Cezara. 
  string Tekst = "", Rezultat = ""; 
  int Przesun = 0; 
  cout << "Podaj tekst: "; cin >> Tekst; 
  cout << "Wartosc przesuniecia: "; cin >> Przesun; 
  for(int I = 0; I < Tekst.length(); I++) { 
    Rezultat = Rezultat+char(int(Tekst[I])+Przesun); 
  } 
  cout << "Wynik: " << Rezultat; 
  //Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
  cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
} 