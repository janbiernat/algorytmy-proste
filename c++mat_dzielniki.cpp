#include <iostream>
using namespace std;
int main() {
  cout << "--== [MAT]Dzielniki podanej liczby ==-- \n \n";
  cout << "Definicja: \n";
  cout << "Dzielnik w matematyce to liczba, przez \n";
  cout << "ktora inna liczba jest dzielona bez reszty. \n \n \n";
  int Liczba = 0;
  cout << "Liczba: ";
  cin >> Liczba;
  cout << "\nDzielniki liczby " << Liczba << " to: ";
  for(int I = 1; I < Liczba+1; I++) {
    if(Liczba % I == 0) { cout << I << "  "; }
  }
cout << "\n \n";
}