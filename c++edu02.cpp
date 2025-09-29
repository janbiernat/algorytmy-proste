#include <iostream>                                                   //1
using namespace std;                                                  //2
int main() {                                                          //3
  cout << "[c++edu02] Sumowanie 2 liczb podanych z klawiatury \n \n"; //4
  int A = 0, B = 0, Suma = 0;                                         //5                                               //5
  cout << "A: ";                                                      //6
  cin >> A;                                                           //7
  cout << "B: "; cin >> B;                                            //8
  cout << "\n" << A << " + " << B << " = " << (A+B);                  //9
  Suma = A+B;                                                         //10
  cout << "\n" << A << " + " << B << " = " << Suma;                   //11
  cout << "\n \n";                                                    //12
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
5. Zadeklarowanie zmiennych liczbowych ca³kowitych o nazwach
   "A", "B" i "Suma" z równoczesnym przypisaniem wartoœci zerowej.
   Zmienne te mog¹ przechowywaæ liczby z zakresu 
   od -32768 do 32767 dla liczb 16-bit 
   lub liczby z zakresu od -2147483648 do 2147483647 dla liczb 32-bit.
   (Zawartoœæ zmiennej liczbowej ca³kowitej np. "A" mo¿e byæ modyfikowana
   w trakcie dzia³ania programu. To oznacza, ¿e w momencie uruchomienia
   programu zmienna "A" posiada na pocz¹tku wartoœæ 0. W momencie wprowadzenia
   przez u¿ytkownika nowej wartoœci liczbowej np. 7, zmienna "A"
   bêdzie posiadaæ od tego momentu wartoœæ liczbow¹ 7.).
6. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami.
7. Pobranie liczby podanej przez u¿ytkownika za pomoc¹ klawiatury
   (Klawiatura to podstawowe urz¹dzenie wejœcia). Po pobraniu liczby nastêpuje
   przypisanie jej do zmiennej liczbowej ca³kowitej "A".
   Od tego momentu zmienna liczbowa ca³kowita "A" przechowuje pobran¹ liczbê.
8. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (instrukcja cout).
   Nastêpnie nastêpuje pobranie liczby podanej przez u¿ytkownika za pomoc¹
   klawiatury. Po pobraniu liczba zostaje przypisana do zmiennej liczbowej
   ca³kowitej "B". Od tego momentu zmienna liczbowa ca³kowita "B" przechowuje pobran¹ liczbê.
9. Wyœwietlenie danych na ekranie w nastêpuj¹cych krokach:
   9.1. Przeniesienie kursora tekstowego do kolejnego wiersza (znaki \n pisane razem).
   9.2. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej "A".
   9.3. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (tj. +).
   9.4. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej "B".
   9.5. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (tj. =).
   9.6. Wyœwietlenie na ekranie sumy podanych dwóch liczb, które przechowywane
        s¹ w zmiennych liczbowych ca³kowitych "A" i "B".
10. Przypisanie do zmiennej liczbowej ca³kowitej "Suma" wyniku z dodawania
    dwóch liczb przechowywanych w zmiennych liczbowych ca³kowitych "A" i "B".
11. Wyœwietlenie danych na ekranie w nastêpuj¹cych krokach:
   11.1. Przeniesienie kursora tekstowego do kolejnego wiersza (znaki \n pisane razem).
   11.2. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej "A".
   11.3. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (tj. +).
   11.4. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej "B".
   11.5. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (tj. =).
   11.6. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej ca³kowitej "Suma".
         Zmienna "Suma" zawiera wynik dodawania dwóch liczb przechowywanych
         w zmiennych liczbowych ca³kowitych "A" i "B".
12. Przeniesienie kursora tekstowego do kolejnych wierszy.
=
Kompilator - to oprogramowanie, które s³u¿y
             do t³umaczenia kodu Ÿród³owego
             na kod wynikowy (tj. maszynowy, zrozumia³y
             dla procesora).
             T³umaczenie kodu Ÿród³owego odbywa
             siê w nastêpuj¹cych krokach:
             1. Sprawdzenie poprawnoœci kodu Ÿród³owego.
             2. Je¿eli kod Ÿród³owy jest prawid³owy,
                to nastêpuje przet³umaczenie tego kodu
                do kodu wynikowego (tj. maszynowego
                zrozumia³ego dla procesora).
                W trakcie kompilacji nastêpuje
                pod³¹czenie dodatkowej biblioteki
                lub bibliotek wywo³anych kodzie programu
                za pomoc¹ programu Linker.
                Linker - to oprogramowanie, które ³¹czy
                         skompilowany plik i bibliotekê/biblioteki
                         w jeden plik wykonywalny o rozszerzeniu exe.
             3. Otrzymanie pliku wynikowego, który
                mo¿e byæ uruchamiany na innym
                komputerze, bez œrodowiska programistycznego
                w którym powsta³. Plik wykonywalny posiada
                rozszerzenie trzy literowe exe.
                Skrót exe pochodzi od s³owa angielskiego
                executable i oznacza wykonywalny (np. excel.exe).
*/