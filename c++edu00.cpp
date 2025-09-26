#include <iostream>                         //1
using namespace std;                        //2
int main() {                                //3
  cout << "[c++edu00] Moj 1 program \n \n"; //4
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
   wykorzystuje si� instrukcji cout.
   Instrukcja cout (ang. console output) - jest
   to konsola wyj�ciowa (czyli ekran monitora,
   kt�ry jest podstawowym urz�dzeniem wyj�cia).
   Znaki \n pisane razem, s�u�� do
   przeniesienia kursora tekstowego
   lub tekstu do kolejnego
   wiersza. Przenoszony kursor tekstowy
   lub tekst musi znajdowa� si� za znakami \n.
=
Kompilator - to oprogramowanie, kt�re s�u�y
             do t�umaczenia kodu �r�d�owego
             na kod wynikowy (tj. maszynowy, zrozumia�y
             dla procesora).
             T�umaczenie kodu �r�d�owego odbywa
             si� w nast�puj�cych krokach:
             1. Sprawdzenie poprawno�ci kodu �r�d�owego.
             2. Je�eli kod �r�d�owy jest prawid�owy,
                to nast�puje przet�umaczenie tego kodu
                do kodu wynikowego (tj. maszynowego
                zrozumia�ego dla procesora).
                W trakcie kompilacji nast�puje
                pod��czenie dodatkowej biblioteki
                lub bibliotek wywo�anych kodzie programu
                za pomoc� programu Linker.
                Linker - to oprogramowanie, kt�re ��czy
                         skompilowany plik i bibliotek�/biblioteki
                         w jeden plik wykonywalny o rozszerzeniu exe.
             3. Otrzymanie pliku wynikowego, kt�ry
                mo�e by� uruchamiany na innym
                komputerze, bez �rodowiska programistycznego
                w kt�rym powsta�. Plik wykonywalny posiada
                rozszerzenie trzy literowe exe.
                Skr�t exe pochodzi od s�owa angielskiego
                executable i oznacza wykonywalny (np. excel.exe).
*/