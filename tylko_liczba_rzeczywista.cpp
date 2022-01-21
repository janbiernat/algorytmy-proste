#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Tylko liczba rzeczywista ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który z podanego ci¹gu znaków 
  wyodrêbni tylko cyfry, znak "-" i znak ".". 
*/ 
string TylkoLiczbaR(string Str = "", int Dl = 0, int IlePoKropce = 2) { 
//TylkoLiczbaR - Funkcja wyci¹ga z podanego ci¹gu znaków tylko cyfry, znak minus i kropkê. 
  string T = "", Tylko = ""; 
  int Start = 0, KropkaLicz = 0; 
  bool Kropka = false; 
  if(Dl < 3) { Dl = 3; } 
  T = Str.substr(0, Dl); 
  if(IlePoKropce < 2) { IlePoKropce = 2; } 
  if(T != "") { 
    if(T[0] == '-') { Tylko = Tylko+T[0]; Start = 1; } 
    for(int I = Start; I < T.length(); I++) { 
      if((T[I] >= '0') && (T[I] <= '9') && (KropkaLicz < IlePoKropce)) { 
        Tylko = Tylko+T[I]; 
        if(Kropka == true) { KropkaLicz++; } 
      } else if((T[I] == '.') && (Kropka == false)) { Tylko += T[I]; Kropka = true; } 
    } 
    return Tylko; 
  } else { return ""; } 
} 
//Blok g³ówny(startowy). 
int main() { 
  cout << "--== Tylko liczba rzeczywista ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  cout << "\n"; 
  //Deklaracja sta³ych. 
    const short int Ilosc = 20; 
    const string Dane[Ilosc] = { 
                                 "0123456789", 
                                 "? ", 
                                 " ", 
                                 "012.3456789", 
                                 "--01-2f.g3.456789", 
                                 " a0123456789 ab ", 
                                 " a0123456789 ab a0123456789 ab ", 
                                 " -a012345678.9 ab ", 
                                 "--a01234-56789 ab ", 
                                 "-0123456789 ab ", 
                                 "-01234567.89 ab ", 
                                 "-01234567.89 ab -01234567.89 ab ", 
                                 "-01234567..89 ab ", 
                                 "-0123..4f567..89 ab ", 
                                 "-01234567..89 ab -01234567..89 ab ", 
                                 "-012345-6789 ab ", 
                                 "-012345-6.7.89 ab ", 
                                 " a0123.4d.fsd....56789 ab. ", 
                                 " a0  d - 1 . f 2   g3f4g5j6j7i89 ab ", 
                                 "   !@#$&*() a0  d - 1 . f 2   g3f4g5j6j7i89 ab  0123456789 {}[]/<>,.+-=" 
                               }; 
  //Pobierz dane z poszczególnych elementów tablicy tekstowej N elementowej. 
    for(int I = 0; I < Ilosc; I++) { 
      cout << "\n ["+Dane[I]+"] = ["+TylkoLiczbaR(Dane[I], 15, 3)+"]."; 
    } 
    cout << "\n\n"; 
  //Czekaj, a¿ u¿ytkownik naciœnie dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 