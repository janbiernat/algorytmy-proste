#include <iostream> 
#include <conio.h> 
#include <cstdlib> //1. 
#include <windows.h> //2. 
using namespace std; 
/*--== Tablica ASCII w konsoli ==-- 
  Copyright (c)by Jan T. Biernat 
 = 
 Tablica kodów ASCII (ang. American Standard Code for Information 
 Interchange) stanowi zestaw kodów używanych do reprezentacji znaków 
 (liter, cyfr, znaków specjalnych np. @, $, # itp.). 
 Każdy znak w tabeli ma przyporządkowaną wartość liczbową dziesiętną, 
 np. litera duża "A"  ma wartość dziesiętną 65. 
 Tablica ASCII składa się 255 znaków, które podzielone są na kilka grup: 
   > Od 0 do 31 - znaki sterujące np. klawiszem ENTER, TAB, drukarką; 
   > Od 32 do 126 - znaki podstawowe; 
   > Od 127 do 255 - znaki dodatkowe (zawierają znaki graficzne, 
                     oraz znaki polskie itp.). 
 Podstawowa tabela ASCII (tj. od 0 do 127) nie podlega wymianie, 
 natomiast rozszerzona tablica (tj. od 128 do 255) może ulegać zmianie 
 np. w celu zakodowania polskich znaków. 
*/ 
int main() { 
  //Deklaracja stałych. 
    const short int WierszeIlosc = 21; 
  //Deklaracja zmiennych. 
    char Hex[32], Bin[32]; 
    int KodKlaw = 0, MenuWybrano = 0, ZnakNr = 0, ZnakNrASCII = 0; 
    HANDLE UchwytDoKonsoli; //3. 
    UchwytDoKonsoli = GetStdHandle(STD_OUTPUT_HANDLE); //4. 
  //Tablica ASCII. 
    do { 
      system("cls"); //5. 
      cout << "--== Tablica ASCII w konsoli ==--\n"; 
      cout << "Copyright (c)by Jan T. Biernat\n\n"; 
      //Tablica kodów ASCII od znaku pustego (tzw. spacji). 
        cout << "ESC - Wyjscie z programu.\n\n"; 
        cout << "\n  Znak  Dec  Hex  Bin"; 
        for(int I = 0; I < WierszeIlosc; I++) { 
          cout << "\n  "; 
          ZnakNrASCII = 0; ZnakNrASCII = 32+I+ZnakNr; 
          if(MenuWybrano == I) { SetConsoleTextAttribute(UchwytDoKonsoli, 112); } 
          else { SetConsoleTextAttribute(UchwytDoKonsoli, 7); } //6. 
          cout << "  " << char(ZnakNrASCII) << "   "; 
          if((ZnakNrASCII) < 100) { cout << "0" << (ZnakNrASCII); } else { cout << (ZnakNrASCII); } 
          cout << "  " << itoa((ZnakNrASCII), Hex, 16) << "   "; //7. 
          cout.width(8); cout.fill('0'); //8. 
          cout << itoa((ZnakNrASCII), Bin, 2) << "  "; //7. 
          SetConsoleTextAttribute(UchwytDoKonsoli, 7); //6. 
        } 
        cout << "\n"; 
      //Obsługa klawiszy. 
        KodKlaw = 0; 
        KodKlaw = getch(); //9. 
        if((KodKlaw == 0) || (KodKlaw == 224)) { //10. 
          KodKlaw = 0; KodKlaw = getch()+224; //11. 
        } 
          if(KodKlaw == 296) { 
            //Strzałka w góra. 
              MenuWybrano--; 
              if(MenuWybrano < 0) { 
                MenuWybrano = 0; 
                ZnakNr--; 
                if(ZnakNr < 0) { ZnakNr = 0; } 
              } 
          } else if(KodKlaw == 304) { 
                   //Strzałka w dół. 
                     MenuWybrano++; 
                     if(MenuWybrano > WierszeIlosc-1) { 
                       MenuWybrano = WierszeIlosc-1; 
                       ZnakNr++; 
                       if(ZnakNr > 256-(WierszeIlosc+32)) { ZnakNr = 256-(WierszeIlosc+32); } 
                     } 
                 } 
    } while(KodKlaw != 27); //12. 
/* 
  Legenda: 
   1) Podłączenie biblioteki "cstdlib", która posiada m.in. funkcje: 
      * konwersji ciągu znaków na liczbę i odwrotnie, 
      * losujące liczbę z podanego zakresu, 
      * do wywoływania poleceń systemowych. 
      * manipulatory służące do formatowania danych wyjściowych za pomocą instrukcji cout. 
   2) Podłączenie biblioteki "windows.h" zawierającej funkcje związane z WinAPI. 
   3) Zadeklarowanie zmiennej "UchwytDoKonsoli", która jest uchwytem do konsoli (tj. wiersza poleceń). 
      Uchwyt ten wykorzystywany jest w funkcjach windowsowych jako parametr. 
   4) Funkcja GetStdHandle zwraca standardowy uchwyt wyjścia do konsoli (tj. STD_OUTPUT_HANDLE) 
      i przypisuje ją do zmiennej "UchwytDoKonsoli". 
   5) Wywołanie polecenia systemowego CLS w konsoli (tj. wierszu plecenia). 
   6) SetConsoleTextAttribute(P1, P2) - funkcja umożliwia ustawienie koloru dla tekstu w konsoli (tj. wierszu polecenia). 
      W parametrze 1 (tj. P1) - umieszczamy uchwyt do konsoli, czyli zmienną "UchwytDoKonsoli". 
      Natomiast w parametrze 2 (tj. P2) umieszczamy numer koloru. 
      Np:   7 - tekst jest biały na czarnym tle, 
          112 - tekst jest czarny na białym tle, 
           63 - tekst jest biały na niebieskim tle. 
   7) Instrukcja itoa(P1, P2, P3) - Konwertuje liczbę całkowitą na łańcuch znaków. 
       P1 - w tym parametrze umieszczamy liczbę całkowitą. 
       P2 - w tym parametrze umieszczamy zmienną typu char, która 
            będzie przechowywać wynik konwersji. 
       P3 - w tym parametrze określamy podstawę systemu liczbowego w którym 
            będzie zapisy wynik. 
   8) Instrukcja cout.width(8) wyrównuje liczbę do prawej strony i przeznacza na liczbę 8 miejsc. 
      Instrukcja cout.fill('0') dopełnia zerami do 8 miejsc. 
      Na przykład: 123456 => 00123456. 
   9) Pobranie kodu znaku za pomocą instrukcji "getch()" i przypisanie go do zmiennej liczbowej "KodKlaw". 
      Jeżeli zostaną naciśnięte klawisze strzałki lub inne klawisze funkcyjne to instrukcja "getch()" zwróci kod 224 lub 0, 
      a dopiero później kod klawisza. 
      To znaczy dla strzałki: 
      * w górę kod 72, 
      * w dół kod 80, 
      * w lewo kod 75, 
      * w prawo kod 77. 
      Funkcja "getch()" zwraca kod 224 lub 0 w kompilatorach MinGW (Falcon C++) i Visual C++. 
      W innych kompilatorach kody te mogą być inne, ponieważ nie ma określonego standardu. 
  10) Sprawdzenie, czy został naciśnięty klawisz funkcyjny, jeżeli tak to odczytaj ponownie 
      kod klawisza z dodaną wartością 224 (nr 11). 
  11) Odczytaj ponownie kod klawisza z dodaną wartością 224 i przypisz kod znaku do zmiennej liczbowej "KodKlaw". 
  12) Pętla DO ... WHILE jest tak długo wykonywana, aż użytkownik naciśnie klawisz ESC. 
*/ 
} 