//Zadanie 1.1
//Dominik Adamczyk IX1N1

#include <iostream>

 using namespace std;



//Rekurencyjnie
int silnia_r(int n) {
   if(n>1)
    return n*silnia_r(n-1);
  else
    return 1;
}


	int n;
 int main()
  {
  	cout << "Podaj n" << endl;
	cin >> n;
	
   //Iteracyjnie
   cout << "Iteracyjnie\n";
   int n_i = n;
   int wynik_i = 1;
		cout << n_i << "! = ";
		if (n_i == 0) cout << "1\n";
		else
		{
			while (n_i > 0)
			{
			wynik_i *= n_i;
			n_i--;
		}
		cout << wynik_i << endl;
		}
   
   //Rekurencyjnie
   	cout << "Rekurencyjnie\n"<< n << "! = " << silnia_r(n);
   
   	cin >> n;
   return 0;
  }

