#include <iostream> 
#include <fstream> 
#include <cstdlib> 
using namespace std; 
/*--== Mo¿enie po rosyjsku ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który pomno¿y dwie liczby 
  ca³kowite. Liczby s¹ pobierane z pliku 
  tekstowego o nazwie "mnozenie_po_r.txt". 
  W ka¿dym wierszu (w pliku tekstowym) 
  umieszczone s¹ dwie liczby, które 
  s¹ rozdzielone znakiem œrednika (tj. ";"). 
 */ 
void mnozenie_po_r(int A = 0, int B = 0) { 
//mnozenie_po_r - Funkcja wykonuje mno¿enie po rosyjsku. 
//                Metoda ta ma swoje pocz¹tki w staro¿ytnym Egipcie. 
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
//Blok g³ówny. 
int main() { 
  cout << "--== Mozenie po rosyjsku ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n"; 
  cout << "\n\n"; 
  string Wiersz = "", T1 = "", T2 = ""; 
  int Licznik = 0, A = 0, B = 0; 
  fstream PlikOdczyt("mnozenie_po_r.txt", ios::in); 
  if(PlikOdczyt != NULL) { 
    Wiersz = ""; 
    while(getline(PlikOdczyt, Wiersz)) { 
      T1 = ""; T1 = Wiersz.substr(0, Wiersz.find(';')); 
      T2 = ""; T2 = Wiersz.substr(Wiersz.find(';')+1, Wiersz.length()); 
      A = 0; A = atoi(T1.c_str()); 
      B = 0; B = atoi(T2.c_str()); 
      Licznik++; 
      cout << "\n" << Licznik << ". (" << A << ", " << B << "):"; 
      mnozenie_po_r(A, B); 
      cout << "\n\n"; 
    } 
  } else { cout << "Brak pliku na dysku!"; } 
  cout << "\n\n"; 
} 