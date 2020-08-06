#include <iostream> 
#include <conio.h> 
#include <fstream> 
#include <cstdlib> 
#include <math.h> 
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
float StrToFloat(string Str = "") { 
  //StrToFloat - Konwersja liczby taktowanej jako tekst na typ FLOAT. 
  string Cyfry = ""; 
  if(Str != "") { 
    for(int I = 0; I < Str.length(); I++) { 
      if(((int)Str[I] > 47) && ((int)Str[I] < 58) 
      || ((int)Str[I] == 46)) { Cyfry += Str[I]; } //"Cyfry += Str[I];" = "Cyfry = Cyfry+Str[I];". 
    } 
    if(Cyfry != "") { return atof(Cyfry.c_str()); } 
    else { return 0; } 
  } else { return 0; } 
} 
//= 
string Autokorekta(string Str = "") { 
  //Autokorekta - Uzupełnij błędnie napisaną ocenę. 
    string Wynik = ""; 
    if(Str != "") { 
      if(Str.length() == 1) { Wynik = Str+".0"; } 
      else if(Str.length() == 2) { Wynik = Str+"0"; } 
           else { Wynik = Str; } 
    } 
  return Wynik; 
} 
//Blok główny(startowy). 
int main(int argc, char *argv[]) { 
  cout <<"--== Statystyka ocen ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  cout <<"UWAGA: Program odczytuje tylko pliki tekstowe!\n\n\n"; 
  //Deklaracja stałych. 
    const string S_Koniec = "koniec"; 
    const short int TabOcenIlosc = 10; 
    string TabOcen[TabOcenIlosc] = { "1.0", "2.0", "2.5", "3.0", "3.5", 
                                     "4.0", "4.5", "5.0", "5.5", "6.0" }; 
    const char ZnakSeparatora = ';'; 
  //Deklaracja zmiennych. 
    string Dane = "", Tym = ""; 
    int TabOcenLicz[TabOcenIlosc]; 
    short int CzyPlik = 0; 
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
          if(Dane != "") { 
            Dane = Autokorekta(Dane); 
            for(int I = 0; I < TabOcenIlosc; I++) { 
              if(TabOcen[I] == Dane) { 
                fOcena = 0; fOcena = StrToFloat(Dane); 
                OcenaLicznik++; 
                fOcenaSum += fOcena; 
                TabOcenLicz[I]++; 
              } 
            } 
          } 
        CzyPlik++; 
      } 
    } 
    PlikDane.close(); 
  //Pobranie danych z pliku tekstowego z wiersza 1. 
    if(CzyPlik == 1) { 
      Dane = Dane+ZnakSeparatora; 
      for(int I = 0; I < Dane.length(); I++) { 
        if(Dane[I] == ZnakSeparatora) { 
          if(Tym != "") { 
            Tym = Autokorekta(Tym); 
            for(int I = 0; I < TabOcenIlosc; I++) { 
              if(TabOcen[I] == Tym) { 
                fOcena = 0; fOcena = StrToFloat(Tym); 
                OcenaLicznik++; 
                fOcenaSum += fOcena; 
                TabOcenLicz[I]++; 
              } 
            } 
          } 
          Tym = ""; 
        } else { Tym += Dane[I]; } 
      } 
    } 
  //Pobierz dane z klawiatury. 
    if(CzyPlik == 0) { 
      cout << "\nPodaj oceny:\n"; 
      do { 
        Licznik++; 
        cout.width(3); cout << Licznik << ": "; 
        Dane = ""; getline(cin, Dane); 
        if((Dane != "") || (Dane != S_Koniec)) { 
          Dane = Autokorekta(Dane); 
          for(int I = 0; I < TabOcenIlosc; I++) { 
            if(TabOcen[I] == Dane) { 
              fOcena = 0; fOcena = StrToFloat(Dane); 
              OcenaLicznik++; 
              fOcenaSum += fOcena; 
              TabOcenLicz[I]++; 
            } 
          } 
        } 
      } while(Dane != S_Koniec); 
    } 
  //Raport - Statystyka ocen. 
    if(OcenaLicznik > 0) { 
      cout << "\n\nRaport:"; 
      cout << "\nSuma ocen   : " << fOcenaSum; 
      cout << "\nPodano ocen : " << OcenaLicznik; 
      cout << "\nSrednia ocen: " << (fOcenaSum / OcenaLicznik); 
      cout << "\n\nIlosc poszczegolnych ocen:"; 
      for(int I = 0; I < TabOcenIlosc; I++) { 
        cout << "\n" << TabOcen[I] << ": "; 
        cout.width(3); 
        cout << TabOcenLicz[I] << "(" 
             << round(TabOcenLicz[I]*100/OcenaLicznik) << "%)"; 
      } 
      cout << "\n"; 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz ..."; getch(); 
  cout << "\n"; 
} 