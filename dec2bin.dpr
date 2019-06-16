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
  {Pobranie liczby od u¿ytkownika.} 
    Write('Podaj liczbe dziesietna: '); 
    Liczba:= 0; {Przypisanie do zmiennej liczbowej "Liczba" wartoœæ zerowej.} 
    Readln(Liczba); //6 
  {Przeliczenie liczby 10 na liczbê 2.} 
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
  {Poczekaj, a¿ u¿ytkownik naciœnie klawisz ENTER.} 
    Writeln; Writeln; 
    Write('Nacisnij klawisz ENTER...'); 
    Readln; //15 
{ 
  Legenda: 
    1) Modu³ zawiera procedury i funkcje do obs³ugi m.in. ekranu i klawiatury. 
    2) Zadeklarowanie zmiennej liczbowej d³ugiej "Liczba". 
    3) Zadeklarowanie zmiennej tekstowej "Wynik". 
    4) Wyœwietlenie na ekranie tekstu znajduj¹cego siê pomiêdzy apostrofami. 
    5) Przesuniêcie kursora do kolejnej linii (kolejnego wiersza). 
    6) Pobranie danych z klawiatury i przypisanie ich do zmiennej liczbowej "Liczba". 
    7) Wyœwietlenie na ekranie zawartoœci zmiennej liczbowej "Liczba" 
       oraz tekstu znajduj¹cego siê pomiêdzy apostrofami. 
    8) Sprawdzenie czy podana liczba przez u¿ytkownika jest wiêksza od wartoœci 0. 
       Je¿eli tak, to wykonaj poni¿szy kod. 
    9) Wyczyœæ zawartoœæ zmiennej tekstowej "Wynik". 
   10) Sprawdzenie, czy po przecinku jest jakaœ wartoœæ. 
       Je¿eli t¹ wartoœci¹ jest zero, to wykonaj instrukcje po s³owie THEN (tj. kod przed instrukcj¹ ELSE). 
       W innym przypadku wykonaj instrukcje po s³owie ELSE. 
   11) Instrukcje po s³owie ELSE wykonywane s¹, gdy warunek (IF) w linii 21 jest nieprawdziwy. 
   12) Przepisanie wyniku z dzielenie bez reszty do zmiennej liczbowej "Liczba". 
       Przed przepisanie wyniku z dzielenia nastêpuje wykonanie dzia³ania, które polega 
       na podzieleniu bez reszty liczby przechowywanej w zmiennej liczbowej "Liczba" przez wartoœæ 2. 
   13) Sprawdzenie, czy zmienna liczbowa "Liczba" przechowuje wartoœæ 0. 
       Je¿eli tak, to spe³niony jest warunek i nale¿y opuœciæ pêtlê REPEAT ... UNTIL. 
   14) Wyœwietl uzyskany wynik w systemie liczbowym dwójkowym (tj. binarnym). 
   15) Czekaj, a¿ u¿ytkownik naciœnie klawisz ENTER. 
} 
end. 