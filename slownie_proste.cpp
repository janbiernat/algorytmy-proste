#include <iostream> 
#include <conio.h> 
using namespace std; 
void SlownieProste(string Liczba="") { 
  //SlownieProste - Zamienia podaną liczbę na słowa. 
  //Na przykład: 12345 = jed*dwa*trz*czt*pie. 
    if(Liczba != "") { 
      for(int I=0; I < Liczba.length(); I++) { 
        if(I != 0) { cout << "*"; } 
        if(Liczba[I] == '0') { cout << "zero"; } 
        else if(Liczba[I] == '1') { cout << "jeden"; } 
             else if(Liczba[I] == '2') { cout << "dwa"; } 
                  else if(Liczba[I] == '3') { cout << "trzy"; } 
                       else if(Liczba[I] == '4') { cout << "cztery"; } 
                            else if(Liczba[I] == '5') { cout << "piec"; } 
                                 else if(Liczba[I] == '6') { cout << "szesc"; } 
                                      else if(Liczba[I] == '7') { cout << "siedem"; } 
                                           else if(Liczba[I] == '8') { cout << "osiem"; } 
                                                else if(Liczba[I] == '9') { cout << "dziewiec"; } 
                                                     else { cout << "?"; } 
      } 
    } else { cout << "?"; } 
} 
//Blok główny/startowy. 
int main() { 
  cout <<"--==  Slownie proste ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Liczba = ""; 
  //Pobierz dane z klawiatury. 
    cout << "Liczba: "; 
    cin >> Liczba;  
    SlownieProste(Liczba); cout << "."; 
  //Naciśnij dowolny klawisz. 
  cout << "\n\nNacisnij dowolny klawisz..."; 
  getch(); 
} 