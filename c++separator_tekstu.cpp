#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Rozdzielanie tekstu (separator tekstu) ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program który pobierze od użytkownika 
  dowolny tekst. Każdy wyraz w tekście należy 
  rozdzielić znakiem średnika (tj. ";") 
  tzw. separatorem tekstu. 
  Następnie program ma wypisać każdy wyraz w osobnym wierszu. 
  Na przykład: 
    Podany tekst to: Atari;Spectrum;Amstrad;Amiga;CRY 
    Wynik działania programu: 
        1) Atari, 
        2) Spectrum, 
        3) Amstrad, 
        4) Amiga, 
        5) CRY. 
*/ 
int main() { 
  cout << "--== Rozdzielanie tekstu (separator tekstu) ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const char ZnakSeparatora = ';'; 
  //Deklaracja zmiennych. 
    string Tekst = "", Tym = ""; 
    int TekstDl = 0, NrPos = 0, Licznik = 0; 
  //Pobierz dane z klawiatury. 
    cout << "Podaj tekst: "; 
    getline(cin, Tekst); 
  //Wykonaj program. 
    if(Tekst != "") {                                                //1. 
      Tekst = Tekst+ZnakSeparatora;                                  //2. 
      TekstDl = 0; TekstDl = Tekst.length();                         //3. 
      for(int I = 0; I < TekstDl; I++) {                             //4. 
        NrPos = 0; NrPos = Tekst.find(ZnakSeparatora);               //5. 
        if(Tekst.substr(0, NrPos) != "") {                           //6. 
          Licznik++;                                                 //7. 
          if(I > 0) { cout << ","; }                                 //8. 
          cout << "\n";                                              //9. 
          cout.width(3);                                             //10. 
          cout << Licznik << ") " << Tekst.substr(0, NrPos);         //11. 
        } 
        Tym = ""; Tym = Tekst.substr(NrPos+1, Tekst.length());       //12. 
        Tekst = ""; Tekst = Tym;                                     //13. 
      } 
      cout << "."; 
    } else { cout << "BLAD -?Brak podanego tekstu!"; }               //14. 
  cout << "\n"; 
/* 
  Legenda: 
     1) Instrukcja warunkowa sprawdza, czy zmienna tekstowa "Tekst" 
        zawiera jakieś znaki. Jeżeli posiada minimum jeden znak lub więcej, 
        to warunek jest spełniony i nastąpi wykonanie instrukcji znajdujących 
        się poniżej (tj. za klamrą otwierającą blok instrukcji "{"). 
        W innym przypadku zostanie wykonana instrukcja po słowie ELSE 
        (tzn. zostanie wyświetlony komunikat o braku podanego tekstu [komentarz nr 14]). 
     2) Dodanie na końcu podanego tekstu, separatora tekstu (separator tekstu 
        przechowywany jest w stałej znakowej "ZnakSeparatora"). 
     3) Wyzerowanie zmiennej liczbowej "TekstDl". 
        Przypisanie do zmiennej liczbowej "TekstDl" ilości znaków w podanym tekście. 
        Ilość znaków jest wyliczana za pomocą instrukcji LENGTH(). 
     4) Ilość powtórzeń pętli FOR zależy od ilości znaków w podanym tekście. 
        Ilość znaków przechowywana jest w zmiennej liczbowej "TekstDl". 
     5) Wyzerowanie zmiennej liczbowej "NrPos". 
        Wyszukanie znaku separatora w podanym tekście dzięki funkcji FIND. 
        Nr indeksu wyszukanego znaku separatora przypisany zostanie do zmiennej liczbowej "NrPos". 
        Funkcja FIND(p1) - zwraca nr pozycji wyszukanego znaku. 
                           Szukany znak podaje się w miejsce parametru P1. Parametr jest typu CHAR. 
     6) Warunek sprawdza, czy pobrany fragment tekstu faktycznie posiada jakieś znaki. 
        Jeżeli tak, to wykonaj instrukcje znajdujące się za klamrą otwierającą (tj. "{"). 
        Funkcja SUBSTR służy do wyciągnięcia fragmentu tekstu z całego podanego ciągu znaków. 
        Funkcja ta posiada 2 parametry. Parametr 1 określa początek fragmentu tekstu, 
        natomiast parametr 2 określa koniec pobieranego fragmentu tekstu. 
     7) Licznik++ = Licznik = Licznik+1 
        Zwiększenie zawartości zmiennej liczbowej "Licznik" o wartość 1. 
     8) Wyświetlenie na ekranie przecinka (znajduje się pomiędzy cudzysłowami), jeżeli 
        zawartość zmiennej liczbowej "I" będzie większa od wartości 0. 
     9) Znaki sterujące (tj. \n) powodują przejście o jedną linię w dół. 
        Wszystko co znajduje się za znakami sterującymi (tj. \n) zostanie przeniesione 
        o jedną linię w dół. Znaki sterujące (tj. \n) umieszczane są pomiędzy cudzysłowami. 
    10) cout.width(3) - funkcja rezerwuje 3 znakowe miejsce na wyświetlenie liczby lub tekstu. 
        Jeżeli liczba lub tekst jest za krótka, to zostanie dopełniona znakami spacji 
        (tzw. znakami pustymi). Np. podana jest liczba "1" -> i otrzymamy "  2". 
    11) Wyświetlenie na ekranie zawartości zmiennej liczbowej "Licznik" 
        i pobranego fragmentu tekstu z podanego ciągu znaków. 
        Początek pobranego fragmentu tekstu rozpoczyna się od nr indeksu 0, 
        a kończy się na nr indeksu który przechowywany jest w zmiennej liczbowej "NrPos". 
    12) Wyczyszczenie zmiennej tekstowej "Tym". Przypisanie do zmiennej tekstowej "Tym" 
        pobranego fragmentu tekstu z podanego ciągu znaków. Początek pobranego fragmentu tekstu 
        rozpoczyna się od nr przechowywanego w zmiennej liczbowej "NrPos+1", a kończy się na 
        ostatnim znaku podanego ciągu znaków. 
    13) Wyczyszczenie zmiennej tekstowej "Tekst". Przypisanie do zmiennej tekstowej "Tekst" 
        zawartości zmiennej tekstowej "Tym". 
    14) Wyświetlenie komunikatu o braku podanego tekstu. 
*/ 
} 