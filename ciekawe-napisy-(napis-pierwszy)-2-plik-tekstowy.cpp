#include <iostream> 
#include <conio.h> 
#include <math.h> 
#include <fstream> 
using namespace std; 
/*--== Ciekawe napisy 2 - Plik tekstowy (napis pierwszy) ==-- 
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
  Napisz program który sprawdzi wszystkie napisy 
  pobrane z pliku tekstowego i wyświetli tylko te 
  napisy, które są napisami pierwszymi. 
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
  cout << "--== Ciekawe napisy 2 - Plik tekstowy (napis pierwszy) ==--\n"; 
  cout << "                                               Konsola\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = ""; 
    int SumaKodZnaku = 0; 
    long int Licznik = 0; 
  //Pobranie danych z pliku tekstowego. 
    fstream PlikDane("napisy.txt", ios::in); 
    if(PlikDane != NULL) { 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { 
        SumaKodZnaku = 0; 
        for(int I = 0; I < Linia.length(); I++) { 
          SumaKodZnaku += (int)Linia[I]; 
        } 
          if(CzyLiczbaPierwsza(SumaKodZnaku) == 0) { 
            Licznik++; 
            if(Licznik == 1) { cout << "\nLista napisow pierwszych:\n"; } 
            cout << "\n"; cout.width(9); cout.fill(' '); 
            cout << Licznik << ": \"" << Linia << "\"."; 
          } 
      } 
      Linia = ""; 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
  //Zatrzymaj program do czasu naciśnięcia dowolnego klawisza. 
    cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
} 