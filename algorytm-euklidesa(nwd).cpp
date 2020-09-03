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
  - 
  Ułamek - wyrażenie lub liczba w postaci: 
    a 
    - 
    b 
  (czasami zapisujemy a/b), gdzie: 
  a - nazywamy licznikiem ułamka, 
  b - nazywamy mianownikiem ułamka. 
  Kreskę poziomą między licznikiem i mianownikiem 
  nazywamy kreską ułamkową. 
  - 
  Skracanie ułamków zwykłych - przykłady: 
   1) 
      2   2 : 2   1 
      - = ----- = - = NWD to 2, (ponieważ 2/4 = 1/2 = 0.5) 
      4   4 : 2   2 
 
   2) 
      6   6 : 3   2 
      - = ----- = - = NWD to 3, (ponieważ 6/9 = 2/3 = 0.66) 
      9   9 : 3   3 
 
   3) 
       8    8 : 8   1 
      -- = ------ = - = NWD to 8, (ponieważ 8/16 = 1/2 = 0.5) 
      16   16 : 8   2 
 
   4) 
      21   21 : 7   3 
      -- = ------ = - = NWD to 7, (ponieważ 21/14 = 3/2 = 1.5) 
      14   14 : 7   2 
 
   5) 
      28   28 : 2   14 
      -- = ------ = -- = NWD to 2, (ponieważ 28/22 = 14/11 = 1.27) 
      22   22 : 2   11 
 
   6) NWD liczb 10 i 6 jest liczba 2. 
   7) NWD liczb 75 i 100 jest liczba 25. 
   8) NWD liczb 15 i 5 jest liczba 5. 
*/ 
//Blok główny(startowy). 
int main() { 
  cout << "--== Najwiekszy wspolny dzielnik (NWD) ==--\n"; 
  cout << "Implementacja (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    int A = 0, B = 0; 
  //Wykonaj zadanie. 
    cout << "A: "; cin >> A; 
    cout << "B: "; cin >> B; 
    while(A != B) { 
      if(A > B) { A = A - B; } 
      else { B = B - A; } 
    } 
    cout << "NWD = " << A << "\n"; 
  //Czekaj, aż użytkownik naciśnie dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
} 