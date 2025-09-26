#include <iostream>                         //1
using namespace std;                        //2
int main() {                                //3
  cout << "[c++edu00] Moj 1 program \n \n"; //4
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