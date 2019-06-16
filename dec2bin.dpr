program dec2bin; 
{$APPTYPE CONSOLE} 
uses SysUtils; //1 
var Liczba :Longint; //2 
    Wynik  :String;  //3 
begin 
  Writeln('--== Dec2Bin ==--'); //4 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln('Systemy liczbowe: Dziesietny -> Dwojkowy'); 
  Writeln; //5 
  Writeln; 
  {Pobranie liczby od użytkownika.} 
    Write('Podaj liczbe dziesietna: '); 
    Liczba:= 0; {Przypisanie do zmiennej liczbowej "Liczba" wartości zerowej.} 
    Readln(Liczba); //6 
  {Przeliczenie liczby 10 na liczbę 2.} 
    Write(Liczba, ' = '); //7 
    if(Liczba > 0) then begin //8 
      Wynik:= ''; //9 
      repeat 
        if(Liczba mod 2 = 0) then Wynik:= '0'+Wynik //10 
        else Wynik:= '1'+Wynik; //11 
        Liczba := Liczba div 2; //12 
      until(Liczba = 0); //13 
      Write(Wynik); //14 
    end; 
  {Poczekaj, aż użytkownik naciśnie klawisz ENTER.} 
    Writeln; Writeln; 
    Write('Nacisnij klawisz ENTER...'); 
    Readln; //15 
{ 
  Legenda: 
    1) Moduł zawiera procedury i funkcje do obsługi m.in. ekranu i klawiatury. 
    2) Zadeklarowanie zmiennej liczbowej długiej "Liczba". 
    3) Zadeklarowanie zmiennej tekstowej "Wynik". 
    4) Wyświetlenie na ekranie tekstu znajdującego się pomiędzy apostrofami. 
    5) Przesunięcie kursora do kolejnej linii (kolejnego wiersza). 
    6) Pobranie danych z klawiatury i przypisanie ich do zmiennej liczbowej "Liczba". 
    7) Wyświetlenie na ekranie zawartości zmiennej liczbowej "Liczba" 
       oraz tekstu znajdującego się pomiędzy apostrofami. 
    8) Sprawdzenie czy podana liczba przez użytkownika jest większa od wartości 0. 
       Jeżeli tak, to wykonaj poniższy kod. 
    9) Wyczyść zawartość zmiennej tekstowej "Wynik". 
   10) Sprawdzenie, czy po przecinku jest jakaś wartość. 
       Jeżeli tą wartością jest zero, to wykonaj instrukcje po słowie THEN (tj. kod przed instrukcją ELSE). 
       W innym przypadku wykonaj instrukcje po słowie ELSE. 
   11) Instrukcje po słowie ELSE wykonywane są, gdy warunek (IF) w linii 21 jest nieprawdziwy. 
   12) Przepisanie wyniku z dzielenie bez reszty do zmiennej liczbowej "Liczba". 
       Przed przepisanie wyniku z dzielenia następuje wykonanie działania, które polega 
       na podzieleniu bez reszty liczby przechowywanej w zmiennej liczbowej "Liczba" przez wartość 2. 
   13) Sprawdzenie, czy zmienna liczbowa "Liczba" przechowuje wartość 0. 
       Jeżeli tak, to spełniony jest warunek i należy opuścić pętlę REPEAT ... UNTIL. 
   14) Wyświetl uzyskany wynik w systemie liczbowym dwójkowym (tj. binarnym). 
   15) Czekaj, aż użytkownik naciśnie klawisz ENTER. 
} 
end. 
