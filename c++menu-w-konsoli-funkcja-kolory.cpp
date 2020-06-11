#include <iostream> 
#include <conio.h> 
#include <cstdlib> //1. 
#include <windows.h> //2. 
using namespace std; 
/*--== Menu w konsoli - Funkcja i Kolory ==-- 
  Copyright (c)by Jan T. Biernat*/ 
short int MenuOpcjaNr(string Tablica[], int Rozmiar = 0) { 
  //MenuOpcjaNr - Obsługa menu. 
    const string MenuZnakiPuste = "  "; //Deklaracja stałej. 
  //Deklaracja zmiennych. 
    short int MenuWybrano = 0; 
    int ZnakiIle = 0, KodKlaw = 0; 
    HANDLE UchwytDoKonsoli; //3. 
    UchwytDoKonsoli = GetStdHandle(STD_OUTPUT_HANDLE); //4. 
    if(Rozmiar > 0) { 
      for(int I = 0; I < Rozmiar; I++) { 
        if(Tablica[I].length() > ZnakiIle) { ZnakiIle = Tablica[I].length(); } //Sprawdzenie, która opcja w menu ma najwięcej znaków. 
      } 
      //Menu - Obsługa. 
        do { 
          system("cls"); //5. 
          cout << "--== Menu - Funkcja i Kolory ==--\n"; 
          cout << "Copyright (c)by Jan T. Biernat\n\n"; 
          for(int I = 0; I < Rozmiar; I++) { 
            SetConsoleTextAttribute(UchwytDoKonsoli, 7); //6. 
            cout << "\n  "; 
            if(MenuWybrano == I) { SetConsoleTextAttribute(UchwytDoKonsoli, 112); } 
            else { SetConsoleTextAttribute(UchwytDoKonsoli, 7); } 
            cout << MenuZnakiPuste << Tablica[I]; 
            for(int A = 0; A < (ZnakiIle-Tablica[I].length()+MenuZnakiPuste.length()); A++) { cout << " "; } 
          } 
          SetConsoleTextAttribute(UchwytDoKonsoli, 7); //6. 
          cout << "\n  " << MenuZnakiPuste << "Wybrano: "; 
          KodKlaw = 0; 
          KodKlaw = getch(); //7. 
          if((KodKlaw == 0) || (KodKlaw == 224)) { //8. 
            KodKlaw = 0; 
            KodKlaw = getch()+224; //9. 
          } 
          //Obsługa strzałki w górę i w dół. 
            if(KodKlaw == 296) { 
              //Strzałka w górę. 
                MenuWybrano--; 
                if(MenuWybrano < 0) { MenuWybrano = 0; } 
            } else if(KodKlaw == 304) { 
                     //Strzałka w dół. 
                       MenuWybrano++; 
                       if(MenuWybrano > Rozmiar-1) { MenuWybrano = Rozmiar-1; } 
                   } 
        } while(KodKlaw != 13); //10. 
    } else { return -1; } 
  return MenuWybrano; 
} 
//Blok główny/startowy. 
int main() { 
  //Deklaracja zmiennych. 
    short int MenuWybrano = 0; 
    string Opcja[7]; 
  //Wypełnienie tablicy danymi. 
      Opcja[0] = "Atari"; 
      Opcja[1] = "Amstrad"; 
      Opcja[2] = "ZX Spectrum"; 
      Opcja[3] = "Commodore"; 
      Opcja[4] = "Cry"; 
      Opcja[5] = "Atari ST"; 
      Opcja[6] = "Atari TT"; 
  //Wywołanie funkcji "MenuOpcjaNr" i przypisanie nr wybranej opcji do zmiennej liczbowej "MenuWybrano". 
    MenuWybrano = MenuOpcjaNr(Opcja, 7); 
  //Wyświetlenie opcji wybranej z menu. 
    cout << MenuWybrano << " " << Opcja[MenuWybrano]; 
/* 
  Legenda: 
   1) Podłączenie biblioteki "cstdlib", która posiada m.in. funkcje: 
      * konwersji ciągu znaków na liczbę i odwrotnie, 
      * losujące liczbę z podanego zakresu, 
      * do wywoływania poleceń systemowych. 
   2) Podłączenie biblioteki zawierającej funkcje związane z WinAppi. 
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
   7) Pobranie kodu znaku za pomocą instrukcji "getch()" i przypisanie go do zmiennej liczbowej "KodKlaw". 
      Jeżeli zostaną naciśnięte klawisze strzałki lub inne klawisze funkcyjne to instrukcja "getch()" zwróci kod 224 lub 0, 
      a dopiero później kod klawisza. 
      To znaczy dla strzałki: 
       * w górę kod 72, 
       * w dół kod 80, 
       * w lewo kod 75, 
       * w prawo kod 77. 
      Funkcja "getch()" zwraca kod 224 lub 0 w kompilatorach MinGW (Falcon C++) i Visual C++. 
      W innych kompilatorach kody te mogą być inne, ponieważ nie ma określonego standardu. 
   8) Sprawdzenie, czy został naciśnięty klawisz funkcyjny, jeżeli tak, to odczytaj ponownie 
      kod klawisza z dodaną wartością 224 (nr 9). 
   9) Odczytaj ponownie kod klawisza z dodaną wartością 224 i przypisz kod znaku do zmiennej liczbowej "KodKlaw". 
  10) Pętla DO ... WHILE jest tak długo wykonywana, aż użytkownik naciśnie klawisz ENTER. 
*/ 
} 