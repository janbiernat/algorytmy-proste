#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
/*
--== [c++edu07a] Losowanie liczb ==--
Zadanie: Napisz program który wyœwietli wylosowan¹
        liczbê i sprawdzi, czy liczba jest
        parzysta lub nie.
*/
int main() {
  cout << "--== [c++edu07a] Losowanie liczb ==-- \n \n";
  int L = 0;
  srand(time(NULL));
  L = rand()%11;
  cout << "\n\nWylosowano liczbe " << L;
  cout << "\nWylosowana liczba jest liczba ";
  if(L % 2 == 0) { cout << "parzysta."; }
  else { cout << "nieparzysta."; }
cout << "\n \n";
}
/*
Legenda:
Wiersz 1: Pod³¹czenie standardowej biblioteki do obs³ugi
          strumieni, co umo¿liwi korzystanie z instrukcji
          cout i cin.
Wiersz 2: Pod³¹czenie biblioteki do obs³ugi czasu.
Wiersz 3: Standardowa biblioteka udostêpniaj¹ca
          funkcje do: - konwersji typów danych,
                      - losowania liczb,
                      - i wiele innych.
Wiersz 4: konstrukcja umo¿liwia na u¿ywanie
          instrukcji cout i cin bez przedrostka
          (prefiksu) "std::".
Wiersz 11: Blok g³ówny, który posiada instrukcje
           i odwo³ania do poszczególnych funkcji.
           Od tego bloku rozpoczyna siê uruchamianie
           programu. Bez tego bloku uruchomienie
           programu jest niemo¿liwe.
Wiersz 12: Wyœwietlenie na ekranie tekstu umieszczonego
           pomiêdzy cudzys³owami.
           Znaki \n pisane razem, s³u¿¹ do przeniesienia
           kursora tekstowego lub tekstu do kolejnego wiersza.
           Przenoszony kursor tekstowy lub tekst musi znajdowaæ
           siê za znakami \n.
           Do wyœwietlania komunikatu na ekranie s³u¿y instrukcja
           cout. Instrukcja cout (ang. console output) - jest
           to konsola wyjœciowa (czyli ekran monitora,
           który jest podstawowym urz¹dzeniem wyjœcia).
Wiersz 13: int L = 0;
           Zadeklarowanie zmiennej liczbowej ca³kowitej
           "L" z przypisan¹ wartoœci¹ 0.
           Typ integer mo¿e przechowywaæ liczby z zakresu
           od -32768 do +32767, które zajmuj¹ 2 bajty
           przy architekturze 16bit.
Wiersz 14: srand(time(NULL));
           Uruchomienie generatora liczb pseudolosowych
           na podstawie aktualnego czasu systemowego.
           Dziêki takiem rozwi¹zaniu, przy ka¿dym
           uruchomieniu lub powtórzeniu tych instrukcji
           generowana jest inna sekwencja liczb.
           Mo¿liwe jest to dziêki zegarowi systemowemu,
           który zwraca aktualny czas w sekundach.
           Instrukcja srand(p) - ustawia pocz¹tkowy punkt
                                 od którego rozpoczyna siê
                                generowanie liczb pseudolosowych.
                                W miejsce parametru p nale¿y
                                umieœciæ instrukcjê do pobierania
                                czasu systemowego.
           Instrukcja time(NULL) - s³u¿y do pobrania aktualnego
                                  czasu systemowego w sekundach.
Wiersz 15: L = rand()%11;
           Wylosowanie nieujemnej liczby ca³kowitej z podanego
           zakresu i przypisanie jej do do zmiennej liczbowej
           ca³kowitej "L".
           Zakres losowanych liczb podaje siê po znaku % (tj. %11),
           co oznacza losowanie liczb z zakresu od 0 do 10.
           Poniewa¿ od 0 do 10, to w³aœnie 11 liczb (tj. 0, 1, 2, .., 10).
Wiersz 16: Wyœwietlenie na ekranie nastêpuj¹cych informacji:
           16.1) Tekstu umieszczonego pomiêdzy cudzys³owami.
           16.2) Zawartoœci zmiennej liczbowej ca³kowitej "L".
Wiersz 18: if(L % 2 == 0) { cout << "parzysta."; }
           Sprawdzenie za pomoc¹ instrukcji warunkowej IF, reszty
           z dzielenia liczby przez wartoœæ 2. Je¿eli reszta
           z dzielenia jest równa 0 (tzn.strona  lewa równa siê prawej),
           to wyœwietl komunikat "parzysta".
           W innym przypadku wyœwietl komunikat "nieparzysta" (wiersz 19).
Wiersz 20: Przeniesienie kursora tekstowego o dwa kolejne wiersze.
*/