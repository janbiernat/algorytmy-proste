#include <iostream> 
#include <conio.h> 
/*--== Tablice jednowymiarowe - Min i Max ==-- 
  Copyright(c)by Jan T. Biernat*/ 
using namespace std; 
int TablicaMin(int Tablica[], int Ilosc = 0) { 
  //TablicaMin - Znajduje najmniejszą liczbę w tablicy. 
    int LiczbaMin = 0; 
    if(Ilosc > 0) { 
      LiczbaMin = Tablica[0]; //Ustawienie domyślnej najmniejszej liczby. 
      for(int I = 0; I < Ilosc; I++) { 
        if(LiczbaMin > Tablica[I]) { LiczbaMin = Tablica[I]; } 
      } 
    } else { cout << "BLAD -?"; } 
    return LiczbaMin; 
} 
int TablicaMax(int Tablica[], int Ilosc = 0) { 
  //TablicaMax - Znajduje największą liczbę w tablicy. 
    int LiczbaMax = 0; 
    if(Ilosc > 0) { 
      LiczbaMax = Tablica[0]; //Ustawienie domyślnej największej liczby. 
      for(int I = 0; I < Ilosc; I++) { 
        if(LiczbaMax < Tablica[I]) { LiczbaMax = Tablica[I]; } 
      } 
    } else { cout << "BLAD -?"; } 
    return LiczbaMax; 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Tablice jednowymiarowe - Min i Max ==--\n"; 
  cout <<"Copyright(c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja stałych. 
    const int IloscElementow = 9; 
  //Deklaracja zmiennych. 
    int Tablica[IloscElementow] = { -5, -9, -2, 0, 1, 10, 3, 5, 7 }; 
  //Wyświetl zawartość tablicy. 
    for(int I = 0; I < IloscElementow; I++) { 
      if(I > 0) { cout << ", "; } 
      cout << Tablica[I]; 
    } 
  //Wyświetl zawartość tablicy. 
    cout << "\n\nLiczba najmniejsza to = " << TablicaMin(Tablica, IloscElementow); 
    cout << "\nLiczba najwieksza to  = " << TablicaMax(Tablica, IloscElementow); 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 