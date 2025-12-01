#include <iostream>
using namespace std;
/*
--== [c++edu06d_for3] Pêtla FOR: Wyœwietlenie liczb naturalnych ==--
Zadanie: Napisz program który wyœwietli liczby naturalne
         od 10 do 1.
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
  cout << "[c++edu06d_for3] Petla FOR: Wyswietlenie liczb naturalnych \n";
  cout << "                                od najwiekszej liczby do 1 \n \n \n";
  int Z = 0;
  cout << "Podaj gorny zakres: ";
  cin >> Z;
  if(Z < 1) { Z = 1; }
  for(int I = Z; I > 0; I--) {
    if(I < Z) { cout << ", "; }
      cout << I;
  }
  cout << "."; 
cout << "\n \n";
}
/*
Legenda:
Wiersz 20: int main()
          Blok g³ówny, który zawiera instrukcje
          lub odwo³ania do funkcji.
          Od tego bloku rozpoczyna siê uruchamianie
          programu.
          Bez tego bloku uruchomienie programu jest
          niemo¿liwe.
Wiersz 21: Wyœwietlenie na ekranie komunikatu
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
Wiersz 23: int Z = 0;
           Zadeklarowanie zmiennej liczbowej ca³kowitej "Z"
           oraz przypisanie do niej wartoœci 0.
           Typ integer mo¿e przechowywaæ liczbê z zakresu
           od -32768 do 32767, która zajmuje 2 bajty przy
           architekturze 16bit.
Wiersz 25: cin >> Z;
           Pobranie danych z klawiatury i przypisanie
           ich do zmiennej liczbowej ca³kowitej "Z".
           Do pobrania danych z klawiatury s³u¿y
           instrukcja cin (ang. console input - konsola wejœciowa).
           Podstawowym urz¹dzeniem wejœcia jest klawiatura.
Wiersz 26: if(Z < 1) { Z = 1; }
           Zabezpieczenie za pomoc¹ instrukcji warunkowej IF,
           uniemo¿liwiaj¹ce wpisanie wartoœci mniejszej od 1.
           Spe³nienie warunku w nawiasie (tj. Z < 1) nast¹pi
           po wprowadzeniu wartoœci mniejszej od 1. To spowoduje
           wykonane instrukcji umieszczonej pomiêdzy klamrami
           zaraz za warunkiem (tj. Z = 1).
Wiersz 27: for(int I = Z; I > 0; I--) { ...
           Za pomoc¹ pêtli FOR nastêpuje wyœwietlenie
           liczb od N do 1.
           Konstrukcja pêtli FOR:
              for(p1, p2, p3) { 
                Instrukcja 1;
                Instrukcja 2;
                  ...; 
                Instrukcja N; 
              }
             Parametr 1 (p1): Zawiera deklaracjê zmiennej liczbowej ca³kowitej "I"
                              oraz przypisanie do niej wartoœci pocz¹tkowej 1.
             Parametr 2 (p2): Zawiera warunek (tj. I > 0) okreœlaj¹cy, ile razy
                              zostan¹ wykonane instrukcje zawarte pomiêdzy
                              klamrami w pêtli FOR.
                              W tym przyk³adzie instrukcje bêd¹ wykonane N razy,
                              w zale¿noœci od wartoœci wpisanej przez u¿ytkownika.
             Parametr 3 (p3): Zawiera dekrementacjê (czyli mechanizm zmniejszaj¹cy)
                              zawartoœæ zmiennej "I" o zawsze wartoœæ 1 (tj. I--).
                              Przyk³ady zwiêkszania/zmniejszania zwartoœci zmiennej liczbowej
                              ca³kowitej "I":
                               A) I++   - Zwiêksza zawartoœæ zmiennej "I" o wartoœæ 1.
                               B) I+= 5 - Zwiêksza zawartoœæ zmiennej "I" o wartoœæ 5.
                               C) I--   - Zmniejsza zawartoœæ zmiennej "I" o wartoœæ -1.
                               D) I-= 5 - Zmniejsza zawartoœæ zmiennej "I" o wartoœæ -5.
Wiersz 28: if(I < Z) { cout << ", "; }
           Za pomoc¹ instrukcji warunkowej IF nastêpuje sprawdzenie,
           czy zmienna "I" jest mniejsza  od zawartoœci zmiennej "Z".
           Je¿eli tak, to wykonaj instrukcje umieszczone za warunkiem (tj. I < Z)
           pomiêdzy klamrami. Czyli wyœwietl znak przecinka i spacji (tj. cout << ", ";).
Wiersz 29: cout << I;
           Wyœwietl na ekranie zawartoœæ zmiennej liczbowej ca³kowitej "I".
Wiersz 31: cout << ".";
           Wyœwietl na ekranie kropkê.
Wiersz 32: cout << "\n \n";
           Przeniesienie kursora tekstowego do kolejnych dwóch wierszy.
*/