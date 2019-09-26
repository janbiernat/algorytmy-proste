#include <iostream> 
#include <conio.h> 
/*--== Średnia arytmetyczna ocen ==-- 
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
    5,0: 2 (16,67%) 
    4,5: 1 (8,33%) 
    4,0: 2 (16,67%) 
    3,5: 1 (8,33%) 
    3,0: 2 (16,67%) 
    2,0: 3 (25%) 
    1,0: 1 (8,33%) 
*/ 
using namespace std; 
//Blok główny/startowy. 
int main() { 
  cout <<"--== Srednia arytmetyczna ocen ==--\n"; 
  cout <<"Copyright (c)by Jan T. Biernat\n\n"; 
  cout <<"\nUWAGA: Program jest niezabezpieczony.\n\n\n"; 
  //Deklaracja zmiennych. 
    int LicznikPytan = 0, LicznikOcen = 0; 
    float Ocena = 0, Suma = 0; 
    int Oceny[11]; 
  //Wyczyszczenie danych 
    for(int I = 0; I < 11; I++) { Oceny[I] = 0; } 
  //Pobierz dane z klawiatury. 
    do { 
      LicznikPytan++; //Inkrementacja, czyli zwiększenie zmiennej 
                      //liczbowej całkowitej o wartość 1. 
      cout << "Ocena " << LicznikPytan << ": "; Ocena = 0; cin >> Ocena; 
      if(Ocena > 0) { 
        //Jeżeli podana ocena jest większa od 0, to wykonaj poniższe instrukcje. 
          if(Ocena < 7) { 
            //Jeżeli podana ocena jest mniejsza od 7, to wykonaj poniższe instrukcje. 
              LicznikOcen++; //Licz ilość podanych ocen. 
              if(Ocena == 1) { Oceny[0]++; } 
              else if(Ocena == 1.5) { Oceny[1]++; } 
                   else if(Ocena == 2) { Oceny[2]++; } 
                        else if(Ocena == 2.5) { Oceny[3]++; } 
                             else if(Ocena == 3) { Oceny[4]++; } 
                                  else if(Ocena == 3.5) { Oceny[5]++; } 
                                       else if(Ocena == 4) { Oceny[6]++; } 
                                            else if(Ocena == 4.5) { Oceny[7]++; } 
                                                 else if(Ocena == 5) { Oceny[8]++; } 
                                                      else if(Ocena == 5.5) { Oceny[9]++; } 
                                                           else if(Ocena == 6) { Oceny[10]++; } 
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
      cout << "\n  1.0: " << Oceny[0] << " (" << (Oceny[0]*100/LicznikOcen) << "%)"; 
      cout << "\n  1.5: " << Oceny[1] << " (" << (Oceny[1]*100/LicznikOcen) << "%)"; 
      cout << "\n  2.0: " << Oceny[2] << " (" << (Oceny[2]*100/LicznikOcen) << "%)"; 
      cout << "\n  2.5: " << Oceny[3] << " (" << (Oceny[3]*100/LicznikOcen) << "%)"; 
      cout << "\n  3.0: " << Oceny[4] << " (" << (Oceny[4]*100/LicznikOcen) << "%)"; 
      cout << "\n  3.5: " << Oceny[5] << " (" << (Oceny[5]*100/LicznikOcen) << "%)"; 
      cout << "\n  4.0: " << Oceny[6] << " (" << (Oceny[6]*100/LicznikOcen) << "%)"; 
      cout << "\n  4.5: " << Oceny[7] << " (" << (Oceny[7]*100/LicznikOcen) << "%)"; 
      cout << "\n  5.0: " << Oceny[8] << " (" << (Oceny[8]*100/LicznikOcen) << "%)"; 
      cout << "\n  5.5: " << Oceny[9] << " (" << (Oceny[9]*100/LicznikOcen) << "%)"; 
      cout << "\n  6.0: " << Oceny[10] << " (" << (Oceny[10]*100/LicznikOcen) << "%)"; 
    } 
  //Naciśnij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; 
    getch(); 
} 