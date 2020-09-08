#include <iostream> 
#include <conio.h> 
#include <windows.h> 
using namespace std; 
/*--== Przelicznik temperatur ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, którego zadane polega 
  na przeliczaniu pomiędzy stopniami 
  Celsjusza, Kelwina i Fahrenheita. 
  °K = °C + 273.15 
  °F = (°C * 1.8) + 32 
  °C = °K - 273.15 
  °F = (°K * 1.8) - 459.67 
  °C = (°F - 32) / 1.8 
  °K = (°F + 459.67) × 0.555555 (czyli inaczej 5/9) 
*/ 
float StrToFloat(string Str = "") { 
  //StrToFloat - Konwersja liczby taktowanej jako tekst na typ FLOAT. 
  string Cyfry = ""; 
  short int Poz = 0; 
  if(Str != "") { 
    if(Str[0] == '-') { Poz = 1; } 
    for(int I = Poz; I < Str.length(); I++) { 
      if(((int)Str[I] > 47) && ((int)Str[I] < 58) 
      || ((int)Str[I] == 46)) { Cyfry += Str[I]; } //"Cyfry += Str[I];" = "Cyfry = Cyfry+Str[I];". 
    } 
    if(Poz == 1) { Cyfry = Str[0]+Cyfry; } 
    if(Cyfry != "") { return atof(Cyfry.c_str()); } 
    else { return 0; } 
  } else { return 0; } 
} 
//= 
void Pokaz(bool Wskaz = false, string Str = "", float Liczba = 0) { 
  //Formatowanie informacji wyświetlanej na ekranie. 
  cout << "\n"; 
  if(Wskaz == true) { cout << " =>"; } else { cout << "   "; } 
  cout << Str << " = " << Liczba; 
} 
//Blok główny(startowy). 
int main() { 
  //Deklaracja zmiennych. 
    int KodKlaw = 0; 
    float C = 0, K = 0, F = 0; 
    short int Nr = 0; 
    string DaneLiczbowe = ""; 
  //Wykonaj zadanie. 
    do { 
      system("cls"); 
      cout << "--== Przelicznik temperatur ==--\n"; 
      cout << "Copyright (c)by Jan T. Biernat\n\n"; 
      //Przeliczanie temperatur. 
        if(Nr == 0) { 
          //Celsjusza (C). 
          C = 0; C = StrToFloat(DaneLiczbowe); 
          if(C < -273.14) { C = -273.14; } 
          K = 0; K = C + 273.15;     //Celsjusza (C) => Kelwina (K). 
          F = 0; F = (C * 1.8) + 32; //Celsjusza (C) => Fahrenheit (F). 
        } else if(Nr == 1) { 
                 //Kelwina (K). 
                 K = 0; K = StrToFloat(DaneLiczbowe); 
                 if(K < 0) { K = 0; } 
                 C = 0; C = K - 273.15;        //Kelwina (K) => Celsjusza (C). 
                 F = 0; F = (K *1.8) - 459.67; //Kelwina (K) => Fahrenheit (F). 
               } else if(Nr == 2) { 
                        //Fahrenheit (F). 
                        F = 0; F = StrToFloat(DaneLiczbowe); 
                        if(F < 0) { F = 0; } 
                        K = 0; K = (F + 459.67) * 0.555555; //Fahrenheit (F) => Kelwina (K). 
                        C = 0; C = (F - 32) / 1.8;          //Fahrenheit (F) => Celsjusza (C). 
                      } 
      //Pokaż. 
        if(Nr == 0) { 
          Pokaz(true, "Celsjusza (C) ", C); 
          Pokaz(false, "Kelwina (K)   ", K); 
          Pokaz(false, "Fahrenheit (F)", F); 
        } else if(Nr == 1) { 
                 Pokaz(false, "Celsjusza (C) ", C); 
                 Pokaz(true, "Kelwina (K)   ", K); 
                 Pokaz(false, "Fahrenheit (F)", F); 
               } else if(Nr == 2) { 
                        Pokaz(false, "Celsjusza (C) ", C); 
                        Pokaz(false, "Kelwina (K)   ", K); 
                        Pokaz(true, "Fahrenheit (F)", F); 
                      } 
      cout << "\n"; 
      KodKlaw = 0; 
      KodKlaw = getch(); 
      if((KodKlaw == 0) || (KodKlaw == 224)) { 
        KodKlaw = 0; 
        KodKlaw = getch()+224; 
      } 
        if((KodKlaw > 47) && (KodKlaw < 58) 
        || (KodKlaw == 46) || (KodKlaw == 45)) { DaneLiczbowe += (char)KodKlaw; } //Klawisze od 0 do 9, znak "." i "-". 
        else if(KodKlaw == 8) { DaneLiczbowe = ""; } //Klawisz BACKSPACE. 
             else if(KodKlaw == 9) { //Klawisz TAB. 
                    Nr++; 
                    if (Nr > 2) { Nr = 0; } 
                    DaneLiczbowe = ""; 
                  } 
    } while(KodKlaw != 27); 
  cout << "\n"; 
} 