#include <iostream> 
#include <conio.h> 
#include <math.h> 
using namespace std; 
/*--== Ciekawe napisy (napis pierwszy) ==-- 
                               Konsola 
  Copyright (c)by Jan T. Biernat 
  = 
  Napis pierwszy to taki napis, w którym 
  suma kodów ASCII jest liczbą pierwszą. 
  Przykładowo: 
    Suma kodów ASCII w napisie BALAST 
    wynosi 439 i jest liczbą pierwszą, 
    co oznacza, że napis BALAST jest 
    napisem pierwszym. 
  Przykładowe napisy pierwsze: 
    balast, pralnia, rzeka, katalog, 
    komputer, procesor, system, dysk. 
  = 
  UWAGA: Wielkość liter ma znaczenie. 
         Podane wyrazy jako przykłady, to wyrazy 
         pierwsze pod warunkiem że są pisane 
         mały literami. 
  = 
  Napisz program który sprawdzi, czy podany 
  wyraz jest wyrazem pierwszym. 
*/ 
short int CzyLiczbaPierwsza(int Liczba = 0) { 
  short int CzyNie = 0; 
  if(Liczba < 2) { Liczba = 2; cout << "Wartosc domyslna 2."; } 
  for(int L = 2; L <= sqrt(Liczba); L++) { 
    if(Liczba % L == 0) { CzyNie = 1; break; } 
  } 
  return CzyNie; 
} 
//Blok główny/startowy. 
int main() { 
  cout << "--== Ciekawe napisy (napis pierwszy) ==--\n"; 
  cout << "                             Konsola\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Tekst = ""; 
    int SumaKodZnaku = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Tekst: "; 
    getline(cin, Tekst); 
    if(Tekst != "") { 
      cout << "\n"; 
      for(int I = 0; I < Tekst.length(); I++) { 
        if(I > 0) { cout << " + "; } 
        cout << (int)Tekst[I] << "(" << Tekst[I] << ")"; 
        SumaKodZnaku += (int)Tekst[I]; 
      } 
      cout << " = " << SumaKodZnaku << "\n"; 
      if(CzyLiczbaPierwsza(SumaKodZnaku) == 0) { 
        cout << "Wyraz \"" << Tekst << "\" jest wyrazem pierwszym."; 
      } 
      //Zatrzymaj program do czasu naciśnięcia dowolnego klawisza. 
        cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
    } 
} 