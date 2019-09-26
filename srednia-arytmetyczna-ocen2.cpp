#include <iostream> 
#include <conio.h> 
/*--== Średnia arytmetyczna ocen - w2 ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Treść zadania: 
  Napisz program do obliczania średniej arytmetycznej podanych ocen cząstkowych. 
  Program musi spełniać następujące kryteria: 
  > Program do obliczeń ma przyjmować tylko liczby z przedziału od 1 do 6. 
  > Po uruchomieniu użytkownik może od razu wprowadzać oceny. 
  > Zakończenie wprowadzania ocen następuje po wpisaniu cyfry mniejszej od 1 (np. liczby 0). 
  > Po zakończeniu wprowadzania ocen program ma wyświetlić raport zawierający: 
    - Sumę podanych ocen. 
    - Ilość podanych ocen. 
    - Średnią podanych ocen. 
    - Procentowy udział poszczególnych ocen w stosunku do wszystkich podanych ocen. 
 
  Poniżej przedstawiono przykładowy raport: 
  Raport: 
  Suma podanych ocen wynosi   : 30,5 
  Podanych ocen jest          : 12 
  Średnia podanych ocen wynosi: 2,54 
  Ilość poszczególnych ocen: 
    5.0: 2 (16,67%) 
    4.5: 1 (8,33%) 
    4.0: 2 (16,67%) 
    3.5: 1 (8,33%) 
    3.0: 2 (16,67%) 
    2.0: 3 (25%) 
    1.0: 1 (8,33%) 
*/ 
using namespace std; 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Srednia arytmetyczna ocen - w2 ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja stałych. 
    const short int OcenyIlosc = 11; 
  //Deklaracja zmiennych. 
    int LicznikPytan = 0, LicznikOcen = 0; 
    float Ocena = 0, Suma = 0; 
    float OcenyLista[OcenyIlosc] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6 }; 
    int Oceny[OcenyIlosc]; 
    short int OcenaPrawdlowa = 0; //0 - oznacza ocenę nieprawidłową. 
  //Wyzerowanie zmiennej tablicowej "Oceny". 
    for(int I = 0; I < OcenyIlosc; I++) { Oceny[I] = 0; } 
  //Pobierz dane z klawiatury. 
    do { 
      LicznikPytan++; //Inkrementacja, czyli zwiększenie zmiennej 
                      //liczbowej całkowitej o wartość 1. 
      cout << "Ocena " << LicznikPytan << ": "; 
      Ocena = 0; 
      cin >> Ocena; 
      if(Ocena > 0) { 
        //Jeżeli podana ocena jest większa od 0, to wykonaj poniższe instrukcje. 
          //Sprawdź, czy ocena została prawidłowa wpisana przez użytkownika. 
          OcenaPrawdlowa = 0; 
          for(int Spr = 0; Spr < OcenyIlosc; Spr++) { 
            if(Ocena == OcenyLista[Spr]) { OcenaPrawdlowa = 1; break; } 
          } 
          if(OcenaPrawdlowa == 1) { 
            //Jeżeli podana ocena jest prawidłowa, to wykonaj poniższe instrukcje. 
              LicznikOcen++; //Licz ilość podanych ocen. 
              for(int S = 0; S < OcenyIlosc; S++) { 
                if(Ocena == OcenyLista[S]) { Oceny[S]++; } 
              } 
              Suma = Suma+Ocena; 
          } else { cout << "BLAD -?Ocena z poza zakresu!\n\n"; } 
      } 
    } while(Ocena > 0); 
  //Raport 
    if(LicznikOcen > 0) { 
      //Jeżeli użytkownik podał przynajmniej 1 ocenę, to wykonaj poniższe instrukcje. 
        cout << "\n\nRaport:"; 
        cout << "\n  Suma podanych ocen   : " << Suma; 
        cout << "\n  Ilosc podanych ocen  : " << LicznikOcen; 
        cout << "\n  Srednia podanych ocen: " << (Suma/LicznikOcen); 
        cout << "\n\nUdzial poszczegolnych ocen: "; 
        for(int S = 0; S < OcenyIlosc; S++) { 
          cout << "\n"; 
          if(S % 2 == 0) { cout << "  "; } 
          cout << OcenyLista[S] << ": " << Oceny[S] << " (" << (Oceny[S]*100/LicznikOcen) << "%)"; 
        } 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 