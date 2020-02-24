#include <iostream> 
using namespace std; 
/* 
  --== Trójkąt z gwiazdek 2 ==-- 
  Copyright (c)by Jan T. Biernat 
*/ 
int main() { 
  cout << "--== Trojkat z gwiazdek 2 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałej. 
    const short int Ile = 11; 
  //Trójkąt z gwiazdek stojący na czubku. 
    for(int A = 0; A < (Ile/2)+1; A++) { 
      cout << "\n"; 
      for(int B = 0; B < A; B++) { cout << " "; } 
      for(int C = Ile-(A*2); C > 0; C--) { cout << "*"; } 
    } 
  //Trójkąt z gwiazdek stojący na podstawie. 
    for(int A = 0; A < (Ile/2)+1; A++) { 
      cout << "\n";  
      for(int B = 0; B < (Ile/2)-A; B++) { cout << " "; } 
      for(int C = 0; C < (A*2)+1; C++) { cout << "*"; } 
    } 
    cout << "\n\n"; 
} 