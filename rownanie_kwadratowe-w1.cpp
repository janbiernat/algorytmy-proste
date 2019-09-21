#include <iostream> 
#include <conio.h> 
#include <math.h> 
using namespace std; 
int main() { 
  cout << "--== Rownanie kwadratowe ==--\n"; 
  //Deklaracja zmiennych. 
    float A = 0, B = 0, C = 0; //Deklaracja zmiennych liczbowych rzeczywistych. 
    float Delta = 0; 
  //Pobranie danych. 
    cout << "\nPodaj dane:" 
         << "\n A: "; 
    cin >> A; 
    cout << "\n B: "; cin >> B; 
    cout << "\n C: "; cin >> C; 
  //Obliczenie delty. 
    Delta = (B*B)-(4*A*C); //Obliczenie delty. 
    cout << "\n\nDelta = b^2 - 4ac = " << Delta; 
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
  cout << "\n\n"; 
} 