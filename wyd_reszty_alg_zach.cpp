#include <iostream>
/*--== Wydawanie reszty algorytmem zach³annym ==--
Copyright (c)by Jan T. Biernat
=
Opis: Algorytm zach³anny wykorzystany do wydawania reszty,
      polega na u¿yciu najwiêkszego nomina³u w ka¿dym kroku.
      Najwiêkszy wykorzystany nomina³ nie mo¿e przekroczyæ
      pozosta³ej kwoty do wydania.
=
Przyk³ad:
Mamy do wydania resztê w kwocie 16z³.
W kasie posiadamy nastêpuj¹ce
nomina³y: 5z³, 2z³, 1z³.
Wynikiem dzia³ania algorytmu bêdzie: 5z³, 5z³, 2z³, 2z³ i 2z³.
=
Algorytm dzia³a w nastêpuj¹cy sposób:
1. Podajemy nomina³y od najwiêkszego
   do najmniejszego lub sortujemy
   podane nomina³y od najwiêkszego
   do najmniejszego.
2. Na pocz¹tku wydajemy najwiêkszy
   nomina³ lub nomina³ równy wartoœci
   reszty do wydania.
3. Po wydaniu nomina³u odejmujemy
   go od reszty, któr¹ mamy wydaæ.
4. Wróæ do kroku 2 i 3.
   Powtarzaj tak d³ugo, a¿
   reszta do wydania bêdzie
   równa zero.
*/
using namespace std;
int main() {
  cout << "--== Wydawanie reszty algorytmem zachlannym ==-- \n \n";

  int ResztaDoWydania = 0, P = 0;
   int Nominaly[6] = { 50, 20, 10, 5, 2, 1 }; //1.

  cout << "Jaka jest reszta do wydania: ";
  cin >> ResztaDoWydania;

  //Wydanie reszty.
  P = 0;
  cout << "\nReszta: ";
  while(ResztaDoWydania > 0) {              //2.
    while(ResztaDoWydania >= Nominaly[P]) { //3.
      ResztaDoWydania -= Nominaly[P];       //4.
      cout << Nominaly[P] << " ";
    }
    P++;
  }
cout << "\n \n";
}
/*
Legenda:
1. int Nominaly[6] = { 50, 20, 10, 5, 2, 1 };
   Zadeklarowanie zmiennej tablicowej 6 elementowej
   tego samego typu, czyli liczbowego ca³kowitego.
=
2. while(ResztaDoWydania > 0) { ...
   Wykonaj instrukcje zawarte w pêtli WHILE
   pomiêdzy klamrami, je¿eli zawartoœæ
   zmiennej liczbowej ca³kowitej ResztaDoWydania
   jest wiêksza od wartoœci zerowej.
=
3. while(ResztaDoWydania >= Nominaly[P]) { ...
   Wykonaj instrukcje zawarte w pêtli WHILE
   pomiêdzy klamrami, je¿eli zawartoœæ
   zmiennej liczbowej ca³kowitej ResztaDoWydania
   jest wiêksza lub równa zawartoœci aktualnie
   wskazanego elementu tablicy Nominaly.
   Nr aktualnego elementu tablicy jest przechowywany
   w zmiennej liczbowej ca³kowitej P.
=
4. ResztaDoWydania -= Nominaly[P];
   Powy¿szy zapis jest równoznaczny z zapisem: ResztaDoWydania = ResztaDoWydania-Nominaly[P];
*/