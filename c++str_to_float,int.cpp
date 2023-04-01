#include <iostream> 
#include <cstdlib> 
using namespace std; 
/*--== Str to Float & Integer ==-- 
Copyright (c)by Jan T. Biernat 
= 
Napisz program, który wyselekcjonuje liczbę, 
znak minus i kropkę z podanego ciągu znaków 
oraz wykona konwersję wyselekcjonowanej liczby 
na typ float i integer. 
*/ 
string TylkoLiczbaR(string Str = "", int Dl = 0, int IlePoKropce = 2) { 
//TylkoLiczbaR - Funkcja wyciąga z podanego ciągu znaków tylko cyfry, znak minus i kropkę. 
  string T = "", Tylko = ""; 
  int Start = 0, LiczPoKropce = 0; 
  bool Kropka = false; 
  if(Dl < 3) { Dl = 3; } 
  T = Str.substr(0, Dl); 
  if(IlePoKropce < 2) { IlePoKropce = 2; } 
  if(T != "") { 
    if(T[0] == '-') { Tylko = Tylko+T[0]; Start = 1; } 
    for(int I = Start; I < T.length(); I++) { 
      if((T[I] >= '0') && (T[I] <= '9') && (LiczPoKropce < IlePoKropce)) { 
        Tylko = Tylko+T[I]; 
        if(Kropka == true) { LiczPoKropce++; } 
      } else if((T[I] == '.') && (Kropka == false)) { Tylko += T[I]; Kropka = true; } 
    } 
    return Tylko; 
  } else { return ""; } 
} 
//Blok główny(startowy). 
int main() { 
  cout << "--== Wyselekcjonowanie liczby, znaku minus i kropki z podanego ciagu znakow ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n"; 
  cout << "\n\n"; 
  //= 
    string T = "", L = ""; 
    float F = 0; 
    int I = 0; 
  //= 
    cout << "Podaj liczbe: "; getline(cin, T); 
    if(T != "") { 
      cout << "Podales: \"" << T << "\".\n"; 
      L = ""; L = TylkoLiczbaR(T, 10, 2); 
      cout << "Wyselekcjonowano liczbe: \"" << L << "\".\n\n"; 
      F = atof(L.c_str()); 
      cout << "Typ float: " << F << " + " << F << " = " << (F+F) << "\n"; 
      I = atoi(L.c_str()); 
      cout << "Typ integer: " << I << " + " << I << " = " << (I+I); 
    } else { cout << "BLAD -?To nie jest liczba!"; } 
  cout << "\n\n"; 
} 