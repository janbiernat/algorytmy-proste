#include <iostream> 
#include <conio.h> 
#include <math.h> 
#include <cstdlib> /*Posiada instrukcje do zainicjowania 
                     generatora liczb pseudolosowych.*/ 
#include <ctime> /*Biblioteka "ctime " zawiera funkcje 
                   związane z obsługą czasu i daty.*/ 
using namespace std; 
int main() { 
  cout << "--== Rownanie kwadratowe ==--\n"; 
  cout << "UWAGA: Wyniki X0, X1 i X2 zostana wyswietlone, gdy DELTA > -1.\n"; 
  //Deklaracja stałych. 
    const int Zakres = 10; /*Zadeklarowanie stałej liczbowej 
                             całkowitej "Zakres" i przypisanie 
                             jej konkretnej wartości (np. 34).*/ 
  //Deklaracja zmiennych. 
    float A = 0, B = 0, C = 0; //Deklaracja zmiennych liczbowych rzeczywistych. 
    float Delta = 0; 
    long int Licznik = 0; 
    do { 
         Licznik++; // Licznik++ = "Licznik = Licznik+1;" - Obydwa zapisy wykonują to samo zadanie, czyli 
                    //                                      zwiększają zmienną liczbową całkowitą "Licznik" 
                    //                                      o wartość 1. 
         //Losowanie liczb. 
           srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
         //Szlaczek 
           cout << "\n\n"; 
           for(int S = 0; S < 54; S++) { cout << "="; } 
           cout << " losowanie nr: " << Licznik << "."; 
         //Pobranie danych. 
           cout << "\n\nWylosowane wartosci: "; 
           A = 0; A = rand()%Zakres; /*Wylosowanie jednej liczby z podanego zakresu, 
                                       który przechowywany jest w stałej liczbowej 
                                       całkowitej "Zakres" i przypisanie 
                                       wylosowanej liczby do zmiennej liczbowej 
                                       całkowitej "Liczba". 
                                       Funkcja RAND - umożliwia wylosowanie jednej 
                                                      liczby z podanego zakresu.*/ 
           cout << "\nA: " << A; 
           B = 0; B = rand()%Zakres; cout << "\nB: " << B; 
           C = 0; C = rand()%Zakres; cout << "\nC: " << C; 
         //Obliczenie delty. 
           Delta = 0; Delta = (B*B)-(4*A*C); //Obliczenie delty. 
           cout << "\n\nDelta = b^2 - 4ac = " << Delta; 
           if(A != 0) { 
             //X1 i X2. 
               if(Delta < 0) { cout << "\nRownanie nie posiada pierwiastkow!"; } 
               else if(Delta == 0) { 
                      //Obliczenie X0. 
                        cout << "\n\nX0 = -b/2a = " << -1*B/2*A; 
                    } else { 
                             //Obliczenie X1 i X2. 
                               cout << "\n\nX1 = -b-P(Delta)/2a = " 
                                    << ((-1*B)-sqrt(Delta))/(2*A); 
                               cout << "\nX2 = -b+P(Delta)/2a = " 
                                    << ((-1*B)+sqrt(Delta))/(2*A); 
                               cout << "\n\nLegenda: P - pierwiastek."; 
                           } 
           } else { cout << "\nBLAD -?Nie dam rady obliczyc X0, X1 i X2!"; } 
    } while (Delta < 0); 
  cout << "\n\n"; 
} 