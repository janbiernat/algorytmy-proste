#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
/*
--== Iloœæ ocen na procenty 2 ==--
Zadanie: Napisz program, który obliczy sumê
         iloœci poszczególnych ocen
         oraz procentowy udzia³
         iloœci poszczególnych ocen.
*/
//
//Blok g³ówny.
int main() {
  cout << "--== Ilosc ocen na procenty 2 ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n \n";
  //
  //Deklaracja zmiennych.
    short LiczOceny = 0;
    int Dane[6];
    int Suma = 0;
    float Procent = 0, SumaProc = 0;
  //
  //Wpisanie do tablicy wartoœci zerowych.
    for(int I = 0; I < 6; I++) { Dane[I] = 0; }
  //
  //Pobranie danych liczbowych od u¿ytkownika i zapisanie ich do tablicy.
    cout << "\nPodaj ilosc poszczegolnych ocen: \n";
    for(int I = 0; I < 6; I++) {
      cout << (I+1) << " jest: ";
      cin >> Dane[I];
      if(Dane[I] < 1) { Dane[I] = 0; }
      if(Dane[I] > 999) { Dane[I] = 999; }
      Suma+= Dane[I];
    }
  //
  //Raport.
    cout << "\n \nRaport: \n";
    cout << "Suma ocen wynosi: " << Suma << "\n \n";
    cout << "Procentowy udzial ocen: \n";
    for(int I = 0; I < 6; I++) {
      cout << "  " << (I+1) << " jest: ";
      cout.width(5); cout.fill(' ');
      cout << Dane[I] << " (";
      cout.width(3); cout.fill(' ');
      Procent = 0; Procent = ((Dane[I]*100.0)/Suma);
      cout << fixed << setprecision(3) << Procent << "%)\n";
      SumaProc+= Procent; //SumaProc = SumaProc+Procent;
    }
    cout << "\nSuma (%): " << SumaProc;
  //
  //Naciœnij dowolny klawisz ...
    cout << "\n \n Nacisnij dowolny klawisz ..."; getch();
cout << "\n \n";
}
/*
Legenda:
Wiersz 3: #include <iomanip>
          Pod³¹czenie biblioteki "iomanip", która zawiera m.in. instrukcje
          s³u¿¹ce do formatowania danych wyjœciowych na ekran (np. setprecision).
          Dziêki tym instrukcj¹ u¿ytkownik mo¿e ustawiæ np. iloœæ liczb po przecinku.
          Instrukcja fixed - wymusza sta³¹ liczbê miejsc po przecinku.
          Instrukcja setprecision(n) - umo¿liwia okreœlenie iloœci miejsc po przecinku.
                                       n - okreœla iloœæ liczb po przecinku.
*/