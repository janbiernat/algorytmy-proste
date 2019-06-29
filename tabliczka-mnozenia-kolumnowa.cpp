#include <iostream> /*Biblioteka "iostream" (ang. input/output stream) 
                      oznacza strumień wejścia/wyjścia. 
                      Za pomocą tej biblioteki można m.in. wprowadzać 
                      informacje ze standardowych urządzeń 
                      wejścia (klawiatura) lub wyprowadzać 
                      informacje ze standardowych urządzeń 
                      wyjścia (ekran).*/ 
#include <conio.h>  /*Obsługa klawiatury za pomocą.*/ 
#include <cstdlib>  /*Posiada m.in. instrukcje do zainicjowania generatora liczb pseudolosowych.*/ 
#include <ctime>    /*Biblioteka "ctime " zawiera funkcje związane z obsługą czasu i daty.*/ 
#include <string.h> /*Podłączenie biblioteki umożliwiającej obsługę łańcuchów znaków.*/ 
/* 
  --== Tabliczka mnożenia - kolumnowa ==-- 
  Copyright(c)by Jan T. Biernat 
  Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/główny. 
int main() { 
  cout << "--== Tabliczka mnozenia - kolumnowa ==--\n"; //1 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  cout << "UWAGA: Wpisanie zakresu mniejszego od 1, spowoduje wyjscie z programu!\n"; 
  short int I = 0, Zakres = 0, Wynik = 0; //2 
  do{ //3 
    cout << "\n\nPodaj zakres: "; 
    cin >> Zakres; //4 
    if(Zakres > 10) { //5 
      Zakres = 10; //6 
      cout << "BLAD -?Przekroczony zakres!" 
           << "\n       Wprowadzam domyslny zakres 10!\n"; 
    } 
    if(Zakres > 0) { //7 
      for(I = 1; I < 11; I++) { //8 
        Wynik = 0; //9 
        Wynik = I*Zakres; //10 
        cout << "\n"; //11 
        if(I < 10) { cout << " "; } //12 
        cout << I << " * " << Zakres << " = "; 
        if(Wynik < 10) { cout << "  "; } 
        else if(Wynik < 100) { cout << " "; } 
        cout << Wynik; 
      } 
    } 
  } while(Zakres > 0); 
  cout << "\n\n"; 
  /* Komentarz: 
      1) Wyświetl na ekranie tekst znajdujący się pomiędzy apostrofami. 
      2) Deklaracja zmiennych liczbowych całkowitych. 
      3) Początek pętli DO ... WHILE. Gdzie instrukcje wykonywane są tak długo, 
         jak długo spełniony jest warunek. 
      4) Pobranie danych (tj. liczb) z klawiatury i przypisanie ich 
         do zmiennej liczbowej całkowitej "Zakres". 
      5) Jeżeli wartość przechowywana w zmiennej liczbowej całkowitej "Zakres" 
         jest większa od liczby 10, to wykonaj poniższe instrukcje 
         (tj. wyświetl komunikat o przekroczeniu zakresu). 
         Jest to zabezpieczenie programu! 
      6) Przypisanie do zmiennej liczbowej całkowitej "Zakres" wartości 10. 
      7) Poniższe instrukcje wykonaj, gdy spełniony jest warunek 
         (tj. zawartość zmiennej liczbowej "Zakres" jest większa od wartości 0). 
         Jest to zabezpieczenie programu! 
      8) Pętla FOR. Instrukcje w niej zawarte będą wykonywane 10 razy. 
         Zapis "I++" jest równoważny z zapisem "I = I+1". 
      9) Wyzerowanie zmiennej liczbowej całkowitej "Zakres". 
     10) Przypisanie do zmiennej liczbowej całkowitej "Wynik", 
         wyniku z mnożenia dwóch liczb. Liczby te przechowywane 
         są w zmiennych liczbowych całkowitych "I" i "Zakres". 
     11) Obniżenie o jeden wiersz w dół. 
     12) Jeżeli wartość przechowywana w zmiennej liczbowej całkowitej "I" 
         jest mniejsza od liczby 10, to dodaj do testu wyświetlanego na 
         ekranie znak pusty (tzw. spacje). 
  */ 
} 
