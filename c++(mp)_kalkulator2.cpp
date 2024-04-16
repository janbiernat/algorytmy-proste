#include <iostream>
/*--== CALC2 - Kalkulator 2 ==--
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Napisz program, który działa jak prosty kalkulator
  z pamięcią obsługujący pięć operacji: dodawanie,
  odejmowanie, mnożenie, dzielenie i obliczanie reszty
  z dzielenia liczb całkowitych.
  Przyjmujemy, że nasz kalkulator ma w pamięci 10 rejestrów
  o numerach 0 - 9 oraz że wszystkie rejestry zawierają
  na początku zera.
  Wejście:
      Na wejście programu podana zostanie pewna nieokreślona
      liczba zestawów danych. Zestawy składają się z jednoznakowego
      symbolu operacji do wykonania (+, -, *, /, % i z)
      oraz następujących po nim dwóch liczb całkowitych.
  Wyjście:
      Na wyjściu programu ma się pojawić ciąg liczb będących
      rezultatem wykonania pojawiających się na wejściu poleceń.
      Poszczególne liczby należy rozdzielić znakami nowej linii.
      To, co należy wykonać, zależy od symbolu operacji.
      Symbole +, -, *, / i % nakazują wykonanie odpowiednio
      dodawania, odejmowania, mnożenia, dzielenia i obliczenia
      reszty z dzielenia liczb, które są przechowywane
      w rejestrach o podanych numerach. Symbol z nakazuje
      zapis wartości podanej jako drugi argument w rejestrze
      o numerze podanym jako pierwszy argument. (Po wykonaniu
      tej operacji nie trzeba nic wyświetlać).
  UWAGA!
      Można założyć, że dane wejściowe nie zawierają polecenia
      dzielenia przez 0.
  Przykład:
     Wejście:
        z 3 6
        z 1 89
        z 2 60
        z 0 11
        + 0 1
        - 1 2
        * 2 3
        / 3 0
        % 3 1
     Wyjście:
        100
        29
        360
        0
*/
using namespace std;
int main() {
  cout << "--== CALC2 - Kalkulator 2 ==--\n";
  //Deklaracja stałych.
    const char Symbol = 'k';
    const int Ilosc = 10;
  //Deklaracja zmiennych.
    char Znak;
    int NrR = 0, Liczba = 0, Licznik = 0;
    int R[Ilosc], Ra[Ilosc], Rb[Ilosc];
    char Polecenie[Ilosc];
  //Zerowanie zmiennych.
    for(int I = 0; I < Ilosc; I++) {
      R[I] = 0; Ra[I] = 0; Rb[I] = 0;
    }
  //Wykonaj zadanie.
    do {
      cout << "\n>"; cin >> Znak;
      if(Znak != Symbol) {
        if(Znak == 'z') {
          NrR = 0; Liczba = 0;
          cin >> NrR; if(NrR < 0) { NrR = 0; }
          cin >> Liczba;
          R[NrR] = Liczba;
        } else if((Znak == '+') || (Znak == '-')
                ||(Znak == '*') ||(Znak == '/')
                ||(Znak == '%')) {
                  Polecenie[Licznik] = Znak;
                  cin >> Liczba;
                  Ra[Licznik] = Liczba;
                  cin >> Liczba;
                  Rb[Licznik] = Liczba;
                  Licznik++;
               }
      }
    } while(Znak != Symbol);
  //
  //Wykonaj obliczenia.
    cout << "\n\nObliczenia:\n";
    for(int I = 0; I < Licznik; I++) {
      if(Polecenie[I] == '+') {
        cout << R[Ra[I]] << " " << Polecenie[I] << " " << R[Rb[I]] << " = " << (R[Ra[I]] + R[Rb[I]]);
      } else if(Polecenie[I] == '-') {
               cout << R[Ra[I]] << " " << Polecenie[I] << " " << R[Rb[I]] << " = " << (R[Ra[I]] - R[Rb[I]]);
             } else if(Polecenie[I] == '*') {
                      cout << R[Ra[I]] << " " << Polecenie[I] << " " << R[Rb[I]] << " = " << (R[Ra[I]] * R[Rb[I]]);
                    } else if(Polecenie[I] == '/') {
                             cout << R[Ra[I]] << " " << Polecenie[I] << " " << R[Rb[I]] << " = ";
                             if (R[Rb[I]] != 0) { cout << (R[Ra[I]] / R[Rb[I]]); }
                             else { cout << "BLAD -?Dzielenie przez zero jest niewykonalne!"; }
                           } else if(Polecenie[I] == '%') {
                                    cout << R[Ra[I]] << " " << Polecenie[I] << " " << R[Rb[I]] << " = " << (R[Ra[I]] % R[Rb[I]]);
                                  }
      cout << "\n";
    }
  cout << "\n\n";
}