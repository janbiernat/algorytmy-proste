#include <iostream>
#include <windows.h>
/*--== Tabliczka mnożenia na krzyż w2 ==--
  Copyright (c)by Jan T. Biernat
*/
using namespace std;
int main() {
  int Zakres = 0;
  Zakres = 10;
  //Generowanie tabliczki mnożenia na krzyż.
    do {
      if(Zakres > 0) {
        if(Zakres > 18) { Zakres = 18; }
        system("cls");
        cout << "--== Tabliczka mnozenia na krzyz w2 - Petla FOR ==-- \n";
        cout << "Copyright (c)by Jan T. Biernat \n\n\n";
        cout << "UWAGA: Podanie wartosci mniejszej od 1, spowoduje wyjscie z programu. \n\n\n";
        //=
          //Nagłówek górny dla kolumn.
            cout << "  ";
            for(int A = 1; A < (Zakres+1); A++) {
              cout.width(4); cout.fill(' ');
              cout << A;
            }
          //Nagłówek dla wierszy oraz tabliczka mnożenia na krzyż.
            cout << "\n";
            for(int A = 1; A < (Zakres+1); A++) {
              cout.width(2); cout.fill(' ');
              cout << A;
              for(int B = 1; B < (Zakres+1); B++) {
                cout.width(4); cout.fill(' ');
                cout << (A*B);
              }
              cout << "\n";
            }
      }
      //Pytanie o zakres tabliczki mnożenia.
        Zakres = 0;
        cout << "\n\nZakres: ";
        cin >> Zakres;
    } while(Zakres >0);
  system("cls");
  cout << "Do widzenia! \n";
}