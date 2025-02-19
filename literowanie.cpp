#include <iostream>
#include <windows.h>
/*--== Literowanie tekstu ==--
  Copyright (c)by Jan T. Biernat*/
using namespace std;
int main() {
  cout << "--== Literowanie tekstu ==-- \n\n";
  const string Dane =  "Ten tekst jest literowany. Program napisany jest w C++. Literowanie tekstu jest fajne.";
  for(int Z = 0; Z < Dane.length()+1; Z++) {
    cout << Dane[Z];
    Sleep(111);
  }
cout << "\n\n";
}