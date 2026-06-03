#include <iostream>
using namespace std;
int main() {
  cout << "--== Dec2Bin, w5 ==-- \n \n";
  int L = 0;
  string B = "";
  cout << "Liczba (Dec): ";
  cin >> L;
  cout << "\n" << L << " = ";
  while(L > 0) {
    B = char(L%2 +'0')+B;
    L /= 2; //L = L/2;
  }
  cout << B;
cout << "\n \n";
}
/*
Legenda:
W1: #include <iostream>
    Pod³¹czenie biblioteki do obs³ugi ekranu i klawiatury.
=
W2: using namespace std;
    Dziêki tej konstrukcji, instrukcje CIN i COUT mo¿na
    u¿ywaæ bez przedrostka std::.
=
W3: int main() { ...
    Blok g³ówny, który zawiera instrukcje i wywo³ania
    poszczególnych funkcji. Bez tego bloku uruchomienie
    programu jest niemo¿liwe.
=
W4: Wyœwietlenie na ekranie tekstu znajduj¹cego
    siê pomiêdzy cudzys³owami.
=
W5: int L = 0;
    Zadeklarowanie zmiennej liczbowej ca³kowitej
    o nazwie L, do której przypisana jest wartoœæ 0.
=
W6: string B = "";
    Zadeklarowanie zmiennej tekstowej o nazwie B,
    która zosta³a wyczyszczona.
=
W8: cin >> L;
    Pobranie danych z klawiatury i przypisanie
    ich do zmiennej liczbowej ca³kowitej L.
=
W9: cout << "\n" << L << " = ";
    Wykonanie na ekranie nastêpuj¹cych czynnoœci:
    W9.1. Przeniesienie kursora tekstowego do kolejnego wiersza. 
    W9.2. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej L.
    W9.3. Wyœwietlenie na ekranie znaku równa siê(tj. =).
=
W10: while(L > 0) { ...
     Warunek sprawdza, czy zawartoœæ zmiennej liczbowej
     ca³kowitej L jest wiêksza od zera.
     Je¿eli tak, to wykonaj instrukcje umieszczone
     pomiêdzy klamrami zaraz za warunkiem.
     Pêtla WHILE bêdzie tak d³ugo wykonywana, jak d³ugo
                 zawartoœæ zmiennej liczbowej ca³kowitej
                 L bêdzie wiêksza od wartoœci 0.
=
W11: B = char(L%2 +'0')+B;
     Wykonane s¹ nastêpuj¹ce kroki:
     W11.1. Obliczenie reszty z dzielenie L%2.
            W wyniku obliczenia L%2 otrzymujemy resztê 0 lub 1.
     W11.2. wykonanie konwersji znaku zero (tj. 0)
            na jego odpowiednik w systemie dziesiêtnym,
            czyli na wartoœæ/liczbê 48.
            Konwersja jest wykonana na podstawie tablicy ASCII.
     W11.3. Sumowanie reszty z dzielenie (tj. 0 lub 1) oraz wartoœci
            otrzymanej po konwersji znaku +'0' na wartoœæ 48.
            Dla reszty 0: 0+48 = 48 (pod tym numerem w tablicy ASCII jest znak 0).
            Dla reszty 1: 1+48 = 49 (pod tym numerem w tablicy ASCII jest znak 1).
     W11.4. Po wykonaniu dzia³ania L%2 +'0' nastêpuje rzutowanie
            wyniku do typu char.
     W11.5. Nastêpnie wynik typu char jest dodany do zmiennej tekstowej B.
     W11.6. Wynik sumowania typu char i zmiennej tekstowej B przepisujemy
            do zmiennej B (czyli dokonujemy nadpisania wczeœniej
            umieszczonej tam wartoœci).
     Instrukcja char(p1) s³u¿y do wyœwietlenia znaku
                         na podstawie podanej liczby
                         w systemie dziesiêtnym.
                         Liczbê tê nale¿y umieœciæ
                         w parametrze 1 (tj. p1).
=
W12: L /= 2;
     Dzielenie przez 2 i bez reszty liczby podanej przez u¿ytkownika.
     Liczba podana przez u¿ytkownika jest przechowywana w zmiennej
     liczbowej ca³kowitej L.
     Zapis L /= 2 jest taki sam jak zapis L = L/2;.
=
W14: cout << B;
     Wyœwietlenie na ekranie wyniku.
=
W15: cout << "\n \n";
     Przeniesienie kursora tekstowego do dwóch kolejnych wierszy.
*/