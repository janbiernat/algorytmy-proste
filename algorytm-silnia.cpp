#include <iostream> //Obs³uga strumieni (np. przesy³anie danych na ekran). 
#include <conio.h>  //Obs³uga klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
#include <cstdlib>  //Posiada instrukcje do zainicjowania generatora liczb pseudolosowych. 
#include <ctime>    //Biblioteka "ctime " zawiera funkcje zwi¹zane z obs³ug¹ czasu i daty. 
using namespace std; 
/*Iteracja   - (³ac. iteratio – powtarzanie) – czynnoœæ powtarzania 
               (najczêœciej wielokrotnego) tej samej instrukcji (albo wielu instrukcji) 
               w pêtli. Mianem iteracji okreœla siê tak¿e operacje wykonywane wewn¹trz 
               takiej pêtli. 
  Rekurencja - zwana tak¿e rekursj¹ (ang. recursion, 
               z ³ac. recurrere, przybiec z powrotem) - odwo³ywanie siê 
               np. funkcji lub definicji do samej siebie. 

               W logice wnioskowanie rekurencyjne opiera siê na za³o¿eniu 
               istnienia pewnego stanu pocz¹tkowego oraz zdania (lub zdañ) 
               stanowi¹cego podstawê wnioskowania (przy czym, aby ca³y dowód 
               by³ poprawny, zarówno regu³a, jak i stan pocz¹tkowy musz¹ byæ prawdziwe). 
  == 
  UWAGA: Algorytmy iteracyjne wykonuj¹ siê znacznie 
         szybciej ni¿ algorytmy rekurencyjne.*/ 
//Funkcja potrzebna do obliczenia silni metod¹ rekurencyjn¹. 
long long Silnia(int iLiczba) { 
  if(iLiczba < 1) { return 1; } 
  else { return iLiczba*Silnia(iLiczba-1); } 
} 
int main() { 
  cout << "--== Algorytm - Silnia (n!) - Iteracja i Rekurencja ==--\n\n"; 
  //Deklaracja zmiennych liczbowych. 
    int iPyt = 0; 
    long long iSilnia = 1; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj liczbe: "; cin >> iPyt; 
  //Obliczenia silni metod¹ iteracyjn¹. 
    cout << "\nIteracyjnie  : "; 
    if((iPyt > -1) && (iPyt < 21)) { 
      for(int I = 1; I < iPyt+1; I++) { iSilnia = iSilnia*I; } 
      cout << iPyt << "! = " << iSilnia << "."; 
    } else { cout << "BLAD -?Wprowadzono ujemna lub zbyt duza wartosc!"; } 

  //Obliczenia silni metod¹ rekurencyjn¹. 
    cout << "\nRekurencyjnie: "; 
    if((iPyt > -1) && (iPyt < 21)) {  
      cout << iPyt << "! = " << Silnia(iPyt) << "."; 
    } else { cout << "BLAD -?Wprowadzono ujemna lub zbyt duza wartosc!"; } 

  //Naciœnij dowolny klawisz. 
   cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 