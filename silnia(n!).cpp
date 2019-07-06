#include <iostream> 
#include <conio.h> 
/*--== Silnia (n!) ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main () { 
  cout << "--== Silnia (n!) ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych liczbowych. 
    int iPyt = 0; 
    long long iSilnia = 1; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj liczbe: "; cin >> iPyt; 
  //Obliczenia silni metodą iteracyjną. 
    cout << "\n"; 
    if((iPyt > -1) && (iPyt < 21)) { 
      cout << iPyt << "! = "; 
      for(int I = 1; I < iPyt+1; I++) { 
        iSilnia = iSilnia*I; 
        if(I > 1) { cout << " * "; } 
        cout << I; 
      } 
      if(iPyt > 0) { cout << " = "; } 
      cout << iSilnia << "."; 
    } else { cout << "BLAD -?Wprowadzono ujemna lub zbyt duza wartosc!"; } 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); 
} 