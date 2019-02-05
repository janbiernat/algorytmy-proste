#include <iostream> /*Biblioteka "iostream" (ang. input/output stream) 
                      oznacza strumieñ wejœcia/wyjœcia. 
                      Za pomoc¹ tej biblioteki mo¿na m.in. wprowadzaæ 
                      informacje ze standardowych urz¹dzeñ 
                      wejœcia (klawiatura) lub wyprowadzaæ 
                      informacje ze standardowych urz¹dzeñ 
                      wyjœcia (ekran).*/ 
#include <conio.h>  /*Obs³uga klawiatury za pomoc¹.*/ 
#include <cstdlib>  /*Posiada m.in. instrukcje do zainicjowania generatora liczb pseudolosowych.*/ 
#include <ctime>    /*Biblioteka "ctime " zawiera funkcje zwi¹zane z obs³ug¹ czasu i daty.*/ 
#include <string.h> /*Pod³¹czenie biblioteki umo¿liwiaj¹cej obs³ugê ³añcuchów znaków.*/ 
/* 
  --== Tabliczka mno¿enia - kolumnowa ==-- 
  Copyright(c)by Jan T. Biernat 
  C++ Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/g³ówny. 
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
    for(I = 1; I < 11; I++) { //7 
      Wynik = 0; //8 
      Wynik = I*Zakres; //9 
      cout << "\n"; //10 
      if(I < 10) { cout << " "; } //11 
      cout << I << " * " << Zakres << " = "; 
      if(Wynik < 10) { cout << "  "; } 
      else if(Wynik < 100) { cout << " "; } 
      cout << Wynik; 
    } 
  } while(Zakres > 0); 
  cout << "\n\n"; 
  /* Komentarz: 
      1) Wyœwietl na ekranie tekst znajduj¹cy siê pomiêdzy apostrofami. 
      2) Deklaracja zmiennych liczbowych ca³kowitych. 
      3) Pocz¹tek pêtli DO ... WHILE. Gdzie instrukcje wykonywane s¹ tak d³ugo, 
         jak d³ugo spe³niony jest warunek. 
      4) Pobranie danych (tj. liczb) z klawiatury i przypisanie ich 
         do zmiennej liczbowej ca³kowitej "Zakres". 
      5) Je¿eli wartoœæ przechowywana w zmiennej liczbowej ca³kowitej "Zakres" 
         jest wiêksza od liczby 10, to wykonaj poni¿sze instrukcje 
         (tj. wyœwietl komunikat o przekroczeniu zakresu). 
      6) Przypisanie do zmiennej liczbowej ca³kowitej "Zakres" wartoœci 10. 
      7) Pêtla FOR. Instrukcje w niej zawarte bêd¹ wykonywane 10 razy. 
         Zapis "I++" jest równowa¿ny z zapisem "I = I+1". 
      8) Wyzerowanie zmiennej liczbowej ca³kowitej "Zakres". 
      9) Przypisanie do zmiennej liczbowej ca³kowitej "Wynik", 
         wyniku z mno¿enia dwóch liczb. Liczby te przechowywane 
         s¹ w zmiennych liczbowych ca³kowitych "I" i "Zakres". 
     10) Obni¿enie o jeden wiersz w dó³. 
     11) Je¿eli wartoœæ przechowywana w zmiennej liczbowej ca³kowitej "I" 
         jest mniejsza od liczby 10, to dodaj do testu wyœwietlanego na 
         ekranie znak pusty (tj. spacje). 
  */ 
} 