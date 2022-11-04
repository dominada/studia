with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Randompackage; use Randompackage;

package body zad3 is
   
   task body zadanie3 is
      D: Duration;
      czas,czas_max, i : Integer;
   begin
      czas_max := 100;
      i := 1;
      loop
         czas := RandomInt(czas_max);
         D := Duration(Float(czas)/100.0);
         Set_Col(col);
         Put("Zadanie ");
         Put(nr);
         Put(" po raz: ");
         Put(i, 1);
         delay D;
         exit when i=10;
         i := i +1;
      end loop;
   end zadanie3;
   
end zad3;
