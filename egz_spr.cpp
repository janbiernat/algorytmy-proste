#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
/*--== (egz_spr) Egzamin zawodowy teoretyczny 2 - Sprawdzenie odpowiedzi ==--
  Copyright (c)by Jan T. Biernat
 */
//------------------------------------------------------------------------------
string ZNAKI_na_znaki(string Str = "") {
//ZNAKI_na_znaki - Funkcja zamienia wszystkie znaki na małe.
  string T = "";
  for(int I = 0; I < Str.length(); I++) {
    if(((int)Str[I] > 64) && ((int)Str[I] < 91)) { T = T+char((int)Str[I]+32); }
    else { T += Str[I]; }
  }
  return T;
}
//------------------------------------------------------------------------------
string znaki_na_ZNAKI(string Str = "") {
//znaki_na_ZNAKI - Funkcja zamienia wszystkie znaki na duże.
  string T = "";
  for(int I = 0; I < Str.length(); I++) {
    if(((int)Str[I] > 96) && ((int)Str[I] < 123)) { T = T+char((int)Str[I]-32); }
    else { T += Str[I]; }
  }
  return T;
}
//------------------------------------------------------------------------------
string ZnakiTylkoABCD(string Str = "") {
//ZnakiTylkoABCD - Funkcja zwraca tylko duże znaki ABCD.
  string Znak = "";
  //Sprawdź, czy znaki są prawidłowe.
    for(int I = 0; I < Str.length(); I++) {
      Znak = "";
      if((Str[I] == 'A') || (Str[I] == 'B')
      || (Str[I] == 'C') || (Str[I] == 'D')) {
        Znak = Str[I]; break;
      }
  }
  return Znak;
}
//------------------------------------------------------------------------------
string PobierzSciezke(string Str = "") {
//PobierzSciezke - Funkcja zwraca ścieżkę dostępu do pliku.
  int I = 0;
  if(Str != "") {
    Str = ZNAKI_na_znaki(Str);
    for(I = Str.length(); I > -1; I--) {
      if(Str[I] == '\\') { break; }
    }
    return Str.substr(0, I+1);
  } else { return "-?"; }
}
//------------------------------------------------------------------------------
//Blok główny(startowy).
int main(int argc, char *argv[]) {
  cout << "--== (egz_spr) Egzamin zawodowy teoretyczny 2 - Sprawdzenie odpowiedzi [2024-10-01] ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n\n\n";
  cout << "UWAGA: Program pracuje TYLKO na plikach tekstowych!\n\n"
       << "Program umozliwia sprawdzenie poprawnosci podanych odpowiedzi \nw oparciu o odpowiedzi wzorcowe.\n"
       << "Dotyczy to tylko testu jednokrotnego wyboru (tzn. testu, w ktorym jest\n"
       << "tylko 1 poprawna odpowiedz z 4 odpowiedzi proponowanych).\n\n";
  //
  //Deklaracja stałych.
    const int PytaniaIlosc = 40;
  //Deklaracja zmiennych.
    string PlikWzorcowy = "", PlikSpr = "", Wiersz = "";
    string TablicaW[PytaniaIlosc], TablicaSpr[PytaniaIlosc];
    int LicznikW = 0, LicznikSpr = 0;
    int OdpDobrych = 0, OdpDobryProc = 0;
  //
  //Wyczyść tablice.
    for(int I = 0; I < PytaniaIlosc; I++) {
      TablicaW[I] = "";
      TablicaSpr[I] = "";
    }
  //
  //Wczytaj plik do sprawdzenia.
    fstream PlikDaneSpr(argv[1], ios::in);
    if(PlikDaneSpr != NULL) {
      PlikSpr = ZNAKI_na_znaki(argv[1]);
      PlikWzorcowy = PobierzSciezke(PlikSpr)+"wzor.txt";
      cout << "\nOdczytany plik do sprawdzenia: \"" << PlikSpr << "\".";
      Wiersz = "";
      while(getline(PlikDaneSpr, Wiersz)) {
        if(Wiersz != "") {
          if(LicznikW < PytaniaIlosc) {
            TablicaSpr[LicznikW] = ZnakiTylkoABCD(znaki_na_ZNAKI(Wiersz));
            LicznikW++;
          } else { break; }
        }
      }
      //
      //Wczytaj plik (wzorcowy) z prawidłowymi odpowiedziami.
        fstream PlikDaneWzor(PlikWzorcowy.c_str(), ios::in);
        if(PlikDaneWzor != NULL) {
          cout << "\nOdczytany plik wzorcowy: \""<< PlikWzorcowy <<"\".\n";
          Wiersz = "";
          while(getline(PlikDaneWzor, Wiersz)) {
            if(Wiersz != "") {
              if(LicznikSpr < PytaniaIlosc) {
                TablicaW[LicznikSpr] = ZnakiTylkoABCD(znaki_na_ZNAKI(Wiersz));
                LicznikSpr++;
              } else { break; }
            }
          }
        } else { cout << "\nBLAD -?Brak pliku wzorcowego o nazwie \"WZOR.TXT\"!"; }
        PlikDaneWzor.close();
    } else { cout << "\nBLAD -?Brak pliku do sprawdzenia!\n\n\n";
             cout << "Instrukcja obslugi:\n"
                  << "Schemat odpowiedzi na podstawie ktorych bedzie przeprowadzona weryfikacja, nalezy\n"
                  << "umiescic w pliku tekstowym pod nazwa \"wzor.txt\". Nastepnie plik z odpowiedziami\n"
                  << "do sprawdzenia nalezy wywolac razem z programem. Na przyklad: \"egz_spr.exe spr_t1.txt\".\n"
                  << "Po wywolaniu programu EGZ_SPR.EXE z parametrem SPR_T1.TXT, nastapi wczytanie zawartosci\n"
                  << "pliku \"wzor.txt\" oraz pliku \"spr_t1.txt\".\n"
                  << "Zarowno plik \"wzor.txt\", jak i plik \"spr_t1.txt\" powinien znajdowac sie \nw tym samym katalogu/folderze.\n"
                  << "Potem odpowiedzi z pliku \"spr_t1.txt\" zostana porownane z odpowiedziami\n"
                  << "z pliku \"wzor.txt\" i na koncu zostanie wyswietlona informacja okreslajaca\n"
                  << "w procentach ilosc poprawnych odpowiedzi.";
           }
    PlikDaneSpr.close();
  //
  //Wyświetl nr pytań i odpowiedzi.
    if((LicznikW > 0) && (LicznikSpr > 0)) {
      cout << "\n\nPorownanie odpowiedzi:\n";
      for(int I = 0; I < PytaniaIlosc; I++) {
        if(TablicaW[I] != "") {
          cout << "\n ";
          cout.width(2); cout.fill(' ');
          cout << (I+1) << ". " << TablicaW[I] << " = " << TablicaSpr[I];
          if(TablicaW[I] == TablicaSpr[I]) { OdpDobrych++; } else { cout << " <- Zle!"; }
        }
      }
      //
      //Ile jest poprawnych odpowiedzi?
        OdpDobryProc = 0; OdpDobryProc = ((OdpDobrych*100)/PytaniaIlosc);
        cout << "\n\nPytan jest     : " << PytaniaIlosc;
        cout << "\nPoprawnych jest: " << OdpDobrych << " (" << (OdpDobryProc) << "%)";
        cout << "\nBlednych jest  : " << (PytaniaIlosc-OdpDobrych);
    }
  //
  //Naciśnij dowolny klawisz. 
    cout << "\n\n\nNacisnij dowolny klawisz ..."; getch();
cout << "\n";
}