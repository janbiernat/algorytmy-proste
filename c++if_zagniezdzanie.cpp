#include <iostream> 
using namespace std; 
int main() { 
  short Lat = 0; 
  cout << "Ile masz lat: "; cin >> Lat; 
  if(Lat > 0) { 
    if(Lat < 101) { 
      if(Lat < 18) { cout << "Jestes dzieckiem."; } 
      else if((Lat > 17) && (Lat < 21)) { cout << "Jestes mlodziencem."; } 
           else if((Lat > 20) && (Lat < 26)) { cout << "Jestes mlodziencem. Jestes studentem."; } 
                else if((Lat > 25) && (Lat < 36)) { cout << "Jestes mlodym czlowiekiem.\nJestes czynny zawodowo lub jestes studentem."; } 
                     else if((Lat > 35) && (Lat < 66)) { cout << "Jestes czlowiekiem czynnym zawodowo."; } 
                          else { cout << "Jestes emerytem."; } 
    } else { cout << "BLAD -?To jest niemozliwe!"; } 
  } else { cout << "BLAD -?To jest niemozliwe!"; } 
  cout << "\n\n"; 
} 