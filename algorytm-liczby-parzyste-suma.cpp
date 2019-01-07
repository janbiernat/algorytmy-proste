#include <iostream> //Obsługa strumieni (np. przesyłanie danych na ekran). 
#include <conio.h>  //Obsługa klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
using namespace std; 
/*--== Liczby parzyste ==-- 
W wielu algorytmach musimy wygenerować liczby parzyste 
z zadanego przedziału <A, B> liczb całkowitych. 
Ponieważ granice przedziału A i B mogą być dowolnymi 
liczbami całkowitymi, musimy najpierw znaleźć 
najmniejszą liczbę parzystą z przedziału <A, B>. 

Parzystość A sprawdzimy badając resztę z dzielenia A przez 2. 
Jeśli reszta jest zerowa, to A jest liczbą parzystą. 
W innym przypadku mamy do czynienia z liczbą nie parzystą. 
*/ 
int main() { 
  cout << "--== Liczby parzyste z przedzialu <A, B> ==--\n"; //Wyświetl na ekranie tekst znajdujący się pomiędzy cudzysłowami. 
  int A=0, B=0, Suma=0;                                      //Zadeklarowanie zmiennych liczbowych całkowitych. 
  cout << "\nA: ";                                           //Wyświetl na ekranie tekst znajdujący się pomiędzy cudzysłowami. 
  cin >> A;                                                  //Pobierz dane z klawiatury i przypisz je do zmiennej liczbowej całkowitej "A". 
  cout << "B: "; cin >> B; 
  cout << "\nLiczby parzyste z podanego przedzialu <" 
       << A << ", " << B << "> to: "; 
  for(int I=A; I < B+1; I++) { 
    if(I % 2 == 0) { 
      /*Jeżeli liczba jest parzysta (tzn. warunek jest spełniony), 
        to wykonaj poniższe instrukcje (tzn. wyświetl liczby parzyste).*/ 
      if((I > A) && (I > A+1)) { cout << ", "; } 
      Suma = Suma+I; //Sumowanie liczb parzystych. 
      cout << I; 
    } 
  } 
  cout << " = " << Suma << ".\n"; 
} 
