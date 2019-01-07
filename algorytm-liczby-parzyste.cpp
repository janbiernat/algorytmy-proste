#include <iostream> //Obs³uga strumieni (np. przesy³anie danych na ekran). 
#include <conio.h>  //Obs³uga klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
using namespace std; 
/*--== Liczby parzyste ==-- 
W wielu algorytmach musimy wygenerowaæ liczby parzyste 
z zadanego przedzia³u <A, B> liczb ca³kowitych. 
Poniewa¿ granice przedzia³u A i B mog¹ byæ dowolnymi 
liczbami ca³kowitymi, musimy najpierw znaleŸæ 
najmniejsz¹ liczbê parzyst¹ z przedzia³u <A, B>. 

Parzystoœæ A sprawdzimy badaj¹c resztê z dzielenia A przez 2. 
Jeœli reszta jest zerowa, to A jest liczb¹ parzyst¹. 
W innym przypadku mamy do czynienia z liczb¹ nie parzyst¹. 
*/ 
int main() { 
  cout << "--== Liczby parzyste z przedzialu <A, B> ==--\n"; //Wyœwietl na ekranie tekst znajduj¹cy siê pomiêdzy cudzys³owami. 
  int A=0, B=0;                                              //Zadeklarowanie zmiennych liczbowych ca³kowitych. 
  cout << "\nA: ";                                           //Wyœwietl na ekranie tekst znajduj¹cy siê pomiêdzy cudzys³owami. 
  cin >> A;                                                  //Pobierz dane z klawiatury i przypisz je do zmiennej liczbowej ca³kowitej "A". 
  cout << "B: "; cin >> B; 
  cout << "\nLiczby parzyste z podanego przedzialu <" 
       << A << ", " << B << "> to: "; 
  for(int I=A; I < B+1; I++) { 
    if(I % 2 == 0) { 
      /*Je¿eli liczba jest parzysta (tzn. warunek jest spe³niony), 
        to wykonaj poni¿sze instrukcje (tzn. wyœwietl liczby parzyste).*/ 
      if((I > A) && (I > A+1)) { cout << ", "; } 
      cout << I; 
    } 
  } 
  cout << ".\n"; 
} 