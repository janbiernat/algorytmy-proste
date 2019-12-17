#include <iostream> 
#include <conio.h> 
/*--== Argumenty wywołania ==-- 
  Copyright (c)by Jan T. Biernat*/ 
using namespace std; 
int main(int argc, char *argv[]) { //1 
  cout << "--== Argumenty wywolania ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Wyświetl zawartość argumentu o numerze 0. 
    cout << "Zawartosc argumentu o indeksie 0: \n" << argv[0]; 
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