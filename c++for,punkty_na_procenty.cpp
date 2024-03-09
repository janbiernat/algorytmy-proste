#include <iostream>
#include <conio.h>
/*--== Punkty na procenty (%) ==--
  Copyright (c)by Jan T. Biernat*/
using namespace std;
int main() {
  cout << "--== Punkty na procenty (%) ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  int Punkty = 0;
  cout << "Maksymalna ilosc punktow: ";
  cin >> Punkty;
  if(Punkty > 0) {
    cout << "\n\nPunkty |  %\n";
    cout.width(13); cout.fill('-'); cout << "-";
    for(int I = 0; I < Punkty; I++) {
      cout << "\n";
      cout.width(6); cout.fill(' ');
      cout << (I+1) << " | ";
      cout.width(3); cout.fill(' ');
      cout << ((I+1)*100/Punkty);
    }
  }
  cout << "\n\n\nNacisnij dowolny klawisz..."; getch();
}