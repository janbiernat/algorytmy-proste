#include <iostream> 
#include <conio.h> 
#include <fstream> 
#include <windows.h> 
using namespace std; 
/*--== Readme - konsola ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program do odczytywania 
  plików tekstowych z małą ilością tekstu. 
*/ 
int main(int argc, char *argv[]) { 
  const int maxIlosc = 32767; 
  string Tablica[maxIlosc]; 
  string Linia = ""; 
  int Licznik = 0, KodKlaw = 0, LiniaNr = 0; 
  //Wyczyść tablicę. 
    for(int I = 0; I < maxIlosc; I++) { Tablica[I] = ""; } 
  //Odczytanie zawartości pliku tekstowego. 
    fstream PlikDane(argv[1], ios::in); 
    if(PlikDane != NULL) { 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { 
        Tablica[Licznik] = Linia; 
        Licznik++; 
        if(Licznik > maxIlosc-1) { break; } 
      } 
      //Wyświetl dane na ekranie. 
        do { 
          system("cls"); 
          cout << "Readme (c)by Jan T. Biernat\n"; 
          cout << "Nazwa pliku: " << argv[1] << "\n"; 
          cout.width(80); cout.fill('-'); 
          for(int I = 0; I < 22; I++) { 
            cout << "\n"; cout.width(5); cout.fill(' '); 
            cout << (I+1+LiniaNr) << ": " << Tablica[I+LiniaNr].substr(0, 71); 
          } 
            //Kod klawiszy. 
              KodKlaw = 0; 
              KodKlaw = getch(); 
              if((KodKlaw == 0) || (KodKlaw == 224)) { 
                KodKlaw = 0; 
                KodKlaw = getch()+224; 
              } 
                if(KodKlaw == 296) { 
                  //Strzałka w góra. 
                    LiniaNr--; 
                    if(LiniaNr < 0) { LiniaNr = 0; } 
                } else if(KodKlaw == 304) { 
                         //Strzałka w dół. 
                           LiniaNr++; 
                           if(LiniaNr > Licznik-22) { LiniaNr = Licznik-22; } 
                       } 
      } while(KodKlaw != 27); //Klawisz ESC kończy działanie programu. 
    } else { cout << "\nBLAD -?Brak pliku lub plik o podanej nazwie nie istnieje!\n\n"; } 
    PlikDane.close(); 
  cout << "\n"; 
} 