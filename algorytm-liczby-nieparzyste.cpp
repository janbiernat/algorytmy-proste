#include <iostream> //Obs³uga strumieni (np. przesy³anie danych na ekran). 
#include <conio.h>  //Obs³uga klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
using namespace std; 
/*--== Liczby nieparzyste ==-- 
Liczby nieparzyste generujemy w identyczny sposób, 
tzn. wyznaczamy pierwsz¹ liczbê nieparzyst¹ z przedzia³u <A, B>.*/ 
int main() { 
  cout << "--== Liczby nieparzyste z przedzialu <A, B> ==--\n"; //Wyœwietl na ekranie tekst znajduj¹cy siê pomiêdzy cudzys³owami. 
  int A=0, B=0;                                                 //Zadeklarowanie zmiennych liczbowych ca³kowitych. 
  cout << "\nA: ";                                              //Wyœwietl na ekranie tekst znajduj¹cy siê pomiêdzy cudzys³owami. 
  cin >> A;                                                     //Pobierz dane z klawiatury i przypisz je do zmiennej liczbowej ca³kowitej "A". 
  cout << "B: "; cin >> B; 
  cout << "\nLiczby nieparzyste z podanego przedzialu <" 
       << A << ", " << B << "> to: "; 
  for(int I=A; I < B+1; I++) { 
    if(I % 2 != 0) { 
      /*Je¿eli liczba jest nieparzysta (tzn. warunek jest spe³niony), 
        to wykonaj poni¿sze instrukcje (tzn. wyœwietl liczby nieparzyste).*/ 
      if((I > A) && (I > A+1)) { cout << ", "; } 
      cout << I; 
    } 
  } 
  cout << ".\n"; 
} 