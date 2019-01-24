program statystyka_wyrazow;
{
 --== Statystyka wyrazow ==--
 Copyright (c)by Jan T. Biernat
 Borland Turbo Pascal 7.0 for DOS (Kurs podstawowy)
}
uses crt; {CRT - biblioteka do obslugi m.in. klawiatury i ekranu.}
{iZnakiBezSpacji - Podaje ilosc znakow bez spacji w podanym tekscie.}
function iZnakiBezSpacji(Tekst :String):Integer;
var T :String;
    I :Integer;
begin
  T:= ''; {Wyczyszczenie zmiennej tekstowej "T".}
  for I:= 1 to Length(Tekst) do begin
    if(Tekst[I] <> CHR(32)) then T:= T+Tekst[I];
  end;
  iZnakiBezSpacji:= Length(T);
end;
{iWyrazowJest - Podaje ilosc wyrazow w podanym tekscie (ciagu znakow).}
function iWyrazowJest(Tekst :String):Integer;
var I, L :Integer;
begin
  Tekst:= Tekst+CHR(32); {Dodanie do podanego ciagu znakow, znaku spacji.}
  L:= 0; {Wyzerowanie zmiennej liczbowej "L".}
  for I:= 1 to Length(Tekst) do begin
    if((Tekst[I]<>CHR(32)) and (Tekst[I+1] = #32)) then L:= L+1;
  end;
  iWyrazowJest:= L;
end;
{Blok startowy/glowny.}
const T1 = 'Borland Turbo Pascal 7.0 for DOS! f';
begin
  Writeln('--== Statystyka wyrazow ==--');
  Writeln('Copyright(c)by Jan T. Biernat');
  Writeln;
  {Statystyka wyrazow - raport.}
  Writeln('Tekst "', T1, '" posiada: ');
  Writeln('a) wyrazow jest      : ', iWyrazowJest(T1));
  Writeln('b) znakow bez spacji : ', iZnakiBezSpacji(T1));
  Writeln('c) znakow ze spacjami: ', Length(T1));
  {Czekaj, az zostanie nacisniety klawisz ENTER. }
  Writeln; Writeln; Write('Nacisnij klawisz ENTER...'); ReadLn;
end.
