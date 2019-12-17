#include <iostream> 
#include <conio.h> 
/*--== Argumenty wywołania 3 w pętli ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main(int argc, char *argv[]) { //1 
  cout << "--== Argumenty wywolania 3 w petli ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Wyświetl zawartość argumentów. 
    for(int I = 0; I < argc; I++) { 
      cout << "\n" << "Argument o indeksie " << I << " zawiera: " << argv[I]; 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
/* 
  Legenda: 
    1) Parametr o standardowej nazwie ARGC określa ilość podanych argumentów 
       w czasie wywołania programu. Argument o numerze 0 zawsze zawiera nazwę 
       wywoływanego programu. 
       Zmienna ARGV jest tablicą przechowującą podane argumenty 
       w trakcie wywołania programu. Indeksowanie w tablicy rozpoczyna 
       się od wartości 0. 
*/ 
} 