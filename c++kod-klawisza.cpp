#include <iostream> 
#include <conio.h> 
using namespace std; 
int main() { 
  cout << "--== Kod klawisza ==--\n\n"; 
  cout << "UWAGA: Klawisz ESC wychodzi z programu.\n\n"; 
  int KodKlaw = 0;                                              //1. 
  do { 
    KodKlaw = 0;                                                //2. 
    KodKlaw = getch();                                          //3. 
    if((KodKlaw == 0) || (KodKlaw == 224)) {                    //4. 
      KodKlaw = 0;                                              //5. 
      KodKlaw = getch()+224;                                    //6. 
    } 
    cout << "\nKod: " << KodKlaw << " znak: " << (char)KodKlaw; //7. 
  } while(KodKlaw != 27);                                       //8. 
/* 
  Legenda: 
  1) Deklaracja zmiennej liczbowej całkowitej "KodKlaw" z równoczesnym przypisaniem wartości początkowej 0. 
  2) Wyzerowanie zmiennej liczbowej "KodKlaw". 
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
  4. Sprawdzenie, czy został naciśnięty klawisz funkcyjny, jeżeli tak, to odczytaj ponownie 
     kod klawisza z dodaną wartością 224 (nr 6). 
  5. Wyzerowanie zmiennej liczbowej "KodKlaw". 
  6. Odczytaj ponownie kod klawisza z dodaną wartością 224 i przypisz kod znaku do zmiennej liczbowej "KodKlaw". 
  7. Wyświetl na ekranie następujące dane: 
      * tekst znajdujący się pomiędzy cudzysłowami, 
      * kod znaku (kod przechowywany jest w zmiennej liczbowej "KodKlaw"), 
      * kod znaku, który rzutowany jest na typ CHAR (co umożliwia wyświetlenie znaku o podanym kodzie). 
  8. Pętla DO ... WHILE jest tak długo wykonywana, aż użytkownik naciśnie klawisz ESC. 
 */ 
} 