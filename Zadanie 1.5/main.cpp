#include <iostream>
using namespace std;

int n;
int i;

int main( )
{
	int max;
int min;
  cout <<  "Podaj n \n";
  cin >> n; 
  int X[n];

 for( i = 0; i < n; i++ )
 {
 	cin >> X[i]; 
 }

cout <<  "Szukam elementu max i min... \n";

max = X[0];
min = X[0];
for( i = 1; i < n; i++ )
 {
 	if(X[i] > max)
 	{
 		max = X[i];
	}
	if(X[i] < min)
 	{
 		min = X[i];
	}
 }
 cout <<  "\n Minimalna wartosc to: " << min << " Maksymalna wartosc to: " << max;
 
  return 0;
} 



