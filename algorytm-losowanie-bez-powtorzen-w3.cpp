#include <iostream> //Standardowa biblioteka obs³uguj¹ca operacje wejœcia i wyjœcia (ang. Input/Output, w skrócie I/O). 
#include <ctime>    //Standardowa biblioteka udostêpniaj¹ca funkcje zwi¹zane z obs³ug¹ czasu. 
#include <cstdlib>  //Biblioteka zawieraj¹ca funkcje ogólne (m.in. funkcje do uruchomienia generatora liczb pseudolosowych). 
using namespace std; 
/*--== Losowanie bez powtórzeñ ==-- 
  Copyright (c)by Jan T. Biernat*/ 
int main() { 
  cout << "--== Losowanie bez powtorzen - w3 ==--\n"; 
  //Zainicjowanie sta³ych w programie. 
    const short int IloscElementow=7; 
  //Zadeklarowanie zmiennych. 
    short int Przelacznik=0, Zakres=0; 
    int Liczby[IloscElementow]; 
  //Pobranie od u¿ytkownika liczby okreœlaj¹cej zakres z jakiego bêd¹ losowane liczby. 
    cout << "\nPodaj zakres losowanych liczb: "; 
    cin >> Zakres; 
    if(Zakres < IloscElementow) { 
      Zakres = 0; Zakres = IloscElementow; 
      cout << "\nBLAD -?Podano za maly zakres." 
           << "\n       Wprowadzam najmniejszy domyslny zakres, tzn. liczbe "<< IloscElementow << ".\n"; 
    } 
  //Losowanie liczb bez powtórzeñ z podanego zakresu (zakres jest podany w sta³ych). 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    do { 
      Przelacznik=0; 
      //Wylosowanie liczb z podanego zakresu i przypisanie ich do tablicy. 
        for(int I=0; I < IloscElementow; I++) { 
          Liczby[I] = rand()%Zakres; 
        }   
      /*Sprawdzenie, czy liczby siê powtarzaj¹. 
        Je¿eli liczby siê powtarzaj¹, to zwiêksz wartoœæ zmiennej "Prze³¹cznik" 
        o 1 i zatrzymaj dzia³anie zagnie¿d¿onych pêtli FOR.*/ 
        for(int A=0; A < IloscElementow; A++) { 
          for(int B=A+1; B < IloscElementow; B++) { 
            if(Liczby[A] == Liczby[B]) { Przelacznik++; break; } 
          } 
        } 
    } while(Przelacznik > 0); 
  //Wyœwietl wylosowane liczby. 
    cout<<"\nWylosowane liczby to: "; 
    for(int I=0; I < IloscElementow; I++) { 
      cout << Liczby[I]; 
      if(I < IloscElementow-1) { cout << ", "; } 
    } 
    cout<<".\n"; 
} 