#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Tablica ASCII ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Turbo Pascal 7 - Kurs podstawowy 
 = 
 Tablica kodów ASCII (ang. American Standard Code for Information 
 Interchange) stanowi zestaw kodów u¿ywanych do reprezentacji znaków 
 (liter, cyfr, znaków specjalnych np. @, $, # itp.). 
 Ka¿dy znak w tabeli ma przyporz¹dkowan¹ wartoœæ liczbow¹ dziesiêtn¹, 
 np. litera du¿a "A"  ma wartoœæ dziesiêtn¹ 65. 
 Tablica ASCII sk³ada siê 255 znaków, które podzielone s¹ na kilka grup: 
   > Od 0 do 31 - znaki steruj¹ce np. klawiszem ENTER, TAB, drukark¹; 
   > Od 32 do 126 - znaki podstawowe; 
   > Od 127 do 255 - znaki dodatkowe (zawieraj¹ znaki graficzne, 
                     oraz znaki polskie itp.). 
 Podstawowa tabela ASCII (tj. od 0 do 127) nie podlega wymianie, 
 natomiast rozszerzona tablica (tj. od 128 do 255) mo¿e ulegaæ zmianie 
 np. w celu zakodowania polskich znaków. 
*/ 
int main() { 
  cout << "--== Tabela kodow ASCII ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Tablica kodów ASCII od znaku pustego (tzw. spacji). 
  int iLicznik=0; 
  for(int I = 0; I < 224; I++) { 
    iLicznik++; //iLicznik = iLicznik+1; 
    cout << "|" << char(32) << char(32+I) << char(32); 
    if((32+I) < 100) { cout << "0" << (32+I); } else { cout << (32+I); } 
    cout << char(32); //Wyœwietlenie na ekranie litery/znaku z tablicy kodów ASCII o nr 32. 
    if(iLicznik > 7) { cout << "|\n"; iLicznik = 0; } 
  } 
  //Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
  cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
} 