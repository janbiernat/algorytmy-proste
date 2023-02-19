#include <iostream>
#include <conio.h>
using namespace std;
/*--== Bez walki ==--
  Copyright (c)by Jan T. Biernat
  =
  Zadanie:
  Bitek został ostatnio pasjonatem rynku finansowego.
  Codziennie jest świadkiem starć wielkich funduszy inwestycyjnych,
  superszybkich algorytmów oraz graczy indywidualnych.
  Jednak na samych obserwacjach nie kończy się jego rola!
  Bitek aktywnie działa w zakresie opracowania strategii,
  która raz na zawsze pozwoli mu na zwycięstwo z innymi
  uczestnikami rynku. W poszukiwaniu inspiracji natknął się
  ostatnio na dzieło "Sztuka wojny" starożytnego myśliciela Sun Tzu.
  Fragment książki stanowi następująco: Osiągnąć sto zwycięstw
  w stu bitwach nie jest szczytem umiejętności. Szczytem umiejętności
  jest pokonanie przeciwnika bez walki.
  Naturalny wniosek z powyższej sentencji jest taki, że największym
  sukcesem w rywalizacji z pozostałymi uczestnikami giełdy
  będzie pokazanie im, ile można było zarobić po prostu w jednej
  transakcji. Niech zobaczą! jak daleko im do ideału!
  W tym celu Bitek trzyma historię notowań wybranej przez siebie spółki
  z ostatnich n dni i chciałby wybrać dwa miejsca na całym wykresie:
  moment kupna oraz moment sprzedaży które pozwalały zarobić możliwie
  najwięcej w POJEDYNCZEJ TRANSAKCJI. Oczywiście moment kupna nie może
  znajdować się później niż moment sprzedaży.
  Niestety nie jest aż tak dobry w analizie danych jak Twoje algorytmy,
  zatem poprosił Cię o pomoc. Do dzieła!
  Wejście:
    Pierwsza linia wejścia składa się z jednej liczby naturalnej
      n (2 <= n  <= 10^6 [10^6 = 1 000 000]) oznaczającej liczbę dni.
    W drugiej linii znajduje się n liczb naturalnych w zakresie
      od 1 do 10^14 (10^14 = 100 000 000 000 000) oznaczające ceny akcji
      w kolejnych dniach.
  Wyjście:
    Twój program powinien wypisać jedną liczbę - maksymalny zysk przyjmując,
      że tylko raz możemy kupić i tylko raz możemy sprzedać akcje w całym okresie.
    Jeżeli nie można osiągnąć zysku większego od zera, Twój program powinien wypisać
      tekst: "Nie ma zysku, to Ci się nie opłaca!".
  =
  Przykład 1:
    Wejście:
      4 dni: 1 dzień, cena 5 tyś.
             2 dzień, cena 2 tyś.
             3 dzień, cena 6 tyś.
             4 dzień, cena 9 tyś.
    Wyjście: zysk 7 tyś.
  =
  Przykład 2:
    Wejście:
      3 dni: 1 dzień, cena 8 tyś.
             2 dzień, cena 8 tyś.
             3 dzień, cena 8 tyś.
    Wyjście: zysk 0 <- Nie ma zysku, to Ci się nie opłaca!.
  =
  Wyjaśnienie:
  Nie mamy możliwości by osiągnąć zysk kiedykolwiek kupując
  a następnie sprzedając akcje.
  Wypisujemy: "Nie ma zysku, to Ci się nie opłaca!".
 */
//Blok główny.
int main() {
  const long IloscDni = 100;
  long Dni = 0;
  long long Cena = 0, Wynik = 0, Zysk = 0;
  long long TDni[IloscDni];
  for(long I = 0; I < IloscDni; I++) { TDni[I] = 0; } //Wpisanie wartości zerowych do tablicy.
  cout << "Podaj ilosc dni: "; cin >> Dni;
  if((Dni > 1) && (Dni < (IloscDni+1))) {
    for(long I = 0; I < Dni; I++) {
      Cena = 0; cout << (I+1) << " dzien, cena: "; cin >> Cena;
      if((Cena < 1) || (Cena > 1000)) { Cena = 1; cout << "  BLAD -?Zla cena akcji! Domyslna cena to 1.\n"; }
      TDni[I] = Cena;
    }
    //Wyszukanie najlepszego zysku.
      for(long A = Dni-1; A > 0; A--) {
        for(long B = A-1; B > -1; B--) {
          Wynik = 0; Wynik = TDni[A]-TDni[B];
          if(Wynik > Zysk) { Zysk = Wynik; }
        }
      }
      cout << "\nZysk: " << Zysk;
      if(Zysk < 1) { cout << " <-- Nie ma zysku, to Ci sie nie oplaca!"; }
  } else { cout << "BLAD -?Bledna ilosc dni!"; }
  //Czekaj na naciśnięcie klawisza przez użytkownika.
    cout << "\n\n\nNacisnij dowolny klawisz ..."; getch(); 
}