#include <iostream>
using namespace std;
int main() {
  cout << "--== Rozbicie liczby ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n \n \n";
  //=
  string Opis[10] = { "jednosci"
                    , "dziesiatki"
                    , "setki"
                    , "tysiace"
                    , "dziesiatki tysiecy"
                    , "setki tysiecy"
                    , "miliony"
                    , "dziesiatki milionow"
                    , "setki milionow"
                    , "miliard" };
  int L = 0, A = 0;
  cout << "Liczba: ";
  cin >> L;
  if(L < 1) { L = 1; }
  while(L > 0) {
    if(A > 0) { cout << ", \n"; }
    cout.width(2); cout.fill(' ');
    cout << (A+1) << ") " << (L%10) << " - " << Opis[A];
    L = L / 10;
    A++;
  }
  cout << ".";
cout << "\n \n";
}
/*
Legenda:
Wiersz 1: Podłączenie biblioteki do obsługi ekranu i klawiatury.
Wiersz 2: Dzięki tej konstrukcji, instrukcje takie jak cin i cout
          można używać bez przedrostka "std::".
Wiersz 3: Blok główny od którego rozpoczyna się uruchamianie
          programu. W tym bloku umieszczamy instrukcje
          lub wywołanie poszczególnych funkcji.
          Bez tego bloku uruchomienie programu jest niemożliwe.
Wiersz 4: Wyświetlenie na ekranie tekstu umieszczonego pomiędzy
          cudzysłowami. Do wyświetlenia tekstu na ekranie
          używa się instrukcji cout  (ang. console output
          - konsola wyjściowa).
Wiersz 7: Zadeklarowanie stałej tekstowej tablicowej 10 elementowej
          o nazwie "Opis", która przechowuje dane tekstowe.
          Każdy element tablicy można odczytać podając nr indeksu
          rozpoczynając od 0 (np. 0 - jednosci, 1 - dziesiatki, .., 10 - miliardy).
Wiersz 17: Zadeklarowanie zmiennych liczbowych całkowitych
           o nazwach "L" i "A" oraz przypisanie do nich wartości zerowej.
           Typ integer umożliwia przechowanie liczby z zakresu
           od -32768 do 32767 i zajmuje 2 bajty przy architekturze 16bit.
Wiersz 19: Pobranie danych z klawiatury i przypisanie tych danych
           do zmiennej liczbowej całkowitej "L".
           Do pobrania danych z klawiatury służy instrukcja
           cin (ang. console input - konsola wejściowa).
Wiersz 20: if(L < 1) { L = 1; }
           Sprawdzenie warunku za pomocą instrukcji warunkowej IF.
           Sprawdzenie podlega na stwierdzeniu, czy liczba
           przechowywana w zmiennej liczbowej całkowitej "L"
           jest mniejsza od 1. Jeżeli tak, to wykonaj instrukcje
           umieszczone pomiędzy klamrami (tj. L = 1) zaraz
           za warunkiem (tj. L < 1).
Wiersz 21: while(L > 0)
           Za pomocą pętli WHILE rozbij podaną przez użytkownika liczbę.
           Instrukcje zawarte w pętli WHILE będą tak długo wykonywane, jak
           długo zostanie spełniony warunek umieszczony na początku
           pętli pomiędzy nawiasami zaraz za za wyrazem WHILE (tj. L > 0).
Wiersz 22: if(A > 0) { cout << ", \n"; }
           Sprawdzenie za pomocą warunku IF, czy liczba przechowywana
           w zmiennej liczbowej "A" jest większa od 0 (tj. A > 0).
           Jeżeli tak, to wykonaj instrukcje umieszczone pomiędzy
           klamrami (tj. cout << ", \n";) zaraz za warunkiem (tj. A > 0).
Wiersz 23: Ustawienie formatowanie dla cyfr wyświetlanych na ekranie.
           Pojedyncza cyfra będzie dopełniania znakiem pustym
           (tj. dla "1" - " 1").
Wiersz 24: cout << (A+1) << ") " << (L%10) << " - " << Opis[A];
           Wyświetlenie na ekranie następujących informacji:
           1) Zawartości zmiennej liczbowej całkowitej "A"
              powiększonej o wartość 1 (tj. A+1).
              Ponieważ numeracja zawsze rozpoczyna się od 1.
           2) Wyświetlenie znaku nawiasu.
           3) Wyświetlenie reszty z dzielenia.
              Resztę z dzielenia otrzymujemy prze podzielenie
              liczby przechowywanej w zmiennej liczbowej całkowitej "L"
              przez 10 z wykorzystaniem operatora %.
              Operator % pozwala wyciągnąć liczbę po przecinku
              (np. 5 / 2 = 2.5, natomiast operator % wyciągnie
               tylko liczbę po przecinku. Czyli 0.5).
           4) Wyświetl znak minus.
           5) Wyświetl opis, którego nr indeksu przechowywany
              jest w zmiennej liczbowej całkowitej "A".
              Opis pobierany jest ze stałej tekstowej tablicowej
              10 elementowej.
Wiersz 25: L = L /10
           Dzielenie bez reszty liczby przechowywanej w zmiennej
           liczbowej całkowitej "L" przez 10 (np. 12345 / 10 = 1234).
           Dzielenie bez reszty możliwe jest, gdy pracujemy na typach
           danych liczbowych całkowitych. Dzięki temu warunek
           umieszczony na początku pętli WHILE jest łatwiejszy
           do sprawdzenia.
Wiersz 26: A++
           Zwiększenie o wartość 1 liczby przechowywanej w zmiennej
           liczbowej całkowitej "A". Zwiększenie to zawsze
           będzie o wartość 1 ponieważ zastosowana jest konstrukcja
           ++, która umieszczona jest zaraz za zmienną liczbową "A"
           (tj. A++).
*/