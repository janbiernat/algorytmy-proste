#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
using namespace std; 
/*--== Liczba binarna(dwójkowa) - czy liczba parzysta ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Napisz program, który wyświetli nr linii zawierającej 
 liczbę parzystą w zapisie binarnym. 
 Liczby w zapisie binarnym znajdują się w pliku tekstowym 
 o nazwie "bin-liczby.txt". 
*/ 
int main() { 
  cout << "--== Liczba binarna(dwojkowa) - czy liczba parzysta ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = ""; 
    long int Licznik = 0; 
  //Sprawdza wszystkie liczby znajdujące się w pliku tekstowym. 
    fstream PlikDane("bin-liczby.txt", ios::in); //1 
    if(PlikDane != NULL) { //2 
      Linia = ""; 
      cout << "Liczba parzysta jest w linii nr:"; 
      while(getline(PlikDane, Linia)) { //3 
        Licznik++; 
        if(Linia[Linia.length()-1] == '0') { cout << " " << Licznik; } 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
/* 
  Legenda: 
  1) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
     Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
     Otwarcie pliku do odczytu (tj. ios::in). 
  2) Jeżeli warunek jest spełniony, czyli obiekt "PlikDane" przechowuje 
     wartość różną od NULL, to plik istnieje fizycznie na dysku. 
     Gdy plik istnieje fizycznie na dysku, to nastąpi jego odczyt linia po linii. 
  3) Odczytanie kolejnej linii. Odczyt będzie kontynuowany, do momentu 
     napotkania końca pliku. Odczytana z pliku tekstowego linia będzie przypisana 
     do zmiennej tekstowej "Linia". 
*/ 
} 