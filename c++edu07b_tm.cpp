#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
/*
--== [c++edu07b_tm] Prosty test z tabliczki mno¿enia ==--
Zadanie: Napisz program do sprawdzania
         tabliczki mno¿enia.
*/
int main() {
  cout << "--== [c++edu07b_tm] Prosty test z tabliczki mnozenia ==-- \n \n";
  int A = 0, B = 0, W = 0;
  srand(time(NULL));
  A = rand()%11;
  B = rand()%11;
  cout << A << " * " << B << " = ";
  cin >> W;
  if((A*B) == W) { cout << "Bardzo dobrze!"; }
  else { cout << "Fatalnie!"; }
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
Wiersz 10: Blok g³ówny, który posiada instrukcje
           i odwo³ania do poszczególnych funkcji.
           Od tego bloku rozpoczyna siê uruchamianie
           programu. Bez tego bloku uruchomienie
           programu jest niemo¿liwe.
Wiersz 11: Wyœwietlenie na ekranie tekstu umieszczonego
           pomiêdzy cudzys³owami.
           Znaki \n pisane razem, s³u¿¹ do przeniesienia
           kursora tekstowego lub tekstu do kolejnego wiersza.
           Przenoszony kursor tekstowy lub tekst musi znajdowaæ
           siê za znakami \n.
           Do wyœwietlania komunikatu na ekranie s³u¿y instrukcja
           cout. Instrukcja cout (ang. console output) - jest
           to konsola wyjœciowa (czyli ekran monitora,
           który jest podstawowym urz¹dzeniem wyjœcia).
Wiersz 12: int A = 0, B = 0, W = 0;
           Zadeklarowanie zmiennych liczbowych ca³kowitych
           "A", "B" i "W" z przypisan¹ wartoœci¹ 0.
           Typ integer mo¿e przechowywaæ liczby z zakresu
           od -32768 do +32767, które zajmuj¹ 2 bajty
           przy architekturze 16bit.
Wiersz 13: srand(time(NULL));
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
Wiersz 14: A = rand()%11;
           Wylosowanie nieujemnej liczby ca³kowitej z podanego
           zakresu i przypisanie jej do do zmiennej liczbowej
           ca³kowitej "A".
           Zakres losowanych liczb podaje siê po znaku % (tj. %11),
           co oznacza losowanie liczb z zakresu od 0 do 10.
           Poniewa¿ od 0 do 10, to w³aœnie 11 liczb (tj. 0, 1, 2, .., 10).
Wiersz 15: B = rand()%11;
           Wylosowanie nieujemnej liczby ca³kowitej z podanego
           zakresu i przypisanie jej do do zmiennej liczbowej
           ca³kowitej "B".
           Zakres losowanych liczb podaje siê po znaku % (tj. %11),
           co oznacza losowanie liczb z zakresu od 0 do 10.
           Poniewa¿ od 0 do 10, to w³aœnie 11 liczb (tj. 0, 1, 2, .., 10).
Wiersz 16: Wyœwietlenie na ekranie nastêpuj¹cych informacji:
           16.1) Zawartoœci zmiennej liczbowej ca³kowitej "A".
           16.2) Tekstu umieszczonego pomiêdzy cudzys³owami (tj. znak *).
           16.3) Zawartoœci zmiennej liczbowej ca³kowitej "B".
           16.4) Tekstu umieszczonego pomiêdzy cudzys³owami (tj. znaku =).
Wiersz 17: cin >> W;
          Pobranie danych podanych przez u¿ytkownika za pomoc¹ klawiatury.
          Do pobierania danych podawanych za pomoc¹ klawiatury s³u¿y
          instrukcja cin (ang. console input - konsola wejœciowa).
          Klawiatura to podstawowe urz¹dzenie wejœcia, za pomoc¹ którego
          u¿ytkownik mo¿e wprowadzaæ dane do komputera.
Wiersz 18: if((A*B) == W) { cout << "Bardzo dobrze!"; }
           Za pomoc¹ instrukcji warunkowej IF nastêpuje sprawdzenie,
           czy odpowiedŸ podana przez u¿ytkownika jest prawid³owa.
           Je¿eli obie strony równania s¹ sobie równe, to wyœwietl
           komunikat "Bardzo dobrze!". W innym przypadku wyœwietl
           komunikat "Fatalnie!" (wiersz 19).
           Porównanie dwóch stron równania /tj. (A*B) == W/ polega na:
            1) Pomno¿eniu dwóch liczb przechowywanych w zmiennych
               liczbowych ca³kowitych "A" i "B" - lewa strona równania.
           2) Porównaniu wyniku z lewej strony równania z wynikiem
              po prawej stronie równania. Wynik po prawej stronie
              równania jest przechowywany w zmiennej liczbowej
             ca³kowitej "W".
Wiersz 20: Przeniesienie kursora tekstowego o dwa kolejne wiersze.
*/