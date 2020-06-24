#include <iostream> 
#include <conio.h> 
#include <cstdlib> 
#include <windows.h> 
using namespace std; 
/*--== Tablica ASCII w konsoli 2 ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Tablica kodów ASCII (ang. American Standard Code for Information 
 Interchange) stanowi zestaw kodów używanych do reprezentacji znaków 
 (liter, cyfr, znaków specjalnych np. @, $, # itp.). 
 Każdy znak w tabeli ma przyporządkowaną wartość liczbową dziesiętną, 
 np. litera duża "A"  ma wartość dziesiętną 65. 
 Tablica ASCII składa się 255 znaków, które podzielone są na kilka grup: 
   > Od 0 do 31 - znaki sterujące np. klawiszem ENTER, TAB, drukarką; 
   > Od 32 do 126 - znaki podstawowe; 
   > Od 127 do 255 - znaki dodatkowe (zawierają znaki graficzne, 
                     oraz znaki polskie itp.). 
 Podstawowa tabela ASCII (tj. od 0 do 127) nie podlega wymianie, 
 natomiast rozszerzona tablica (tj. od 128 do 255) może ulegać zmianie 
 np. w celu zakodowania polskich znaków. 
*/ 
int main() { 
  //Deklaracja zmiennych znakowych. 
    char Hex[32], Bin[32]; 
    short int ZnakiIlosc = 0; 
    HANDLE UchwytDoKonsoli; //3. 
    UchwytDoKonsoli = GetStdHandle(STD_OUTPUT_HANDLE); 
    int ZnakWybLP = 0, ZnakWybGD = 0, ZnakNr = 0, KodKlaw = 0; 
  //Tablica kodów ASCII od znaku pustego (tzw. spacji). 
    do { 
      system("cls"); 
      cout << "--== Tablica ASCII w konsoli 2 ==--\n"; 
      cout << "Copyright (c)by Jan T. Biernat\n\n"; 
      cout << "\n "; 
      for(int I = 0; I < 222; I++) { 
        SetConsoleTextAttribute(UchwytDoKonsoli, 7); 
        ZnakNr = 0; ZnakNr = ZnakWybLP+(ZnakWybGD*37); 
        if(I == ZnakNr) { SetConsoleTextAttribute(UchwytDoKonsoli, 112); } 
        cout << char(32+I); 
        SetConsoleTextAttribute(UchwytDoKonsoli, 7); 
        ZnakiIlosc++; 
        if(ZnakiIlosc > 36) { ZnakiIlosc = 0; cout << "\n "; } 
      } 
      //Informacja o wybranym znaku. 
        for(int I = 0; I < 37; I++) { cout << "-"; } 
        cout << "\n Znak: \"" << char(32+ZnakNr) << "\"  Kod: "; 
        cout.width(3); cout << (32+ZnakNr); 
        cout << "  Hex: " << itoa((32+ZnakNr), Hex, 16); 
        cout << "\n Bin: " << itoa((32+ZnakNr), Bin, 2); 
        cout << "\n"; 
      //Obsługa klawiszy strzałkowych/kierunkowych. 
        KodKlaw = 0; 
        KodKlaw = getch(); 
        if((KodKlaw == 0) || (KodKlaw == 224)) { 
          KodKlaw = 0; 
          KodKlaw = getch()+224; 
        } 
        if(KodKlaw == 299) { 
          //W lewo. 
          ZnakWybLP--; 
          if(ZnakWybLP < 0) { ZnakWybLP = 0; } 
        } else if(KodKlaw == 301) { 
                 //W prawo. 
                 ZnakWybLP++; 
                 if(ZnakWybLP > 36) { ZnakWybLP = 36; } 
               } else if(KodKlaw == 296) { 
                        //W górę. 
                        ZnakWybGD--; 
                        if(ZnakWybGD < 0) { ZnakWybGD = 0; } 
                      } else if(KodKlaw == 304) { 
                               //W dół. 
                               ZnakWybGD++; 
                               if(ZnakWybGD > 5) { ZnakWybGD = 5; } 
                             } 
    } while(KodKlaw != 27); 
    cout << "\n"; 
} 