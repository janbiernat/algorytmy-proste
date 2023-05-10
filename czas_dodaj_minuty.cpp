#include <iostream>
#include <cstdlib>
/*--== Czas: Dodawanie minut do podanego czasu ==--
  Copyright (c)by Jan T. Biernat
  =
  Napisz program, który umożliwi dodanie do podanego czasu dowolnej ilości minut.
  Następnie wyświetli ten czas na ekranie. Program musi sprawdzić poprawność
  podanego czasu, przed dodaniem do niego minut.
*/
using namespace std;
void CzasDocelowy(string Czas_GGMM = "", int MinutDodaj = 0) {
//CzasDocelowy - Funkcja wyświetla czas powiększony o zadaną ilość minut.
  string Gt = "", Mt = "";
  short G = 0, M = 0;
  if((Czas_GGMM != "") && (Czas_GGMM.length() == 5)
  && (MinutDodaj > 0)) {
    Gt = Czas_GGMM.substr(0, 2);
    Mt = Czas_GGMM.substr(3, 2);
    G = atoi(Gt.c_str());
    M = atoi(Mt.c_str());
    if(((G > -1) && (G < 24))
    && ((M > -1) && (M < 60))) {
      //=
        cout << "\nCzas poczatkowy : ";
        cout.width(2); cout.fill('0');cout << G << ":";
        cout.width(2); cout.fill('0');cout << M << "\n";
        for(int I = 0; I < MinutDodaj; I++) {
          M++;
          if(M > 59) {
            M = 0; G++;
            if(G > 23) { G = 0; }
          }
        }
        cout << "Czas zakonczenia: ";
        cout.width(2); cout.fill('0');cout << G << ":";
        cout.width(2); cout.fill('0');cout << M;
      //=
    } else { cout << "\nBLAD -?Format czasu jest bledny!"; }
  } else { cout << "\nBLAD -?Brak podanego czasu!"; }
}
//Blok główny (startowy).
int main() {
  cout << "--== Czas: Dodawanie minut do podanego czasu ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n";
  cout << "\n\n";
  //Deklaracja zmiennych.
    string Czas = "", Tym = "";
    int Minut = 0;
  //Pobranie danych od użytkownika
    cout << "Podaj czas: ";
    getline(cin, Czas);
    if(Czas != "") {
      cout << "Ile minut dodac do podanego czasu: ";
      cin >> Minut;
      CzasDocelowy(Czas, Minut);
    } else { cout << "BLAD -?Brak podanego czasu!"; }
  cout << "\n\n";
}