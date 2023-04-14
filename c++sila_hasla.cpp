#include <iostream> 
using namespace std; 
/*--== Siła hasła ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program sprawdzający siłę hasła. 
  Hasło musi spełniać następujące kryteria: 
  1) Minimum 1 litera mała [K1]. 
  2) Minimum 1 litera duża [K2]. 
  3) Minimum 1 cyfra [K3]. 
  4) Minimum 1 znak specjalny (np. !@#$%^&*()-_=+{}[];:,.<>/?) [K4]. 
  5) Minimum 1 znak pusty (tzw. spację) [K5]. 
  6) Długość hasła to minimum 6 znaków i maksymalnie 20 znaków [K6]. 
  Ponadto program ma poinformować, które kryterium zostało spełnione. 
*/ 
void SilaHasla(string Haslo, short &K1, short &K2, short &K3, short &K4, short &K5, short &K6) { 
//SilaHasla - Funkcja ocena siłę podanego hasła. 
  const short Ilosc = 24; 
  const char Znaki[Ilosc] = {'!', '@', '#', '$', '%', '^', '&', '*', 
                             '(', ')', '-', '_', '=', '+', '{', '}', 
                             '[', ']', ';', ':', '<', '>', '?', '/'}; 
  if(Haslo != "") { 
    for(int I = 0; I < Haslo.length(); I++) { 
      if((int(Haslo[I]) > 96) && (int(Haslo[I]) < 123) && (K1 < 1)) { K1 = 1; } //[K1], Znaki od a do z. 
      if((int(Haslo[I]) > 64) && (int(Haslo[I]) < 91) && (K2 < 1)) { K2 = 1; } //[K2], Znaki od A do Z. 
      if((int(Haslo[I]) > 47) && (int(Haslo[I]) < 58) && (K3 < 1)) { K3 = 1; } //[K3], Cyfry od 0 do 9. 
      //[K4], Sprawdź, czy jest minimum 1 znak specjalny. 
        for(int Z = 0; Z < Ilosc; Z++) { 
          if((Haslo[I] == Znaki[Z]) & (K4 < 1)) { K4 = 1; } 
        } 
      if((Haslo[I] == ' ') && (K5 < 1)) { K5 = 1; } //[K5], Czy jest znak pusty (tzw. spacja). 
      if((Haslo.length() > 6) && (Haslo.length() < 21) && (K6 < 1)) { K6 = 1; } //[K6], Długość hasła. 
    } 
  } else { K1 = -1; K2 = K1; K3 = K1; K4 = K1; K5 = K1; K6 = K1; } 
} 
//Blok główny (startowy). 
int main() { 
  cout << "--== Sila hasla ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n"; 
  cout << "\n\n"; 
  string Haslo = ""; 
  short K1 = 0, K2 = 0, K3 = 0, K4 = 0, K5 = 0, K6 = 0; 
  cout << "Podaj haslo do oceny: "; getline(cin, Haslo); 
  if(Haslo != "") { 
    cout << "\nPodane haslo to: \"" << Haslo << "\".\n"; 
    SilaHasla(Haslo, K1, K2, K3, K4, K5, K6); 
    cout << "\nJakie kryteria zostaly spelnione:\n"; 
    cout << "1) Minimum 1 litera mala   : " << K1 << ".\n"; 
    cout << "2) Minimum 1 litera duza   : " << K2 << ".\n"; 
    cout << "3) Minimum 1 cyfra         : " << K3 << ".\n"; 
    cout << "4) Minimum 1 znak specjalny: " << K4 << ".\n"; 
    cout << "5) Minimum 1 znak pusty    : " << K5 << ".\n"; 
    cout << "6) Dlugosc hasla           : " << K6 << ".\n"; 
  } else { cout << "BLAD -?Brak podanego hasla!"; } 
  cout << "\n\n"; 
} 