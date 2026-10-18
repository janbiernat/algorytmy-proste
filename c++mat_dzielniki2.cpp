#include <iostream>
using namespace std;
int main() {
  cout << "--== [MAT]Dzielniki podanej liczby 2, DO .. WHILE ==-- \n \n";
  cout << "Definicja: \n";
  cout << "Dzielnik w matematyce to liczba, przez \n";
  cout << "ktora inna liczba jest dzielona bez reszty. \n \n \n";
  int Liczba = 0;
  do {
    Liczba = 0;
    cout << "Liczba: ";
    cin >> Liczba;
    if(Liczba > 0) {
      cout << "Dzielniki liczby " << Liczba << " to: ";
      for(int I = 1; I < Liczba+1; I++) {
        if(Liczba % I == 0) { cout << I << "  "; }
      }
      cout << "\n \n \n";
    }
  } while(Liczba != 0);
cout << "\n \n";
}