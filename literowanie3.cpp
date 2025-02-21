#include <iostream>
#include <windows.h>
/*--== Literowanie tekstu 3 ==--
  Tylko litery, znak kropki i spacji.
  Copyright (c)by Jan T. Biernat*/
using namespace std;
int main() {
  const char Znak[55] = { ' ', 'A', 'B', 'C', 'D', 'E'
                        , 'F', 'G', 'H', 'I', 'J', 'K'
                        , 'L', 'M', 'N', 'O', 'P', 'Q'
                        , 'R', 'S', 'T', 'U', 'V', 'W'
                        , 'X', 'Y', 'Z', 'a', 'b', 'c'
                        , 'd', 'e', 'f', 'g', 'h', 'i'
                        , 'j', 'k', 'l', 'm', 'n', 'o'
                        , 'p', 'q', 'r', 's', 't', 'u'
                        , 'v', 'w', 'x', 'y', 'z', '.', ' ' };
  const string Dane =  "Ten tekst jest literowany.";
  string Tekst = "";
  int Licznik = 0, LiczZnaki = 0;
  while(Licznik < Dane.length()) {
    system("cls");
    cout << "--== Literowanie tekstu 3 ==-- \n\n";
    if(Znak[LiczZnaki] == Dane[Licznik]) {
      Tekst+= Dane[Licznik];
      Licznik++;
      LiczZnaki = 0;
    }
    cout << Tekst+Znak[LiczZnaki];
    Sleep(22);
    LiczZnaki++;
  }
cout << "\n\n";
}