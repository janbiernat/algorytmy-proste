#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Największy wspólny dzielnik (NWD) ==-- 
  Implementacja (c)by Jan T. Biernat 
  = 
  Algorytm Euklidesa służy do obliczania 
  NWD (największego wspólnego dzielnika) 
  dwóch liczb całkowitych. 
  - 
  Euklides z Aleksandrii –  matematyk grecki 
  przez większość życia działający 
  w Aleksandrii (Egipt). 
  Skracanie ułamków zwykłych - przykłady: 
   1) 
      6   6 : 3   2 
      - = ----- = - = NWD to 3, (ponieważ 6/9 = 2/3 = 0.66) 
      9   9 : 3   3 
 
   2) 
      21   21 : 7   3 
      -- = ------ = - = NWD to 7, (ponieważ 21/14 = 3/2 = 1.5) 
      14   14 : 7   2 
   3) NWD liczb 10 i 6 to liczba 2. 
   4) NWD liczb 75 i 100 to liczba 25. 
   5) NWD liczb 15 i 5 to liczba 5. 
*/ 
int nwd(int A = 0, int B = 0) { 
//Funkcja NWD zwraca największy wspólny dzielnik podanych 2 liczb. 
  if((A > -1) && (B > -1)) { 
    while(A != B) { 
      if(A > B) { A = A - B; } 
      else { B = B - A; } 
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
  //Czekaj, aż użytkownik naciśnie dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
} 