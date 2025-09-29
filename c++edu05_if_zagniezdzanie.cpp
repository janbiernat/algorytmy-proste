#include <iostream>                                                                                                                       //1
using namespace std;                                                                                                                      //2
int main() {                                                                                                                              //3
  cout << "[c++edu05] Grupa spoleczna ze wzgledu na wiek - zagniezdzenie instrukcji IF \n \n";                                            //4
  short Lat = 0;                                                                                                                          //5
  cout << "Ile masz lat: ";                                                                                                               //6
  cin >> Lat;                                                                                                                             //7
  if(Lat > 0) {                                                                                                                           //8
    if(Lat < 101) {                                                                                                                       //9
      if(Lat < 18) { cout << "Jestes dzieckiem."; }                                                                                       //10
      else if((Lat > 17) && (Lat < 21)) { cout << "Jestes mlodziencem."; }                                                                //11
           else if((Lat > 20) && (Lat < 26)) { cout << "Jestes mlodziencem lub studentem."; }                                             //12
                else if((Lat > 25) && (Lat < 36)) { cout << "Jestes mlodym czlowiekiem.\nJestes czynny zawodowo lub jestes studentem."; } //13
                     else if((Lat > 35) && (Lat < 66)) { cout << "Jestes czlowiekiem czynnym zawodowo."; }                                //14
                          else { cout << "Jestes emerytem."; }                                                                            //15
    } else { cout << "BLAD -?To jest niemozliwe! Taki wiek!"; }                                                                           //9
  } else { cout << "BLAD -?To jest niemozliwe!"; }                                                                                        //8
  cout << "\n \n";                                                                                                                        //16
}
/*
Legenda:
1. Podłączenie biblioteki "iostream",
   która służy do obsługi ekranu i klawiatury.
   Bez tej biblioteki lub jej podobnych
   nie byłoby możliwości obsługi ekranu
   i klawiatury.
   Biblioteka ta posiada gotowe funkcje do
   wykorzystania przez twórcę programu.
   Przykładową funkcją może być funkcja
   sumująca dwie podane liczby.
2. Konstrukcja "using namespace std;" 
   umożliwia używanie instrukcji takich
   jak COUT i CIN bez przedrostka "std::".
3. Blok główny "main()" rozpoczyna działanie
   programu. Bez tego bloku program nie jest
   wstanie się uruchomić.
   Blok ten zawiera instrukcje lub
   odwołania do funkcji.
4. Wyświetlenie na ekranie komunikatu
   umieszczonego pomiędzy cudzysłowami.
   Do wyświetlania komunikatu na ekranie
   wykorzystuje się instrukcje cout.
   Instrukcja cout (ang. console output) - jest
   to konsola wyjściowa (czyli ekran monitora,
   który jest podstawowym urządzeniem wyjścia).
   Znaki \n pisane razem, służą do
   przeniesienia kursora tekstowego
   lub tekstu do kolejnego wiersza.
   Przenoszony kursor tekstowy
   lub tekst musi znajdować się za znakami \n.
5. Zadeklarowanie zmiennej liczbowej całkowitej krótkiej
   o nazwie "Lat" z przypisaniem jej wartości zerowej.
   Zmienna ta jest typu liczbowego całkowitego krótkiego
   i może przechowywać liczby całkowite z zakresu
   od -128 do 127 dla liczb 8bit - całkowita krótka
   lub liczby z zakresu od -32768 do 32767 dla liczb 16bit.
6. Wyświetlenie na ekranie komunikatu
   umieszczonego pomiędzy cudzysłowami (tj. "Ile masz lat: ").
7. Pobranie liczby podanej przez użytkownika za pomocą klawiatury
   (Klawiatura to podstawowe urządzenie wejścia).
   Po pobraniu liczby następuje przypisanie jej do zmiennej
   liczbowej całkowitej krótkiej "Lat".
   Od tego momentu zmienna liczbowa całkowita "Lat"
   przechowuje pobraną liczbę.
==
Konstrukcja instrukcji IF:
  if(warunek) { instrukcje_wykonaj_jezeli_warunek_jest_spelniony/jest_prawdziwy/; }
  else { instrukcje_wykonaj_jezeli_warunek_nie_jest_spelniony/nie jest_prawdziwy/; }
==
8. Sprawdzenie warunku (tj. Lat > 0) za pomocą instrukcji IF.
   Sprawdzeniu podlega podany przez użytkownika wiek.
   Jeżeli podany wiek jest większy od zera, to wykonaj instrukcje
   umieszczone pomiędzy klamrami zaraz za warunkiem (patrz wiersze od nr 9 do 16).
   W innym przypadku wykonaj instrukcje umieszczone pomiędzy klamrami
   zaraz za instrukcją else (patrz wiersz nr 17,
   wyświetl komunikat "BLAD -?To jest niemozliwe!").
9. Sprawdzenie czy podany wiek jest mniejszy od liczby 101.
   Jeżeli warunek (tj. Lat < 101) będzie spełniony (tj. podany
   wiek będzie mniejszy od 101), to wykonaj instrukcje
   umieszczone pomiędzy klamrami zaraz za warunkiem
   (patrz wiersze od nr 10 do 15). W innym przypadku
   wykonaj instrukcje umieszczone pomiędzy klamrami
   zaraz za instrukcją else (patrz wiersz nr 16,
   wyświetl komunikat "BLAD -?To jest niemozliwe! Taki wiek!").
10. Sprawdzenie, czy podany wiek jest mniejszy od 18.
   Jeżeli tak, to wyświetl komunikat "Jestes dzieckiem".
   W innym przypadku wykonaj instrukcje po słowie else
   (tj. sprawdź kolejny warunek, czy podany wiek mieści
    się w przedziale od 18 do 20 lat - patrz wiersz następny).
11. Sprawdź, czy podany wiek mieści się w przedziale
    od 18 do 20 lat. Jeżeli tak, to wyświetl komunikat
    "Jestes mlodziencem.". W innym przypadku wykonaj
    instrukcje po słowie else (czyli sprawdź kolejny warunek
     - patrz wiersz następny).
12. Sprawdź, czy podany wiek mieści się w przedziale
    od 21 do 25 lat. Jeżeli tak, to wyświetl komunikat
    "Jestes mlodziencem lub studentem.".
    W innym przypadku wykonaj instrukcje
    po słowie else (czyli sprawdź kolejny warunek
     - patrz wiersz następny).
13. Sprawdź, czy podany wiek mieści się w przedziale
    od 26 do 35 lat. Jeżeli tak, to wyświetl komunikat
    "Jestes mlodym czlowiekiem.\nJestes czynny zawodowo lub jestes studentem.".
    W innym przypadku wykonaj instrukcje
    po słowie else (czyli sprawdź kolejny warunek
     - patrz wiersz następny).
14. Sprawdź, czy podany wiek mieści się w przedziale
    od 36 do 65 lat. Jeżeli tak, to wyświetl komunikat
    "Jestes czlowiekiem czynnym zawodowo.".
    W innym przypadku wykonaj instrukcje
    po słowie else (czyli wyświetl komunikat "Jestes emerytem.").
15. Wyświetl komunikat "Jestes emerytem.", gdy warunek
    w wierszu wcześniejszym (patrz wiersz nr 14) nie jest spełniony.
16. Przeniesienie kursora tekstowego do kolejnych wierszy.
*/