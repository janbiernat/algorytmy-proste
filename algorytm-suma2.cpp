#include <iostream> //Obs³uga strumieni (np. przesy³anie danych na ekran). 
#include <conio.h>  //Obs³uga klawiatury. 
using namespace std; 
/*Iteracja   - (³ac. iteratio – powtarzanie) – czynnoœæ powtarzania 
               (najczêœciej wielokrotnego) tej samej instrukcji (albo wielu instrukcji) 
               w pêtli. Mianem iteracji okreœla siê tak¿e operacje wykonywane wewn¹trz 
               takiej pêtli. 
  UWAGA: Algorytmy iteracyjne wykonuj¹ siê znacznie 
         szybciej ni¿ algorytmy rekurencyjne.*/ 
int main() { 
  cout << "--== Algorytm - Suma ==--\n"; 
  //Deklaracja zmiennych liczbowych. 
    int iPyt = 0, iSuma = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj liczbe: "; cin >> iPyt; 
  //Obliczenie sumy podanych liczby metod¹ iteracyjn¹. 
    cout << "\n"; //Przejœcie do nastêpnego wiersza. 
    for(int I = 1; I < iPyt+1; I++) { 
      if(I > 1) { cout << " + " << I; } 
      else { cout << I; } 
      iSuma = iSuma+I; //Obliczenie sumy podanych liczb. 
    } 
    cout << " = " << iSuma << "."; 
  //Naciœnij dowolny klawisz. 
   cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 