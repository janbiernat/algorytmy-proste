#include <iostream>
/*--== Suma n-liczb ==--
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który obliczy sumę
  wszystkich liczb całkowitych do
  podanej liczby przez użytkownika.
*/
using namespace std;
int main() {
  cout << "--== Suma n-liczb ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n\n";
  //=
    int Liczba = 0;
    cout << "Liczba: "; cin >> Liczba;
    if(Liczba < 1) { Liczba = Liczba * -1; }
    cout << "Suma  : " << (Liczba*(Liczba+1)/2);
  cout << "\n\n";
}