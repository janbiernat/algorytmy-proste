#include <iostream>
/*--== Tabliczka mnożenia na krzyż, w2 ==--
  Copyright (c)by Jan T. Biernat
*/
using namespace std;
int main() {
  cout << "--== Tabliczka mnozenia na krzyz, w2 - Petla FOR ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n\n\n";
  //=
    //Nagłówek górny dla kolumn.
      cout << "  ";
      for(int A = 1; A < 11; A++) {
        cout.width(4); cout.fill(' ');
        cout << A;
      }
    //Nagłówek dla wierszy oraz tabliczka mnożenia na krzyż.
      cout << "\n";
      for(int A = 1; A < 11; A++) {
        cout.width(2); cout.fill(' ');
        cout << A;
        for(int B = 1; B < 11; B++) {
          cout.width(4); cout.fill(' ');
          cout << (A*B);
        }
        cout << "\n";
      }
  cout << "\n\n";
}