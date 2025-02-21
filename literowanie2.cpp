#include <iostream>
#include <windows.h>
/*--== Literowanie tekstu 2 ==--
  Copyright (c)by Jan T. Biernat*/
using namespace std;
int main() {
  const string Dane =  "Ten tekst jest literowany.";
  string Tekst = "";
  int Licznik = 0, LiczZnaki = 0;
  while(Licznik < Dane.length()) {
    system("cls");
    cout << "--== Literowanie tekstu 2 ==-- \n\n";
    if(char(LiczZnaki+31) == Dane[Licznik]) {
      Tekst+= Dane[Licznik];
      Licznik++;
      LiczZnaki = 0;
    }
    cout << Tekst+char(LiczZnaki+31);
    Sleep(22);
    LiczZnaki++;
  }
cout << "\n\n";
}