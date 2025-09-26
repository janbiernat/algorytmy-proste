#include <iostream>                                         //1
using namespace std;                                        //2
int main() {                                                //3
  cout << "[c++edu03] Dzielenie liczby przez liczbe \n \n"; //4
  float A = 0, B = 0;                                       //5
  cout << "A: ";                                            //6
  cin >> A;                                                 //7
  cout << "B: "; cin >> B;                                  //8
  cout << "\n" << A << " / " << B << " = " << (A/B);        //9
  cout << "\n \n";                                          //10
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
   wykorzystuje siê instrukcji cout.
   Instrukcja cout (ang. console output) - jest
   to konsola wyjœciowa (czyli ekran monitora,
   który jest podstawowym urz¹dzeniem wyjœcia).
   Znaki \n pisane razem, s³u¿¹ do
   przeniesienia kursora tekstowego
   lub tekstu do kolejnego
   wiersza. Przenoszony kursor tekstowy
   lub tekst musi znajdowaæ siê za znakami \n.
5. Zadeklarowanie zmiennych liczbowych rzeczywistych o nazwach
   "A" i "B" z równoczesnym przypisaniem wartoœci zerowej.
   (Zawartoœæ zmiennej liczbowej rzeczywistej np. "A" mo¿e byæ modyfikowana
   w trakcie dzia³ania programu. To oznacza, ¿e w momencie uruchomienia
   programu zmienna "A" posiada na pocz¹tku wartoœæ 0. W momencie wprowadzenia
   przez u¿ytkownika nowej wartoœci liczbowej np. 3.14, zmienna "A"
   bêdzie posiadaæ od tego momentu wartoœæ liczbow¹ 3.14).
6. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami.
7. Pobranie liczby podanej przez u¿ytkownika za pomoc¹ klawiatury
   (Klawiatura to podstawowe urz¹dzenie wejœcia). Po pobraniu liczby nastêpuje
   przypisanie jej do zmiennej liczbowej rzeczywistej "A".
   Od tego momentu zmienna liczbowa rzeczywista "A" przechowuje pobran¹ liczbê.
8. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (instrukcja cout).
   Nastêpnie nastêpuje pobranie liczby podanej przez u¿ytkownika za pomoc¹
   klawiatury. Po pobraniu liczba zostaje przypisana do zmiennej liczbowej
   rzeczywistej "B". Od tego momentu zmienna liczbowa rzeczywista "B" przechowuje pobran¹ liczbê.
9. Wyœwietlenie danych na ekranie w nastêpuj¹cych krokach:
   9.1. Przeniesienie kursora tekstowego do kolejnego wiersza (znaki \n pisane razem).
   9.2. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej rzeczywistej "A".
   9.3. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (tj. /).
   9.4. Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej rzeczywistej "B".
   9.5. Wyœwietlenie na ekranie komunikatu umieszczonego pomiêdzy cudzys³owami (tj. =).
   9.6. Wyœwietlenie na ekranie wyniku z dzielenia liczby przez liczbê.
        Liczby przechowywane s¹ w zmiennych liczbowych rzeczywistych "A" i "B".
        (Iloraz to wynik dzia³ania matematycznego, jakim jest dzielenie.
         W dzia³aniu 12:6 = 2, liczba 12 to dzielna, 6 to dzielnik,
         a 2 to iloraz).
10. Przeniesienie kursora tekstowego do kolejnych wierszy.
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