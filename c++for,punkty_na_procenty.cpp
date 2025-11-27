#include <iostream>
#include <conio.h>
/*--== Punkty na procenty (%) ==--
  Copyright (c)by Jan T. Biernat*/
using namespace std;
int main() {
  cout << "--== Punkty na procenty (%) ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n \n \n";
  int Punkty = 0;
  cout << "Maksymalna ilosc punktow: ";
  cin >> Punkty;
  if(Punkty > 0) {
    cout << "\nPunkty |  %\n";
    cout.width(13); cout.fill('-'); cout << "-";
    for(int I = 0; I < Punkty; I++) {
      cout << "\n";
      cout.width(6); cout.fill(' ');
      cout << (I+1) << " | ";
      cout.width(3); cout.fill(' ');
      cout << ((I+1)*100/Punkty);
    }
  }
  cout << "\n\n\nNacisnij dowolny klawisz..."; getch();
}
/*
Legenda:
Wiersz 1: Podłączenie biblioteki do obsługi ekranu i klawiatury.
Wiersz 2: Podłączenie biblioteki (tj. conio - ang. console input/output)
          do bezpośredniej obsługi konsoli w programach napisanych
          w C i C++. Umożliwia wykonywanie specyficznych operacji
          na konsoli, takich jak: czyszczenie ekranu (clrscr()),
          pobieranie pojedynczego znaku z klawiatury bez czekania
          na Enter (getch()), a także manipulowanie pozycją kursora
          na ekranie (gotoxy()).
Wiersz 5: Dzięki tej konstrukcji, instrukcje takie jak cin i cout
          można używać bez przedrostka "std::".
Wiersz 6: Blok główny od którego rozpoczyna się uruchamianie
          programu. W tym bloku umieszczamy instrukcje
          lub wywołanie poszczególnych funkcji.
          Bez tego bloku uruchomienie programu jest niemożliwe.
Wiersz 7: Wyświetlenie na ekranie tekstu umieszczonego pomiędzy
          cudzysłowami. Do wyświetlenia tekstu na ekranie
          używa się instrukcji cout  (ang. console output
          - konsola wyjściowa).
Wiersz 9: int Punkty = 0;
          Zadeklarowanie zmiennej liczbowej całkowitej "Punkty"
          i przypisanie do niej wartości 0.
          Typ integer umożliwia przechowanie liczby z zakresu
          od -32768 do 32767, która zajmuje 2 bajty przy architekturze 16bit.
Wiersz 11: cin >> Punkty;
           Pobranie danych z klawiatury i przypisanie ich
           do zmiennej liczbowej całkowitej "Punkty".
           Do pobrania danych z klawiatury służy instrukcja
           cin (ang. console input - konsola wejściowa).
Wiersz 12: if(Punkty > 0)
           Sprawdzenie warunku za pomocą instrukcji warunkowej IF.
           Sprawdzenie polega na stwierdzeniu, czy liczba
           przechowywana w zmiennej liczbowej całkowitej "Punkty"
           jest większa od 0. Jeżeli tak, to wykonaj instrukcje
           umieszczone pomiędzy klamrami zaraz za warunkiem
           (tj. Punkty > 0).
Wiersz 13: Wyświetl nagłówki tablicy.
Wiersz 14: Narysuj linię oddzielającą nagłówek tablicy od danych.
Wiersz 15: for(int I = 0; I < Punkty; I++)
           Za pomocą pętli FOR wykonaj tyle powtórzeń bloku instrukcji
           na ile pozwala warunek (tj. I < Punkty) umieszczony
           w drugim parametrze pętli. Blok instrukcji znajduje się
           pomiędzy klamrami zaraz za parametrami pętli FOR.
           Ilość powtórzeń jest określona za pomocą liczby wprowadzonej
           przez użytkownika.
Wiersz 16: Przenieś kursor tekstowy do kolejnego wiersza.
Wiersz 17: Formatuj liczbę wyświetlaną na ekranie, przez dodanie
           przed nią 6 znaków pustych.
Wiersz 18: Wyświetl następujące dane na ekranie:
           18.1) Zawartość zmiennej liczbowej całkowitej "I"
                 powiększoną o wartość 1 (tj I+1).
           18.2) Wyświetl znak pionowy (tj. |).
Wiersz 19: Wyświetl trzy znaki puste na ekranie.
Wiersz 20: Wyświetl na ekranie obliczony procent, jaki stanowi
          liczba pierwsza z liczby drugiej podanej przez użytkownika.
          Liczba druga podana przez użytkownika jest przechowywana
          w zmiennej liczbowej całkowitej "Punkty". Natomiast liczba
          pierwsza jest podawana do obliczeń przez pętlę FOR i jest
          przechowywana w zmiennej liczbowej całkowitej "I".
          Zawartość zmiennej liczbowej całkowitej "I" zmienia
          się dzięki pętli FOR oraz konstrukcji umieszczonej
          w trzecim parametrze (tj. I++).
           Do obliczenia jaki procent stanowi liczba1 z liczby2
           należy użyć wzoru liczba1*100/ liczba2.
           Gdzie: liczba1 = 10, liczba2 = 34.
           Podkładając wartości do wzoru 10*100%/34 = 29 (dzielenie bez reszty).
           Wynik procentowy jest całkowity ponieważ:
           1) Wykonane dzielenie jest bez reszty.
           2) Zmienne są typu liczbowego całkowitego.
Wiersz 23: Wyświetlenie na ekranie tekstu umieszczonego pomiędzy
           cudzysłowami oraz oczekiwanie na naciśnięcie dowolnego
           klawisza przez użytkownika.
           Instrukcja getch(); pobiera znak naciśniętego klawisza
           na klawiaturze.
*/