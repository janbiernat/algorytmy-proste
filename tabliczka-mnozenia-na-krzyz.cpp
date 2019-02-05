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
  --== Tabliczka mno¿enia - na krzy¿ ==-- 
  Copyright(c)by Jan T. Biernat 
  C++ Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/g³ówny. 
int main() { 
  cout << "--== Tabliczka mnozenia - na krzyz ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Tabliczka mno¿enia - na krzy¿. 
  cout << "\n    "; 
  for(int I=1; I < 11; I++) { 
    if(I < 10) { cout << " "; } 
    cout << I << "  "; 
  } 
  for(int A=1; A < 11; A++) { 
    cout << "\n"; 
    if(A < 10) { cout << " "; } 
    cout << A; 
    for(int B=1; B < 11; B++) { 
      if(A*B < 10) { cout << "  "; } 
      else if(A*B < 100) { cout << " "; } 
      cout << " " << (A*B); 
    } 
  } 
  //Naciœnij dowolny klawisz. 
  cout << "\n\n\nNacisnij dowolny klawisz..."; getch(); 
} 