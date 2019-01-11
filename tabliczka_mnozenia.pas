program tabliczka_mnozenia; 
{ 
 -- Podstawowy kurs Turbo Pascal'a 7.0 -- 
 Copyright(c) by Jan T. Biernat 
 ======================================== 
 Program: Tabliczka Mnozenia 
} 
uses Crt; {CRT - biblioteka zawiera funkcje i procedury 
                 do obslugi m.in. klawiatury i ekranu.} 
procedure KT_KursorTekst(X, Y, TS :Shortint; Str :String); 
var I    :Shortint; 
    tSpc :String; 
begin 
  {KT_KursorTekst.} 
  tSpc:= ''; 
  for I:= 0 to TS do 
    tSpc:= tSpc+CHR(32); 

  TextBackGround(Black); 
  GotoXY(X, Y); 
  Write(tSpc); 
  TextColor(White); 
  GotoXY(X, Y); 
  Write(Str); 
end; 

function KN_KlawiszNacisnij:Integer; 
var iKey :Integer; 
      Ch :Char; 
begin 
  {KN_KlawiszNacisnij.} 
  repeat until KeyPressed; 
    Ch:= ReadKey; 
    iKey:= 0; iKey:= Ord(Ch); 
    if (Ch = #0) then begin 
      Ch:= ReadKey; {trap function keys.} 
      iKey:= Ord(Ch)+300; 
    end; 
  KN_KlawiszNacisnij:= iKey; 
end; 

function Klawisze(X, Y, TS :Shortint; Str :String):String; 
var Tekst :String; 
     iKey :Integer; 
begin 
  {Klawisze - obsluga klawiatury.} 
  TextBackGround(Black); 
  TextColor(White); 
  GotoXY(X, Y); 
  Write(Str+':'); 
  Tekst:= ''; 
  repeat 
    KT_KursorTekst(X+Length(Str)+1, Y, TS, Tekst); 
    iKey:= 0; iKey:= KN_KlawiszNacisnij; 
    if (iKey = 8) then begin 
      Tekst:= Copy(Tekst, 1, Length(Tekst)-1); 
    end 
    else if(iKey = 27) then 
         begin 
           Klawisze:= ''; 
         end 
         else if(iKey = 13) then 
              begin 
                Klawisze:= Tekst; 
              end 
              else begin 
                     if(Length(Tekst) < TS) then 
                     begin 
                       if((iKey > 47) and (iKey < 58)) then 
                         Tekst:= Tekst+CHR(iKey); 
                     end; 
                   end; 
  until (iKey = 27) or (iKey = 13); 
  TextBackGround(Black); 
  TextColor(LightGRAY); 
end;

procedure MT_Cyfry(X, Y, Cyfra :Shortint); 
const 
  tCyfry1 :array[0..10] of String = ( 
    '   ####        ##        ###       ####          ##  ', 
    '  ######   ######      #######  #########       ###  ', 
    ' ##    ##  ##  ##     ##     ## ##     ##      ####  ', 
    '##      ##     ##     ##      #        ##     ## ##  ', 
    '##      ##     ##            ##     #####    ##  ##  ', 
    '##      ##     ##          ###      #####   ##   ##  ', 
    '##      ##     ##         ##           ### ##    ##  ', 
    '##      ##     ##       ###             ## ######### ', 
    ' ##    ##      ##      ##       #      ###       ##  ', 
    '  ######   ########## ######### #########      ##### ', 
    '   ####    ########## #########    ####        ##### '); 

  tCyfry2 :array[0..10] of String = ( 
    ' #######        #### #########    ####     ####    ', 
    ' #######     ####### #########  ########  #######  ', 
    ' #          ###      #      ## ##     ## ##     ## ', 
    ' #         ##               ## ##      # #      ## ', 
    ' ########  ## ####         ##   ##   ### ##     ## ', 
    ' #     ##  #########       ##   #######  ###  #### ', 
    '        ## ###    ##      ##   ###    ##   ##### # ', 
    '        ## ##      #      ##   ##      #        ## ', 
    '##     ### ##     ##     ##    ##     ##       ##  ', 
    '#########   #######      ##     #######  #######   ', 
    '   ####       ####       #        ####    ####     '); 
var iKol :Shortint; 
       I :Shortint; 
begin 
  {MT_Cyfry} 
  TextColor(LightBLUE); 
  for I:= 0 to 10 do begin 
    if(Cyfra = 0) or (Cyfra = 5) then iKol:= 1; 
    if(Cyfra = 1) or (Cyfra = 6) then iKol:= 11; 
    if(Cyfra = 2) then iKol:= 22; 
    if(Cyfra = 3) then iKol:= 33; 
    if(Cyfra = 4) then iKol:= 43; 
    if(Cyfra = 7) then iKol:= 21; 
    if(Cyfra = 8) then iKol:= 31; 
    if(Cyfra = 9) then iKol:= 42; 
    GotoXY(X, Y+I); 
    if((Cyfra >-1) and (Cyfra < 5)) then 
      Write(Copy(tCyfry1[I], iKol, 11)) 
    else 
    if((Cyfra >4) and (Cyfra < 10)) then 
      Write(Copy(tCyfry2[I], iKol, 11)); 
  end; 
end; 

procedure MT_ZnakRazy(X, Y: Shortint); 
const 
  tRazy :array[0..7] of String = ( 
     '#####  #### ', 
     '#####  #### ', 
     '  ###  ##   ', 
     '    ####    ', 
     '   #####    ', 
     '  ##   ###  ', 
     '#####  #####', 
     '#####  #####'); 
var I :Shortint; 
begin 
  {MT_ZnakRazy} 
  TextColor(LightBLUE); 
  for I:= 0 to 7 do begin 
    GotoXY(X, Y+I); 
    Write(tRazy[I]); 
  end; 
end; 

function IntToStr(X :Longint):String; 
var tText :String; 
begin 
  {IntToStr} 
  STR(X, tText); 
  IntToStr:= tText; 
end; 

function StrToInt(Str :String):Longint; 
var  iNumber :Longint; 
    iErrCode :Integer; 
begin 
  {StrToInt}
  VAL(Str, iNumber, iErrCode); 
  StrToInt:= iNumber; 
end; 

function fSpc(iSpc :Shortint):String; 
var I :Shortint; 
    S :String; 
begin 
  {fSpc} 
  S:= ''; 
  for I:= 0 to iSpc-1 do S:= S+CHR(32); 
  fSpc:= S; 
end; 
{Blok glowny.} 
var iLicz1, iLicz2, iWynik, TT :Shortint; 
               tLiczba, tWynik :String; 
begin 
  TextBackGround(Black); 
  TextColor(LightGRAY); 
  ClrScr; {Wyczyszczenie ekranu.} 
  Writeln('Tabliczka Mnozenia (c)by Jan-Tadeusz Biernat'); 
  Writeln; 
  repeat 
    Randomize; 
    iLicz1:= 0; 
    iLicz1:= Random(10); 
    iLicz2:= 0; iLicz2:= Random(10); 
    iWynik:= 0; iWynik:= iLicz1*iLicz2; 
    if(iLicz1 > 9) then begin 
      tLiczba:= ''; tLiczba:= IntToStr(iLicz1); 
      MT_Cyfry(5, 5, StrToInt(Copy(tLiczba, 1, 1))); 
      MT_Cyfry(15, 5, StrToInt(Copy(tLiczba, 2, 1))); 
    end 
    else 
    begin 
      MT_Cyfry(15, 5, iLicz1); 
    end; 
    MT_ZnakRazy(32, 8); 
    if(iLicz2 > 9) then begin
      tLiczba:= ''; tLiczba:= IntToStr(iLicz2); 
      MT_Cyfry(48, 5, StrToInt(Copy(tLiczba, 1, 1))); 
      MT_Cyfry(59, 5, StrToInt(Copy(tLiczba, 2, 1))); 
    end 
    else 
    begin 
      MT_Cyfry(48, 5, iLicz2); 
    end; 
    tWynik:= ''; tWynik:= Klawisze(25, 19, 3, 'Twoja odpowiedz'); 
    if(tWynik<>'') then begin 
      GotoXY(47, 20); 
      if(StrToInt(tWynik) = iWynik) then Write('Bardzo dobrze!') 
      else Write('Zle!'); 
      Delay(999); 
      GotoXY(47, 20); 
      Write(fSpc(14)); 
    end; 
    {CLS} 
    for TT:= 0 to 15 do begin
      GotoXY(4, 4+TT); 
      Write(fSpc(67)); 
    end; 
  until (tWynik = ''); 
  TextBackGround(Black); 
  TextColor(LightGRAY); 
  ClrScr; 
  Writeln('Pa pa'); 
end. 