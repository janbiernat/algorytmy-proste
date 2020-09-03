#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Największy wspólny dzielnik (NWD) ==-- 
  Implementacja (c)by Jan T. Biernat 
  = 
  Skracanie ułamków zwykłych - przykłady: 
   1) NWD liczb 2 i 4 to 2. 
   2) NWD liczb 6 i 9 to 3. 
   3) NWD liczb 8 i 16 to 8. 
   4) NWD liczb 21 i 14 to 7. 
   5) NWD liczb 28 i 22 to 2. 
   6) NWD liczb 10 i 6 jest liczba 2. 
   7) NWD liczb 75 i 100 jest liczba 25. 
   8) NWD liczb 15 i 5 jest liczba 5. 
   - 
   Wyznaczenie NWD za pomocą reszty: 
   1) 
      A = 47, B = 4. 
      47 : 4 = 11, reszta 3 
       4 : 3 = 1, reszta 1 
       3 : 1 = 3, reszta 0 
      NWD(47, 4) = 1. 
   2) 
      A = 86, B = 4. 
      86 : 4 = 21, reszta 2 
       4 : 2 = 2, reszty 0 
      NWD(86, 4) = 2 
                      lub 
                          4 : 86 = 0, reszty 4 
                         86 : 4 = 21, reszty 2 
                          4 : 2 = 2, reszty 0 
                         NWD(4, 86) = 2. 
*/ 
int nwd(int A = 0, int B = 0) { 
  if((A > - 1) && (B > -1)) { 
    while(A != B) { 
      if(A > B) { A = A - B; } 
      else { B = B - A; } 
    } 
    return A; 
  } else { return -1; } 
} 
//= 
int nwd2(int A = 0, int B = 0) { 
  //Wyznaczenie NWD za pomocą reszty. 
  int Tym = 0; 
  if((A > - 1) && (B > -1)) { 
    while(B != 0) { 
      Tym = 0 ; Tym = B; 
      B = A % B; 
      A = Tym; 
    } 
    return A; 
  } else { return -1; } 
} 
//Blok główny(startowy). 
int main() { 
  cout << "--== Najwiekszy wspolny dzielnik (NWD) ==--\n"; 
  cout << "Implementacja (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int A = 0, B = 0; 
  //Wykonaj zadanie. 
    cout << "A: "; cin >> A; 
    cout << "B: "; cin >> B; 
    cout << "NWD(" << A << ", " << B << ") = " << nwd(A, B) << "\n"; 
    cout << "NWD2(" << A << ", " << B << ") = " << nwd2(A, B) << "\n"; 
  //Czekaj, aż użytkownik naciśnie dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
} 