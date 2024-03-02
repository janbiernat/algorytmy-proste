#include <iostream>
using namespace std;
/*--== Pętle FOR, WHILE, DO ... WHILE ==--
  Copyright (c)by Jan T. Biernat
 */
//Blok główny (Startowy).
int main() {
  int A = 0, B = 0;
  //Tabliczka mnożenia na krzyż - pętla FOR.
    cout << "FOR:\n";
    cout << "  ";
    for(A = 1; A < 11; A++) {
      cout.width(4); cout.fill(' ');
      cout << A;
    }
    for(A = 1; A < 11; A++) {
      cout << "\n";
      cout.width(2); cout.fill(' ');
      cout << A;
      for(B = 1; B < 11; B++) {
        cout.width(4); cout.fill(' ');
        cout << (A*B);
      }
    }
  //Tabliczka mnożenia na krzyż - pętla WHILE.
    cout << "\n\n\nWHILE:\n";
    cout << "  ";
    A = 0;
    while(A < 10) {
      A++;
      cout.width(4); cout.fill(' ');
      cout << A;
    }
    A = 0;
    while(A < 10) {
      A++;
      cout << "\n";
      cout.width(2); cout.fill(' ');
      cout << A;
      B = 0;
      while(B < 10) {
        B++;
        cout.width(4); cout.fill(' ');
        cout << (A*B);
      }
    }
  //Tabliczka mnożenia na krzyż - pętla DO ... WHILE.
    cout << "\n\n\nDO ... WHILE:\n";
    cout << "  ";
    A = 0;
    do {
      A++;
      cout.width(4); cout.fill(' ');
      cout << A;
    } while(A < 10);
    A = 0;
    do {
      A++;
      cout << "\n";
      cout.width(2); cout.fill(' ');
      cout << A;
      B = 0;
      do {
        B++;
        cout.width(4); cout.fill(' ');
        cout << (A*B);
      } while(B < 10);
    } while(A < 10);
  cout << "\n\n";
}