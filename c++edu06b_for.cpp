#include <iostream>                          //1
using namespace std;                         //2
int main() {                                 //3
  cout << "[c++edu06b] Petla FOR, w2 \n \n"; //4
  //Liczenie manualne.
    cout << "0 \n";                          //5
    cout << "1 \n";
    cout << "2 \n";
    cout << "3 \n";
    cout << "4 \n";
    cout << "5 \n";
    cout << "6 \n";
    cout << "7 \n";
    cout << "8 \n";
    cout << "9 \n";
  //
  //Liczenie z wykorzystaniem p�tli FOR.
    cout << "\n \nPetla FOR"; //6
    int I;                    //7
    for(I = 0; I < 10; I++) { //8
      cout << "\n" << I;      //9
    }                         //8
  cout << "\n \n";            //10
}
/*
Legenda:
1. Pod��czenie biblioteki "iostream",
   kt�ra s�u�y do obs�ugi ekranu i klawiatury.
   Bez tej biblioteki lub jej podobnych
   nie by�oby mo�liwo�ci obs�ugi ekranu
   i klawiatury.
   Biblioteka ta posiada gotowe funkcje do
   wykorzystania przez tw�rc� programu.
   Przyk�adow� funkcj� mo�e by� funkcja
   sumuj�ca dwie podane liczby.
2. Konstrukcja "using namespace std;" 
   umo�liwia u�ywanie instrukcji takich
   jak COUT i CIN bez przedrostka "std::".
3. Blok g��wny "main()" rozpoczyna dzia�anie
   programu. Bez tego bloku program nie jest
   wstanie si� uruchomi�.
   Blok ten zawiera instrukcje lub
   odwo�ania do funkcji.
4. Wy�wietlenie na ekranie komunikatu
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
5. Wy�wietlenie na ekranie komunikatu
   umieszczonego pomi�dzy cudzys�owami oraz
   przeniesienie kursora tekstowego do kolejnego
   wiersza.
6. Wy�wietlenie na ekranie komunikatu
   umieszczonego pomi�dzy cudzys�owami.
7. Zadeklarowanie zmiennej liczbowej ca�kowitej "I".
   Zmienna i jej zawarto�� jest widoczna poza p�tl� FOR.
8. "for(int I = 0; I < 10; I++) { ..."
   Za pomoc� p�tli FOR nast�puje wy�wietlenie
   liczb od 0 do 9 (patrz wiersz nr 20).
   Konstrukcja p�tli FOR:
     for(p1, p2, p3) { 
       Instrukcja 1;
       Instrukcja 2;
       ...; 
       Instrukcja N; 
     }
     Parametr 1 (p1): Przypisanie do zmiennej liczbowej ca�kowitej "I"
                      warto�ci zerowej.
     Parametr 2 (p2): Zawiera warunek (tj. I < 10) okre�laj�cy, ile razy
                      zostan� wykonane instrukcje zawarte pomi�dzy
                      klamrami w p�tli FOR.
                      W tym przyk�adzie instrukcje b�d� wykonane 10 razy,
                      poniewa� w parametrze 1 do zmiennej liczbowej zosta�a
                      przypisana warto�� zerowa (tj. I = 0;).
                      Natomiast warunek (tj. I < 10) umieszczony
                      w parametrze 2 ogranicza ilo�� powt�rze�
                      instrukcji umieszczonych pomi�dzy klamrami
                      w p�tli FOR do 10 powt�rze�
                      (tj. powt�rzenie 1 ma nr/warto�� 0, natomiast
                      powt�rzenie ostatnie ma nr/warto�� 9).
     Parametr 3 (p3): Zawiera inkrementacj� (czyli mechanizm zwi�kszaj�cy)
                      zawarto�� zmiennej o warto�� 1 (tj. I++).
                      Przyk�ady zwi�kszania zwarto�ci zmiennej liczbowej ca�kowitej np. "I":
                         A) I++   - Zwi�ksza zawarto�� o warto�� 1.
                         B) I+= 5 - Zwi�ksza zawarto�� o warto�� 5.
                         C) I--   - Zmniejsza zawarto�� o warto�� -1.
                         D) I-= 5 - Zmniejsza zawarto�� o warto�� -5.
9. "cout << "\n" << I;"
   Wy�wietlenie na ekranie danych w nast�puj�cej kolejno�ci:
   9.1. Przeniesienie kursora tekstowego do nast�pnego wiersza.
   9.2. Wy�wietlenie zawarto�ci zmiennej liczbowej ca�kowitej "I".
10. Przeniesienie kursora tekstowego do kolejnych dw�ch wierszy. 
*/