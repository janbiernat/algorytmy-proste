#include <iostream> 
#include <conio.h> 
#include <cstdlib> //1. 
using namespace std; 
/*--== Menu w konsoli ==-- 
  Copyright (c)by Jan T. Biernat*/ 
int main() { 
  //Deklaracja stałych. 
    const short int MenuIlosc = 5; 
    const string MenuZnakiPuste = "     "; 
  //Deklaracja zmiennych. 
    short int MenuWybrano = 0; 
    int KodKlaw; 
    string Opcja[MenuIlosc]; 
  //Menu - Obsługa. 
    do { 
      system("cls"); //2. 
      cout << "--== Menu ==--\n"; 
      cout << "Copyright (c)by Jan T. Biernat\n\n"; 
      Opcja[0] = "Atari"; 
      Opcja[1] = "Amstrad"; 
      Opcja[2] = "ZX Spectrum"; 
      Opcja[3] = "Commodore"; 
      Opcja[4] = "Cry"; 
      for(int I = 0; I < MenuIlosc; I++) { 
        cout << "\n"; 
        if(MenuWybrano == I) { cout << "  -->"; } 
        else { cout << MenuZnakiPuste; } 
        cout << Opcja[I]; 
      } 
      cout << "\n" << MenuZnakiPuste << "Wybrano: "; 
      KodKlaw = 0; 
      KodKlaw = getch(); //3. 
      if((KodKlaw == 0) || (KodKlaw == 224)) { //4. 
        KodKlaw = 0; 
        KodKlaw = getch()+224; //5. 
      } 
      if(KodKlaw == 13) { 
        //Klawisz ENTER. 
        cout << MenuWybrano << " " << Opcja[MenuWybrano]; 
      } else { 
               if(KodKlaw == 296) { 
                 //Strzałka w górę. 
                   MenuWybrano--; 
                   if(MenuWybrano < 0) { MenuWybrano = 0; } 
               } else if(KodKlaw == 304) { 
                        //Strzałka w dół. 
                          MenuWybrano++; 
                          if(MenuWybrano > MenuIlosc-1) { MenuWybrano = MenuIlosc-1; } 
                      } 
             } 
    } while(KodKlaw != 27); //6. 
/* 
  Legenda: 
  1) Podłączenie biblioteki "cstdlib", która posiada m.in. funkcje: 
     * konwersji ciągu znaków na liczbę i odwrotnie, 
     * losujące liczbę z podanego zakresu, 
     * do wywoływania poleceń systemowych. 
  2) Wywołanie polecenia systemowego CLS w konsoli (tj. wierszu plecenia). 
  3) Pobranie kodu znaku za pomocą instrukcji "getch()" i przypisanie go do zmiennej liczbowej "KodKlaw". 
     Jeżeli zostaną naciśnięte klawisze strzałki lub inne klawisze funkcyjne to instrukcja "getch()" zwróci kod 224 lub 0, 
     a dopiero później kod klawisza. 
     To znaczy dla strzałki: 
      * w górę kod 72, 
      * w dół kod 80, 
      * w lewo kod 75, 
      * w prawo kod 77. 
     Funkcja "getch()" zwraca kod 224 lub 0 w kompilatorach MinGW (Falcon C++) i Visual C++. 
     W innych kompilatorach kody te mogą być inne, ponieważ nie ma określonego standardu. 
  4) Sprawdzenie, czy został naciśnięty klawisz funkcyjny, jeżeli tak, to odczytaj ponownie 
     kod klawisza z dodaną wartością 224 (nr 5). 
  5) Odczytaj ponownie kod klawisza z dodaną wartością 224 i przypisz kod znaku do zmiennej liczbowej "KodKlaw". 
  6) Pętla DO ... WHILE jest tak długo wykonywana, aż użytkownik naciśnie klawisz ESC. 
*/ 
} 