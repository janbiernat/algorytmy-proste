#include <iostream>                                        //1
using namespace std;                                       //2
int main() {                                               //3
  cout << "[c++edu01] Pobranie liczby z klawiatury \n \n"; //4
  int L = 0;                                               //5
  cout << "Podaj liczbe calkowita: ";                      //6
  cin >> L;                                                //7
  cout << "\nPodana liczba to: " << L;                     //8
  cout << "\n \n";                                         //9
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
5. Zadeklarowanie zmiennej liczbowej ca�kowitej o nazwie "L"
   z r�wnoczesnym przypisaniem warto�ci zerowej.
   Zmienna ta mo�e przechowywa� liczby z zakresu 
   od -32768 do 32767 dla liczb 16-bit 
   lub liczby z zakresu od -2147483648 do 2147483647 dla liczb 32-bit.
   Zawarto�� zmiennej liczbowej ca�kowitej "L" mo�e by� modyfikowana
   w trakcie dzia�ania programu. To oznacza, �e w momencie uruchomienia
   programu zmienna "L" posiada na pocz�tku warto�� 0.
   W momencie wprowadzenia przez u�ytkownika nowej warto�ci liczbowej
   np. 7, zmienna "L" b�dzie posiada� od tego momentu warto�� liczbow� 7.
6. Wy�wietlenie na ekranie komunikatu umieszczonego pomi�dzy cudzys�owami.
7. Pobranie liczby podanej przez u�ytkownika za pomoc� klawiatury
   (Klawiatura to podstawowe urz�dzenie wej�cia).
   Po pobraniu liczby nast�puje przypisanie jej do zmiennej liczbowej ca�kowitej "L".
   Od tego momentu zmienna liczbowa ca�kowita "L" przechowuje pobran� liczb�.
8. Wy�wietlenie danych na ekranie w nast�puj�cych krokach:
   8.1. Przeniesienie kursora tekstowego do kolejnego wiersza (znaki \n pisane razem).
   8.2. Wy�wietlenie na ekranie komunikatu umieszczonego pomi�dzy cudzys�owami.
   8.3. Wy�wietlenie na ekranie zawarto�ci zmiennej liczbowej ca�kowitej "L".
9. Przeniesienie kursora tekstowego do kolejnych wierszy.
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