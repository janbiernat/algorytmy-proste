#include<iostream> 
using namespace std; 
int main() { 
  /*--== Ciąg Fibonacciego ==-- 
    Copyright (c)by Jan T. Biernat 
    - 
    Ciąg Fibonacciego – ciąg liczb naturalnych określony rekurencyjnie 
    w sposób następujący: Pierwszy wyraz jest równy 0, drugi jest równy 1, 
    każdy następny jest sumą dwóch poprzednich. 
    Formalnie: Kolejne wyrazy tego ciągu nazywane są liczbami Fibonacciego. 
    Przykład: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 ... aż do nieskończoności. 
    Własnością tego ciągu jest to, że gdy podzielimy przez siebie dowolne, 
    kolejne dwa wyrazy ciągu Fibonacciego, np. 987 : 610; 89 : 55 to stosunek 
    tych liczb będzie równy zawsze tej samej liczbie, równej w przybliżeniu 1.618. 
    Im większe wyrazy ciągu podzielimy, tym dokładniejsze przybliżenie tej liczby uzyskamy. 
    Liczbę tę nazywa się "złotą liczbą" lub liczbą fi. Stosunek tego podziału określa się również mianem 
    "złotego podziału" lub "Boskiej proporcji". 
    Przykład: Złote proporcje zachowują nawet spirale naszego DNA. 
              Cząsteczka DNA mierzy 34 jednostki długości na 21 jednostek szerokości 
              dla każdego odcinka podwójnej spirali. Liczby te są oczywiście elementami 
              ciągu Fibonacciego, a zależność między nimi jest równa liczbie fi (czyli 1.618). 
    Rekurencja (łac. recurrere, przybiec z powrotem) – odwoływanie się np. funkcji 
    lub definicji do samej siebie. W logice wnioskowanie rekurencyjne opiera się 
    na założeniu istnienia pewnego stanu początkowego oraz zdania (lub zdań) 
    stanowiącego podstawę wnioskowania (przy czym, aby cały dowód był poprawny, 
    zarówno reguła, jak i stan początkowy muszą być prawdziwe).*/ 
  cout << "--== Ciag Fibonacciego ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Zadeklarowanie zmiennych. 
    long double LiczbaK = 0, A = 0, B = 0, C = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Zakres gorny: "; 
    cin >> LiczbaK; 
  //Ciąg Fibonacciego. 
    if(LiczbaK > 0) { 
      A = 0; B = 1; //Wartości początkowe Ciągu Fibonacciego. 
      cout << "\nCiag Fibonacciego: " << A << ", " << B << ", "; 
      for(int I = 0; I < LiczbaK; I++) { 
        C = 0; C = A+B; 
        cout.precision(50); //Określenie ilości wyświetlanych liczb. 
        cout << C;          //Wyświetlenie sumy dwóch poprzednich liczb. 
        if(I < LiczbaK-1) { cout << ", "; } 
        A = 0; A = B; 
        B = 0; B = C; 
      } 
    } 
  cout << ".\n"; 
} 