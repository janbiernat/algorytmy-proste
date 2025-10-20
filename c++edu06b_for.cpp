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
  //Liczenie z wykorzystaniem pêtli FOR.
    cout << "\n \nPetla FOR"; //6
    int I;                    //7
    for(I = 0; I < 10; I++) { //8
      cout << "\n" << I;      //9
    }                         //8
  cout << "\n \n";            //10
}
/*
Legenda:
1. Pod³¹czenie biblioteki "iostream",
   która s³u¿y do obs³ugi ekranu i klawiatury.
   Bez tej biblioteki lub jej podobnych
   nie by³oby mo¿liwoœci obs³ugi ekranu
   i klawiatury.
   Biblioteka ta posiada gotowe funkcje do
   wykorzystania przez twórcê programu.
   Przyk³adow¹ funkcj¹ mo¿e byæ funkcja
   sumuj¹ca dwie podane liczby.
2. Konstrukcja "using namespace std;" 
   umo¿liwia u¿ywanie instrukcji takich
   jak COUT i CIN bez przedrostka "std::".
3. Blok g³ówny "main()" rozpoczyna dzia³anie
   programu. Bez tego bloku program nie jest
   wstanie siê uruchomiæ.
   Blok ten zawiera instrukcje lub
   odwo³ania do funkcji.
4. Wyœwietlenie na ekranie komunikatu
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
5. Wyœwietlenie na ekranie komunikatu
   umieszczonego pomiêdzy cudzys³owami oraz
   przeniesienie kursora tekstowego do kolejnego
   wiersza.
6. Wyœwietlenie na ekranie komunikatu
   umieszczonego pomiêdzy cudzys³owami.
7. Zadeklarowanie zmiennej liczbowej ca³kowitej "I".
   Zmienna i jej zawartoœæ jest widoczna poza pêtl¹ FOR.
8. "for(int I = 0; I < 10; I++) { ..."
   Za pomoc¹ pêtli FOR nastêpuje wyœwietlenie
   liczb od 0 do 9 (patrz wiersz nr 20).
   Konstrukcja pêtli FOR:
     for(p1, p2, p3) { 
       Instrukcja 1;
       Instrukcja 2;
       ...; 
       Instrukcja N; 
     }
     Parametr 1 (p1): Przypisanie do zmiennej liczbowej ca³kowitej "I"
                      wartoœci zerowej.
     Parametr 2 (p2): Zawiera warunek (tj. I < 10) okreœlaj¹cy, ile razy
                      zostan¹ wykonane instrukcje zawarte pomiêdzy
                      klamrami w pêtli FOR.
                      W tym przyk³adzie instrukcje bêd¹ wykonane 10 razy,
                      poniewa¿ w parametrze 1 do zmiennej liczbowej zosta³a
                      przypisana wartoœæ zerowa (tj. I = 0;).
                      Natomiast warunek (tj. I < 10) umieszczony
                      w parametrze 2 ogranicza iloœæ powtórzeñ
                      instrukcji umieszczonych pomiêdzy klamrami
                      w pêtli FOR do 10 powtórzeñ
                      (tj. powtórzenie 1 ma nr/wartoœæ 0, natomiast
                      powtórzenie ostatnie ma nr/wartoœæ 9).
     Parametr 3 (p3): Zawiera inkrementacjê (czyli mechanizm zwiêkszaj¹cy)
                      zawartoœæ zmiennej o wartoœæ 1 (tj. I++).
                      Przyk³ady zwiêkszania zwartoœci zmiennej liczbowej ca³kowitej np. "I":
                         A) I++   - Zwiêksza zawartoœæ o wartoœæ 1.
                         B) I+= 5 - Zwiêksza zawartoœæ o wartoœæ 5.
                         C) I--   - Zmniejsza zawartoœæ o wartoœæ -1.
                         D) I-= 5 - Zmniejsza zawartoœæ o wartoœæ -5.
9. "cout << "\n" << I;"
   Wyœwietlenie na ekranie danych w nastêpuj¹cej kolejnoœci:
   9.1. Przeniesienie kursora tekstowego do nastêpnego wiersza.
   9.2. Wyœwietlenie zawartoœci zmiennej liczbowej ca³kowitej "I".
10. Przeniesienie kursora tekstowego do kolejnych dwóch wierszy. 
*/