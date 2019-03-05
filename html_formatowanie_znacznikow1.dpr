program html_formatowanie_znacznikow1; 
{ 
 --== HTML Formatowanie znacznik�w 1 - �wiczenie==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Turbo Delphi 2006 - Console Application 
} 
{$APPTYPE CONSOLE} 
uses SysUtils; 
{Funkcje dla programu.} 
function tHtmlFormatowanieZnacznikow(Str :String):String; 
var Tekst :String; 
    I, L  :Integer; 
begin 
  Tekst:= ''; 
  L:= 0; 
  Str:= Trim(Str); 
  if(Str<>'') then begin 
    for I:= 1 to Length(Str) do begin 
      {Wyb�r formatowania.} 
      if(Str[I] = '>') or (Str[I] = '?') then L:= 0 
      else if(Str[I] = '<') then L:= 1 
           else if((Str[I] = '"') and (L = 1)) then begin 
                  L:= 0; L:= 2; 
                end else if((Str[I] = '"') and (L = 2)) then begin 
                           L:= 0; L:= 1; 
                         end; 
      {Formatowanie znaczk�w.} 
      if(L = 1) then Tekst:= Tekst+AnsiUpperCase(Str[I]) 
      else if(L = 2) then Tekst:= Tekst+AnsiLowerCase(Str[I]) 
           else Tekst:= Tekst+Str[I]; 
    end; 
    Result:= Tekst; 
  end else Result:= ''; 
end; {tHtmlFormatowanieZnacznikow} 
{Blok startowy/g��wny.} 
const T = '<html><head><meta charset="utF-8">To jest kodowanie polskich liter.' 
         +'<meta name="KEYWORDS" content="FOR,' 
         +' P�tla, Lista, ComboBox, Select">' 
         +'To jest PRACA, tak JEST. Dobre!' 
         +'<input type="submit" value="prze�lij" name="button1">' 
         +'<INPUT TYPE="RESET" VALUE="RESETUJ" NAME="BUTTONRESET">' 
         +'Chyba wszystko jest OK!' 
         +'<?php eCHo "> ".$I; ?>php-PHP-pHp-PhP</body>'; 
begin 
  Writeln('--== HTML Formatowanie znacznikow 1 - Cwiczenie ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  {HTML Formatowanie znacznik�w.} 
  Writeln; 
  Writeln('Tekst zrodlowy:'); 
  Writeln(T); 
  Writeln; Writeln; 
  Writeln('Tekst po zmianie:'); 
  Writeln('[', tHtmlFormatowanieZnacznikow(T), ']'); 
  {Czekaj, a� u�ytkownik naci�nie klawisz ENTER.} 
  Writeln; Writeln; Writeln; 
  Write('Nacisnij klawisz ENTER...'); Readln; 
end. 