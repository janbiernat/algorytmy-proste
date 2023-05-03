#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <fstream>
/*--== Ocena procentowa ==--
Copyright (c)by Jan T. Biernat*/
using namespace std;
int StrToInt(string OdpDB = "") {
  string Odp = "";
  if(OdpDB != "") {
    Odp = OdpDB.substr(0, 5);
    return atoi(Odp.c_str());
  } else { return -1; }
}
//=
//Blok główny (startowy).
int main(int argc, char *argv[]) {
  cout << "--== Ocena procentowa ==--\n";
  cout << "Copyright (c)by Jan T. Biernat\n";
  cout << "\n";
  cout << "UWAGA: Program obsluguje tylko pliki tekstowe!\n\n";
  //=
    string Dane = "", Tym = "", Ocena = "";
    string Tablica[3];
    short Licznik = 0, Procent = 0;
    int OdpDB = 0, Pytan = 0;
  //=
    fstream PlikDane(argv[1], ios::in);
    if(PlikDane != NULL) {
      cout << "Odczytany plik: \"" << argv[1] << "\".\n\n";
      cout.width(79); cout.fill('-'); cout << "-";
      cout << "\n| Nazwisko i imie ";
        cout.width(23); cout.fill(' '); cout << " ";
        cout << " | Odp. db | Pytan | Procent | Ocena |\n";
      cout.width(79); cout.fill('-'); cout << "-";
      cout << "\n";
      while(getline(PlikDane, Dane)) {
        //Pobranie danych z pliku tekstowego.
          Tym = ""; Licznik = 0;
          for(int I = 0; I < 3; I++) { Tablica[I] = ""; }
          for(int I = 0; I < Dane.length()+1; I++) {
            if((Dane[I] == ';') || (Dane.length() == I)) {
              if(Tym != "") {
                Tablica[Licznik] = Tym;
                if(Licznik > 1) {
                  //Nazwisko i imię [k1].
                    cout << "| " << Tablica[0].substr(0, 38);
                    cout.width(39-Tablica[0].length()); cout.fill(' '); cout << " ";
                    cout << " | ";
                  //Odp. db [k2] - Ilość poprawnych odpowiedzi.
                    OdpDB = 0; OdpDB = StrToInt(Tablica[1]);
                    cout.width(7); cout.fill(' '); cout << OdpDB << " | ";
                  //Pytan [k3] - Maksymalna ilość pytań.
                    Pytan = 0; Pytan = StrToInt(Tablica[2]);
                    cout.width(5); cout.fill(' ');  cout  << Pytan << " | ";
                  //Procent [k4] - Ile procent zdobył uczeń/student.
                    Procent = 0; if(Pytan > 0) { Procent = ((100*OdpDB)/Pytan); }
                    cout.width(6); cout.fill(' ');
                    if(Procent > 0) { cout  << Procent; } else { cout << "?"; }
                    cout << "% | ";
                  //Ocena [k5] - Wyświetl ocenę.
                    Ocena = ""; 
                    if(Procent > 95) { Ocena = "5.0"; }
                    else if(Procent > 87) { Ocena = "4.5"; } 
                         else if(Procent > 80) { Ocena = "4.0"; } 
                              else if(Procent > 70) { Ocena = "3.5"; }
                                   else if(Procent > 60) { Ocena = "3.0"; } 
                                        else if(Procent > 50) { Ocena = "2.0"; } 
                                             else if(Procent <= 50) { Ocena = "1.0"; }
                    //Wyświetl ocenę.
                      cout.width(5); cout.fill(' ');
                      if(Procent > 0) { cout  << Ocena; } else { cout << "?"; }
                      cout << " |\n";
                }
                Licznik++;
              }
              Tym = "";
            } else { Tym += Dane[I]; }
          } 
      } 
      cout.width(79); cout.fill('-'); cout << "-";
    } else {
             cout << "BLAD -?Brak pliku na dysku!\n\n";
             cout << "\nFormat pliku tekstowego:\n";
             cout << "Dane w pliku musza byc rozdzielone srednikiem (tj. znakiem \";\").\n";
             cout << "Np.: nazwisko_i_imie;ilosc_poprawnych_odpowiedzi;maksymalna_ilosc_pytan\n\n";
             cout << "Przykladowe dane:\n";
             cout << "Kowalski Jan;5;10\n";
             cout << "Jarzabek Marta;8;10\n";
             cout << "Kwiatek Zuzanna;10;10";
           }
  //=
  //Poczekaj, aż użytkownik naciśnie dowolny klawisz.
    cout <<"\n\n\n"; cout << "Nacisnij dowolny klawisz..."; getch();
}