#include <iostream>
using namespace std;
int main() {
  cout << "--== Dec2Bin, w4 ==-- \n";
  cout << "Copyright (c)by Jan T. Biernat \n \n";
  int L = 0, P = 0;
  string B = "";
  cout << "Liczba (Dec): ";
  cin >> L;
  cout << "\n" << L << " = ";
  while(L > 0) {
    if(P > 3) { B = ' '+B; P = 0; }
    P++;
    if(L%2 == 0) { B = '0'+B; } else { B = '1'+B; }
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
W6: int L = 0, P = 0;
    Zadeklarowanie zmiennej liczbowej ca³kowitej
    o nazwie L i P oraz przepisanie do poszczególnych
    zmiennych wartoœci zerowej.
=
W7: string B = "";
    Zadeklarowanie zmiennej tekstowej o nazwie B,
    która zosta³a wyczyszczona.
=
W9: cin >> L;
    Pobranie danych z klawiatury i przypisanie
    ich do zmiennej liczbowej ca³kowitej L.
=
W10: cout << "\n" << L << " = ";
    Wykonanie na ekranie nastêpuj¹cych czynnoœci:
    W10.1. Przeniesienie kursora tekstowego do kolejnego wiersza. 
    W10.2. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej L.
    W10.3. Wyœwietlenie na ekranie znaku równa siê(tj. =).
=
W11: while(L > 0) { ...
     Warunek sprawdza, czy zawartoœæ zmiennej liczbowej
     ca³kowitej L jest wiêksza od zera.
     Je¿eli tak, to wykonaj instrukcje umieszczone
     pomiêdzy klamrami zaraz za warunkiem.
     Pêtla WHILE bêdzie tak d³ugo wykonywana, jak d³ugo
                 zawartoœæ zmiennej liczbowej ca³kowitej
                 L bêdzie wiêksza od wartoœci 0.
=
W12: if(P > 3) { B = ' '+B; P = 0; }
     Sprawdzenie warunku, czy zawartoœæ zmiennej liczbowej
     ca³kowitej P jest wiêksza od wartoœci 3.
     Je¿eli tak, to dodaj do zmiennej tekstowej B znak pusty
     i przypisz do zmiennej liczbowej P wartoœæ 0
     (tj. B = ' '+B; P = 0;).
     W przeciwnym razie nic nierób.
=
W13: P++;
     Zwiêksz zawartoœæ zmiennej liczbowej ca³kowitej
     P zawsze o wartoœæ 1.
     
=
W14: if(L%2 == 0) { B = '0'+B; } else { B = '1'+B; }
     Sprawdzenie za pomoc¹ instrukcji warunkowej IF,
     czy reszta z dzielenia liczby podanej przez u¿ytkownika
     przez 2 wynosi 0. Je¿eli reszta wynosi 0, to wykonaj
     instrukcje umieszczone pomiêdzy klamrami zaraz za warunkiem
     (tj. dodaj do zmiennej tekstowej B znak 0, czyli B = '0'+B;).
     W innym przypadku (reszta wynosi 1) wykonaj instrukcje
     umieszczone pomiêdzy klamrami zaraz za wyrazem ELSE
     (tj. dodaj do zmiennej tekstowej B znak 1, czyli B = '1'+B;).
=
W15: L /= 2;
     Dzielenie przez 2 i bez reszty liczby podanej przez u¿ytkownika.
     Liczba podana przez u¿ytkownika jest przechowywana
     w zmiennej liczbowej ca³kowitej L.
     Zapis L /= 2 jest taki sam jak zapis L = L/2;.
=
W17: cout << B;
     Wyœwietlenie na ekranie wyniku.
=
W18: cout << "\n \n";
     Przeniesienie kursora tekstowego do dwóch kolejnych wierszy.
*/