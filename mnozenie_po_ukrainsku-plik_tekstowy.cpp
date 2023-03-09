#include <iostream> 
#include <fstream> 
#include <cstdlib> 
using namespace std; 
/*--== Możenie po ukraińsku ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który pomnoży dwie liczby 
  całkowite. Liczby są pobierane z pliku 
  tekstowego o nazwie "mnoz-po-ukr.txt". 
  W każdym wierszu (w pliku tekstowym) 
  umieszczone są dwie liczby, które 
  są rozdzielone znakiem średnika (tj. ";"). 
 */ 
void mnozenie_po_ukr(int A = 0, int B = 0) { 
//mnozenie_po_ukr - Funkcja wykonuje mnożenie po ukraińsku. 
//                  Metoda ta ma swoje początki w starożytnym Egipcie. 
// 
  const int IloscCyfr = 7; 
  int Suma = 0; 
  if((A > 0) && (B > 0)) { 
    cout << "\n" << A << " * " << B << " = " << (A*B); 
    for(int I = 0; B > 0; I++) { 
      if(B % 2 != 0) { Suma += A; } 
       cout << "\n"; 
       cout.width(IloscCyfr); cout << A << " | "; 
       cout.width(IloscCyfr); cout << B; 
       A = 2*A; //Kolumna 1. 
       B = B/2; //Kolumna 2. 
    } 
    cout << "\nSuma wynosi: " << Suma; 
  } else { cout << "\nINFO -?Podane liczby musza byc dodatnie!"; } 
} 
//Blok główny. 
int main() { 
  cout << "--== Mozenie po ukrainsku ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n"; 
  cout << "\n\n"; 
  string Wiersz = "", T1 = "", T2 = ""; 
  int Licznik = 0, A = 0, B = 0; 
  fstream PlikOdczyt("mnoz-po-ukr.txt", ios::in); 
  if(PlikOdczyt != NULL) { 
    Wiersz = ""; 
    while(getline(PlikOdczyt, Wiersz)) { 
      T1 = ""; T1 = Wiersz.substr(0, Wiersz.find(';')); 
      T2 = ""; T2 = Wiersz.substr(Wiersz.find(';')+1, Wiersz.length()); 
      A = 0; A = atoi(T1.c_str()); 
      B = 0; B = atoi(T2.c_str()); 
      Licznik++; 
      cout << "\n" << Licznik << ". (" << A << ", " << B << "):"; 
      mnozenie_po_ukr(A, B); 
      cout << "\n\n"; 
    } 
  } else { cout << "Brak pliku na dysku!"; } 
  cout << "\n\n"; 
} 