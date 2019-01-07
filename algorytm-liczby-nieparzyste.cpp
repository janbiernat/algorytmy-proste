#include <iostream> //Obs�uga strumieni (np. przesy�anie danych na ekran). 
#include <conio.h>  //Obs�uga klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
using namespace std; 
/*--== Liczby nieparzyste ==-- 
Liczby nieparzyste generujemy w identyczny spos�b, 
tzn. wyznaczamy pierwsz� liczb� nieparzyst� z przedzia�u <A, B>.*/ 
int main() { 
  cout << "--== Liczby nieparzyste z przedzialu <A, B> ==--\n"; //Wy�wietl na ekranie tekst znajduj�cy si� pomi�dzy cudzys�owami. 
  int A=0, B=0;                                                 //Zadeklarowanie zmiennych liczbowych ca�kowitych. 
  cout << "\nA: ";                                              //Wy�wietl na ekranie tekst znajduj�cy si� pomi�dzy cudzys�owami. 
  cin >> A;                                                     //Pobierz dane z klawiatury i przypisz je do zmiennej liczbowej ca�kowitej "A". 
  cout << "B: "; cin >> B; 
  cout << "\nLiczby nieparzyste z podanego przedzialu <" 
       << A << ", " << B << "> to: "; 
  for(int I=A; I < B+1; I++) { 
    if(I % 2 != 0) { 
      /*Je�eli liczba jest nieparzysta (tzn. warunek jest spe�niony), 
        to wykonaj poni�sze instrukcje (tzn. wy�wietl liczby nieparzyste).*/ 
      if((I > A) && (I > A+1)) { cout << ", "; } 
      cout << I; 
    } 
  } 
  cout << ".\n"; 
} 