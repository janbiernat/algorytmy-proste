#include <iostream>
using namespace std;
/*
--== [c++edu06c_for] P�tla FOR: Wy�wietlenie liczb naturalnych ==--
Zadanie: Napisz program kt�ry wy�wietli liczby naturalne
         od 0 do 10.
Wymagania:
  1. Ka�da liczba ma by� oddzielona przecinkiem.
  2. Za ostatni� liczb� ma znajdowa� si� znak
     kropki, sugeruj�cy zako�czenie wy�wietlania
     liczb.
Definicja:
Liczba naturalna to liczba ca�kowita, kt�ra jest nieujemna
                    (czyli wi�ksza lub r�wna zero).
                    Liczby naturalne s�u�� do liczenia
                    (np. rekord�w w bazie danych)
                    lub porz�dkowania.
                    Liczbami naturalnymi s�: 0, 1, 2, 3, ... .�
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
1. Wy�wietlenie na ekranie komunikatu
   umieszczonego pomi�dzy cudzys�owami.
   Do wy�wietlania komunikatu na ekranie
   wykorzystuje si� instrukcje cout.
   Instrukcja cout (ang. console output) - jest
   to konsola wyj�ciowa (czyli ekran monitora,
   kt�ry jest podstawowym urz�dzeniem wyj�cia).
   Znaki \n pisane razem, s�u�� do
   przeniesienia kursora tekstowego
   lub tekstu do kolejnego wiersza.
   Przenoszony kursor tekstowy
   lub tekst musi znajdowa� si� za znakami \n.
2. "for(int I = 1; I < 11; I++) { ..."
   Za pomoc� p�tli FOR nast�puje wy�wietlenie
   liczb od 1 do 10 (patrz wiersz nr 22).
   Konstrukcja p�tli FOR:
     for(p1, p2, p3) { 
       Instrukcja 1;
       Instrukcja 2;
       ...; 
       Instrukcja N; 
     }
     Parametr 1 (p1): Zawiera deklaracj� zmiennej liczbowej ca�kowitej "I"
                      oraz przypisanie do niej warto�ci pocz�tkowej 1.
     Parametr 2 (p2): Zawiera warunek (tj. I < 11) okre�laj�cy, ile razy
                      zostan� wykonane instrukcje zawarte pomi�dzy
                      klamrami w p�tli FOR.
                      W tym przyk�adzie instrukcje b�d� wykonane 10 razy,
                      poniewa� w parametrze 1 do zmiennej liczbowej zosta�a
                      przypisana warto�� 1 (tj. I = 1;).
                      Natomiast warunek (tj. I < 11) umieszczony
                      w parametrze 2 ogranicza ilo�� powt�rze�
                      instrukcji umieszczonych pomi�dzy klamrami
                      w p�tli FOR do 10 powt�rze�
                      (tj. powt�rzenie 1 ma nr/warto�� 1, natomiast
                      powt�rzenie ostatnie ma nr/warto�� 10).
     Parametr 3 (p3): Zawiera inkrementacj� (czyli mechanizm zwi�kszaj�cy)
                      zawarto�� zmiennej o warto�� 1 (tj. I++).
                      Przyk�ady zwi�kszania zwarto�ci zmiennej liczbowej
                      ca�kowitej "I":
                         A) I++   - Zwi�ksza zawarto�� o warto�� 1.
                         B) I+= 5 - Zwi�ksza zawarto�� o warto�� 5.
                         C) I--   - Zmniejsza zawarto�� o warto�� -1.
                         D) I-= 5 - Zmniejsza zawarto�� o warto�� -5.
3. if(I > 1) { cout << ", "; }
   Za pomoc� instrukcji warunkowej IF nast�puje sprawdzenie,
   czy zmienna I jest wi�ksza od cyfry 1 (warunek "I > 1").
   Je�eli tak, to wykonaj instrukcje umieszczone za warunkiem (tj. "I > 1")
   pomi�dzy klamrami. Czyli wy�wietl znak przecinka i spacji - patrz wiersz nr 23.
4. Wy�wietl na ekranie zawarto�� zmiennej liczbowej ca�kowitej "I".
5. Przeniesienie kursora tekstowego do kolejnych dw�ch wierszy.
*/