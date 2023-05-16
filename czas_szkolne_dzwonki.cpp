#include <iostream>
#include <cstdlib>
/*--== Czas: Dzwonki w szkole ==--
  Copyright (c)by Jan T. Biernat
  =
  Szkoła Zdolnych Programistów boryka się z niebagatelnym problemem dzwonków.
  Dyrektor szkoły chciałby bardzo, aby początki i końce lekcji ogłaszane były
  automatycznie, bez potrzeby angażowania woźnego. Nic więc dziwnego, że pilnie
  potrzebny jest program, który szybko wygeneruje informacje o godzinach,
  w których dzwonki powinny być uruchamiane.
  Dyrektor już przemyślał problem i wie dokładnie, czego oczekuje
  od nieistniejącego jeszcze programu. Po pierwsze, godzina rozpoczęcia pierwszej
  lekcji może być zmienna i niekoniecznie musi być nią 08:00. Wynika z tego, że
  informację tę program musi przyjąć w postaci pierwszej danej wejściowej.
  Również długości przerw są zmienne, co akurat jest zupełnie zrozumiałe.
  Jedno tylko pozostaje niezmienne – długość lekcji, która zawsze trwa równo 45 minut.
  Polecenie: Napisz program, który generuje informacje o porach, w których
             w szkole powinien rozlegać się dźwięk dzwonka.
  Dane wejściowe: Nieznana z góry liczba wierszy tekstu, zawierających kolejno:
                      1) Ile jest lekcji w ciągu dnia.
                      2) Godzinę rozpoczęcia pierwszej lekcji w formacie HH:MM (np. 08:00).
                      3) Dowolną liczbę długości kolejnych przerw, wyrażonych w minutach.
  Dane wyjściowe: jeden wiersz tekstu, a w nim lista rozdzielonych przecinkami
                  pór uruchomienia dzwonka w formacie HH:MM.
  Przykład:
            Wejście:
                08:00
                  15
                  15
                  15
            Wyjście: 08:00, 08:45, 09:00, 09:45, 10:00, 10:45, 11:00, 11:45.
*/
using namespace std;
bool CzasSpr(short &GG, short &MM, string Czas_GGMM = "") {
//CzasSpr - Funkcja sprawdza poprawność podanego czasu oraz wykonuje konwersję z rozdzieleniem czasu na godziny i minuty.
  string Gt = "", Mt = "";
  short G = 0, M = 0;
  GG = 0; MM = 0;
  if((Czas_GGMM != "") && (Czas_GGMM.length() == 5)) {
    Gt = Czas_GGMM.substr(0, 2);
    Mt = Czas_GGMM.substr(3, 2);
    G = atoi(Gt.c_str());
    M = atoi(Mt.c_str());
    if(((G > -1) && (G < 24))
    && ((M > -1) && (M < 60))) {
      GG = G; MM = M;
      return true;
    } else { cout << "\nBLAD -?Format czasu jest bledny!"; return false; }
  } else { cout << "\nBLAD -?Brak podanego czasu!"; return false; }
}
void CzasDocelowy(short &G, short &M, int MinutDodaj = 0) {
//CzasDocelowy - Funkcja wyświetla czas powiększony o zadaną ilość minut.
  if(((G > -1) && (G < 24)) && ((M > -1) && (M < 60))
  && (MinutDodaj > 0)) {
    for(int I = 0; I < MinutDodaj; I++) {
      M++;
      if(M > 59) {
        M = 0; G++;
        if(G > 23) { G = 0; }
      }
    }
  } else { G = -1; M = -1; }
}
//Blok główny (startowy).
int main() {
  cout << "--== Czas: Dzwonki w szkole ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n";
  cout << "\n\n";
  //Deklaracja stałych.
    const short PrzerwyIlosc = 26;
  //Deklaracja zmiennych.
    string Czas = "";
    short G = 0, M = 0, Lekcji = 0;
    int Przerwy[PrzerwyIlosc];
  //Parametry startowe.
   for(int I = 0; I < PrzerwyIlosc; I++) { Przerwy[I] = 0; }
  //Pobranie danych od użytkownika
    cout << "Podaj czas: ";
    getline(cin, Czas);
    if(CzasSpr(G, M, Czas) == true) {
      cout << "Ilosc lekcji w ciagu dnia: "; cin >> Lekcji;
      if((Lekcji > 0) && (Lekcji < PrzerwyIlosc)) {
        //Określenie długości przerw.
          for(int I = 0; I < (Lekcji-1); I++) {
            cout << "Przerwa po " << (I+1) << " lekcji (w min.): ";
            cin >> Przerwy[I];
          }
        //Generowanie lekcji z przerwami.
          cout << "\n\nGodziny rozpoczecia i zakonczenia lekcji:";
          for(int I = 0; I < Lekcji; I++) {
            if(I > 0) { cout << ","; }
            cout << "\n"; cout.width(2); cout.fill(' '); cout << (I+1) << ") ";
                 cout.width(2); cout.fill('0');cout << G << ":";
                 cout.width(2); cout.fill('0');cout << M << " - ";
                     CzasDocelowy(G, M, 45);
                 cout.width(2); cout.fill('0');cout << G << ":";
                 cout.width(2); cout.fill('0');cout << M;
                 CzasDocelowy(G, M, Przerwy[I]);
          }
          cout << ".";
      } else { cout << "\nINFO -?Lekcji jest za duzo!"; }
    }
  cout << "\n\n";
}