#include <iostream> //Standardowa biblioteka obs³uguj¹ca operacje wejœcia i wyjœcia (ang. Input/Output, w skrócie I/O). 
#include <ctime>    //Standardowa biblioteka udostêpniaj¹ca funkcje zwi¹zane z obs³ug¹ czasu. 
#include <cstdlib>  //Biblioteka zawieraj¹ca funkcje ogólne (m.in. funkcje do uruchomienia generatora liczb pseudolosowych). 
using namespace std; 
/*--== Losowanie bez powtórzeñ ==-- 
  Copyright (c)by Jan T. Biernat*/ 
int main() { 
  cout << "--== Losowanie bez powtorzen ==--\n"; 
  //Zainicjowanie sta³ych w programie. 
    const short int Zakres=5; 
  //Zadeklarowanie zmiennych. 
    short int Przelacznik=0; 
    int Liczby[5]; //Zadeklarowanie tablicy 5 elementowej tego samego typu. 
  //Losowanie piêciu liczb bez powtórzeñ z podanego zakresu (zakres jest podany w sta³ych). 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    do { 
      Przelacznik=0; 
      //Wylosowanie liczb z podanego zakresu i przypisanie ich do tablicy. 
        Liczby[0] = rand()%Zakres; 
        Liczby[1] = rand()%Zakres; 
        Liczby[2] = rand()%Zakres; 
        Liczby[3] = rand()%Zakres; 
        Liczby[4] = rand()%Zakres; 
      /*Sprawdzenie, czy liczby siê powtarzaj¹. 
        Je¿eli liczby siê powtarzaj¹, to zwiêksz wartoœæ zmiennej "Prze³¹cznik" 
        o 1 i zatrzymaj dzia³anie zagnie¿d¿onych pêtli FOR.*/ 
        for(int A=0; A < 5; A++) { 
          for(int B=A+1; B < 5; B++) { 
            if(Liczby[A] == Liczby[B]) { Przelacznik++; break; } 
          } 
        } 
    } while(Przelacznik > 0); 
  //Wyœwietl wylosowane liczby. 
    cout<<"\nWylosowane liczby to: "; 
    for(int I=0; I < 5; I++) { 
      cout << Liczby[I]; 
      if(I < 4) { cout << ", "; } 
    } 
    cout<<".\n"; 
} 