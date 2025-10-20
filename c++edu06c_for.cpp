#include <iostream>
using namespace std;
/*
--== [c++edu06c_for] Pêtla FOR: Wyœwietlenie liczb naturalnych ==--
Zadanie: Napisz program który wyœwietli liczby naturalne
         od 0 do 10.
Wymagania:
  1. Ka¿da liczba ma byæ oddzielona przecinkiem.
  2. Za ostatni¹ liczb¹ ma znajdowaæ siê znak
     kropki, sugeruj¹cy zakoñczenie wyœwietlania
     liczb.
Definicja:
Liczba naturalna to liczba ca³kowita, która jest nieujemna
                    (czyli wiêksza lub równa zero).
                    Liczby naturalne s³u¿¹ do liczenia
                    (np. rekordów w bazie danych)
                    lub porz¹dkowania.
                    Liczbami naturalnymi s¹: 0, 1, 2, 3, ... . 
*/
int main() {
  cout << "[c++edu06c_for] Petla FOR: Wyswietlenie liczb naturalnych \n \n"; //1
  for(int I = 1; I < 11; I++) {                                              //2
    if(I > 1) { cout << ", "; }                                              //3
    cout << I;                                                               //4
  }                                                                          //2
  cout << ". \n";                                                            //5
}
/*
Legenda:
1. Wyœwietlenie na ekranie komunikatu
   umieszczonego pomiêdzy cudzys³owami.
   Do wyœwietlania komunikatu na ekranie
   wykorzystuje siê instrukcje cout.
   Instrukcja cout (ang. console output) - jest
   to konsola wyjœciowa (czyli ekran monitora,
   który jest podstawowym urz¹dzeniem wyjœcia).
   Znaki \n pisane razem, s³u¿¹ do
   przeniesienia kursora tekstowego
   lub tekstu do kolejnego wiersza.
   Przenoszony kursor tekstowy
   lub tekst musi znajdowaæ siê za znakami \n.
2. "for(int I = 1; I < 11; I++) { ..."
   Za pomoc¹ pêtli FOR nastêpuje wyœwietlenie
   liczb od 1 do 10 (patrz wiersz nr 22).
   Konstrukcja pêtli FOR:
     for(p1, p2, p3) { 
       Instrukcja 1;
       Instrukcja 2;
       ...; 
       Instrukcja N; 
     }
     Parametr 1 (p1): Zawiera deklaracjê zmiennej liczbowej ca³kowitej "I"
                      oraz przypisanie do niej wartoœci pocz¹tkowej 1.
     Parametr 2 (p2): Zawiera warunek (tj. I < 11) okreœlaj¹cy, ile razy
                      zostan¹ wykonane instrukcje zawarte pomiêdzy
                      klamrami w pêtli FOR.
                      W tym przyk³adzie instrukcje bêd¹ wykonane 10 razy,
                      poniewa¿ w parametrze 1 do zmiennej liczbowej zosta³a
                      przypisana wartoœæ 1 (tj. I = 1;).
                      Natomiast warunek (tj. I < 11) umieszczony
                      w parametrze 2 ogranicza iloœæ powtórzeñ
                      instrukcji umieszczonych pomiêdzy klamrami
                      w pêtli FOR do 10 powtórzeñ
                      (tj. powtórzenie 1 ma nr/wartoœæ 1, natomiast
                      powtórzenie ostatnie ma nr/wartoœæ 10).
     Parametr 3 (p3): Zawiera inkrementacjê (czyli mechanizm zwiêkszaj¹cy)
                      zawartoœæ zmiennej o wartoœæ 1 (tj. I++).
                      Przyk³ady zwiêkszania zwartoœci zmiennej liczbowej
                      ca³kowitej "I":
                         A) I++   - Zwiêksza zawartoœæ o wartoœæ 1.
                         B) I+= 5 - Zwiêksza zawartoœæ o wartoœæ 5.
                         C) I--   - Zmniejsza zawartoœæ o wartoœæ -1.
                         D) I-= 5 - Zmniejsza zawartoœæ o wartoœæ -5.
3. if(I > 1) { cout << ", "; }
   Za pomoc¹ instrukcji warunkowej IF nastêpuje sprawdzenie,
   czy zmienna I jest wiêksza od cyfry 1 (warunek "I > 1").
   Je¿eli tak, to wykonaj instrukcje umieszczone za warunkiem (tj. "I > 1")
   pomiêdzy klamrami. Czyli wyœwietl znak przecinka i spacji - patrz wiersz nr 23.
4. Wyœwietl na ekranie zawartoœæ zmiennej liczbowej ca³kowitej "I".
5. Przeniesienie kursora tekstowego do kolejnych dwóch wierszy.
*/