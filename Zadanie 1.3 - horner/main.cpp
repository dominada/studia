#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int horner(int a[], int stopien, int x)
{
	if(stopien == 0)
	{
		return a[0];
	}

	return x*horner(a, stopien-1,x)+a[stopien];
}

int klasyczny(int a[], int x)
{
	int w = 0;
	w += a[0];
	w += a[1]*x;
	w += a[2]*x*x;
	return w;
}


int main() {
	int *a;
	int x;
	a = new int[3];
	
	cout << "Podaj wspolczynniki \n";
	cout << "a0\n";
	cin>>a[0];
	cout << "a1\n";
	cin>>a[1];
	cout << "a2\n";
	cin>>a[2];
	cout << "Podaj X: ";
	cin>>x;
	int *b;
	b = new int[3];
	b[0] = a[2];
	b[1] = a[1];
	b[2] = a[0];
	
	
		cout << "W metoda klasyczna: "<< klasyczny(a,x) << "\n";
		cout << "Metoda Hornera: "<< horner(b,2,x) << "\n";
	return 0;
}
