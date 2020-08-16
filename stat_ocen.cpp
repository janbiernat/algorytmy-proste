#include <iostream> 
#include <conio.h> 
#include <fstream> 
#include <cstdlib> 
/*--== Statystyka ocen ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program do obliczania średniej arytmetycznej podanych ocen cząstkowych. 
  Program musi spełniać następujące kryteria: 
  > Program do obliczeń ma przyjmować tylko liczby z przedziału od 1 do 6. 
  > Po uruchomieniu użytkownik może od razu wprowadzać oceny z klawiatury. 
  > Po zakończeniu wprowadzania ocen program ma wyświetlić raport zawierający: 
    - Ilość podanych ocen. 
    - Sumę podanych ocen. 
    - Średnią podanych ocen. 
    - Procentowy udział poszczególnych ocen w stosunku do wszystkich podanych ocen. 
  Poniżej przedstawiono przykładowy raport: 
  Raport: 
  Suma podanych ocen wynosi   : 30,5 
  Podanych ocen jest          : 12 
  Średnia podanych ocen wynosi: 2,54 
  Ilość poszczególnych ocen: 
    5.0: 2 (16,67%) 
    4.5: 1 (8,33%) 
    4.0: 2 (16,67%) 
    3.5: 1 (8,33%) 
    3.0: 2 (16,67%) 
    2.0: 3 (25%) 
    1.0: 1 (8,33%) 
*/ 
using namespace std; 
int main(int argc, char *argv[]) { 
  cout <<"--== Statystyka ocen ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  cout <<"UWAGA: Program odczytuje tylko pliki tekstowe!\n\n\n"; 
  //Deklaracja stałych. 
    const string Koniec = "koniec"; 
    const short int TabOcenIlosc = 10; 
    string TabOcen[TabOcenIlosc] = { "1", "2", "2.5", "3", "3.5", "4", "4.5", "5", "5.5", "6" }; 
  //Deklaracja zmiennych. 
    string Dane = "", Tym = ""; 
    int TabOcenLicz[TabOcenIlosc]; 
    int Licznik = 0, OcenaLicznik = 0; 
    float fOcena = 0, fOcenaSum = 0; 
  //Wyzerowanie tablic. 
    for(int I = 0; I < TabOcenIlosc; I++) { TabOcenLicz[I] = 0; } 
  //Odczyt pliku tekstowego. 
    fstream PlikDane(argv[1], ios::in); 
    if(PlikDane != NULL) { 
      cout << "Odczytany plik to: \"" << argv[1] << "\"."; 
      while(getline(PlikDane, Dane)) { 
        //Pobranie danych z pliku tekstowego. 
          Tym = ""; 
          for(int I = 0; I < Dane.length()+1; I++) { 
            if((Dane[I] == ';') || (Dane[I] == ' ') 
            || (Dane.length() == I)) { 
              if(Tym != "") { 
                for(int O = 0; O < TabOcenIlosc; O++) { 
                  if(TabOcen[O] == Tym) { 
                    fOcena = 0; fOcena = atof(Tym.c_str()); 
                    OcenaLicznik++; 
                    fOcenaSum += fOcena; 
                    TabOcenLicz[O]++; 
                    break; 
                  } 
                } 
              } 
              Tym = ""; 
            } else { Tym += Dane[I]; } 
          } 
      } 
    } else { 
             //Pobierz dane z klawiatury. 
               cout << "\nPodaj oceny:\n"; 
               do { 
                    Licznik++; 
                    cout.width(4); cout << Licznik << ": "; 
                    Dane = ""; getline(cin, Dane); 
                    if((Dane != "") || (Dane != Koniec)) { 
                      for(int I = 0; I < TabOcenIlosc; I++) { 
                        if(TabOcen[I] == Dane) { 
                          fOcena = 0; fOcena = atof(Dane.c_str()); 
                          OcenaLicznik++; 
                          fOcenaSum += fOcena; 
                          TabOcenLicz[I]++; 
                          break; 
                        } 
                      } 
                    } 
               } while(Dane != Koniec); 
           } 
    PlikDane.close(); 
  //Raport - Statystyka ocen. 
    if(OcenaLicznik > 0) { 
      cout << "\n\nRaport:"; 
      cout << "\nSuma ocen   : " << fOcenaSum; 
      cout << "\nPodano ocen : " << OcenaLicznik; 
      cout << "\nSrednia ocen: " << (fOcenaSum / OcenaLicznik); 
      cout << "\n\nIlosc poszczegolnych ocen:"; 
      for(int I = 0; I < TabOcenIlosc; I++) { 
        cout << "\n"; cout.width(3); cout << TabOcen[I] << ": "; 
        cout.width(3); cout << TabOcenLicz[I] << "(" 
                            << (int)(TabOcenLicz[I]*100/OcenaLicznik) << "%)"; 
      } 
      cout << "\n"; 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
  cout << "\n"; 
} 