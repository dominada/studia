//Zadanie 2.1
//Dominik Adamczyk IX1N1
#include <iostream>
#include<stdlib.h>

using namespace std;

typedef struct lista lista;

struct lista
{
int wartosc;
lista* nastepny;
};


//Wyœwietlanie
void wyswietlanie(lista* pierwszy){

lista* tymczasowy = pierwszy;

if(tymczasowy == NULL)

return;

do {

printf("%d ", tymczasowy->wartosc);

tymczasowy = tymczasowy->nastepny;

} while(tymczasowy != NULL);

printf("\n");

}





//œrednia
void srednia(lista* pierwszy){

lista* tymczasowy = pierwszy;
float srednia_war = 0;
int ilosc = 0;

if(tymczasowy == NULL)

return;

do {
ilosc++;
srednia_war += tymczasowy->wartosc;

tymczasowy = tymczasowy->nastepny;

} while(tymczasowy != NULL);
srednia_war = srednia_war / ilosc;
printf("\n");
cout << "Srednia: " << srednia_war;
printf("\n\n");

}


//Dodawanie
void dodawanie_koniec(lista** pierwszy, int wartosc){

lista* ostatni = *pierwszy;

while (ostatni->nastepny != NULL) {

ostatni = ostatni->nastepny;

};

lista* nowy = (lista*)malloc(sizeof(lista));

nowy->wartosc = wartosc;

nowy->nastepny = NULL;

ostatni->nastepny = nowy;

}


//Usuñ
void usun(lista** pierwszy, int wartosc){

lista* obecny = *pierwszy;

lista* poprzedni = obecny;

obecny = obecny->nastepny;

do {

if(obecny->wartosc == wartosc){

poprzedni->nastepny = obecny->nastepny;

free(obecny);

return;

}

poprzedni = obecny;

obecny = obecny->nastepny;

} while(obecny != NULL);

}


int main() {
	lista* wsk = (lista*)malloc(sizeof(lista));
	wsk->wartosc = 1;
	wsk->nastepny = NULL;
	for(int i = 2;i<=100;i++)
	{
	dodawanie_koniec(&wsk, i);
		}	
		
	wyswietlanie(wsk);
	srednia(wsk);
	for(int i = 1;i<=100;i += 2)
	{
	usun(&wsk, i);
		}
		wyswietlanie(wsk);
		srednia(wsk);
	return 0;
}






