#include<iostream> 
using namespace std; 
int main() { 
  /*--== Ci¹g Fibonacciego ==-- 
    Copyright (c)by Jan T. Biernat 
    - 
    Ci¹g Fibonacciego – ci¹g liczb naturalnych okreœlony rekurencyjnie 
    w sposób nastêpuj¹cy: Pierwszy wyraz jest równy 0, drugi jest równy 1, 
    ka¿dy nastêpny jest sum¹ dwóch poprzednich. 
    Formalnie: Kolejne wyrazy tego ci¹gu nazywane s¹ liczbami Fibonacciego. 
    Przyk³ad: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 ... a¿ do nieskoñczonoœci. 
    W³asnoœci¹ tego ci¹gu jest to, ¿e gdy podzielimy przez siebie dowolne, 
    kolejne dwa wyrazy ci¹gu Fibonacciego, np. 987 : 610; 89 : 55 to stosunek 
    tych liczb bêdzie równy zawsze tej samej liczbie, równej w przybli¿eniu 1.618. 
    Im wiêksze wyrazy ci¹gu podzielimy, tym dok³adniejsze przybli¿enie tej liczby uzyskamy. 
    Liczbê tê nazywa siê "z³ot¹ liczb¹" lub liczb¹ fi. Stosunek tego podzia³u okreœla siê równie¿ mianem 
    "z³otego podzia³u" lub "Boskiej proporcji". 
    Przyk³ad: Z³ote proporcje zachowuj¹ nawet spirale naszego DNA. 
              Cz¹steczka DNA mierzy 34 jednostki d³ugoœci na 21 jednostek szerokoœci 
              dla ka¿dego odcinka podwójnej spirali. Liczby te s¹ oczywiœcie elementami 
              ci¹gu Fibonacciego, a zale¿noœæ miêdzy nimi jest równa liczbie fi (czyli 1.618). 
    Rekurencja (³ac. recurrere, przybiec z powrotem) – odwo³ywanie siê np. funkcji 
    lub definicji do samej siebie. W logice wnioskowanie rekurencyjne opiera siê 
    na za³o¿eniu istnienia pewnego stanu pocz¹tkowego oraz zdania (lub zdañ) 
    stanowi¹cego podstawê wnioskowania (przy czym, aby ca³y dowód by³ poprawny, 
    zarówno regu³a, jak i stan pocz¹tkowy musz¹ byæ prawdziwe).*/ 
  cout << "--== Ciag Fibonacciego ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Zadeklarowanie zmiennych. 
    long int LiczbaK = 0, A = 0, B = 0, C = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Zakres gorny: "; 
    cin >> LiczbaK; 
  //Ci¹g Fibonacciego. 
    if(LiczbaK > 0) { 
      A = 0; B = 1; //Wartoœci pocz¹tkowe Ci¹gu Fibonacciego. 
      cout << "\nCiag Fibonacciego: " << A << ", " << B << ", "; 
      for(int I = 0; I < LiczbaK; I++) { 
        C = 0; C = A+B; 
        cout << C; //Wyœwietlenie sumy dwóch poprzednich liczb. 
        if(I < LiczbaK-1) { cout << ", "; } 
        A = 0; A = B; 
        B = 0; B = C; 
      } 
    } 
  cout << ".\n"; 
} 