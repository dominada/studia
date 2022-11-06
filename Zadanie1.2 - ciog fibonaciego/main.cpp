//Zadanie 1.2
//Dominik Adamczyk IX1N1

#include<iostream>
#include<fstream>

 using namespace std;



//Rekurencyjnie
int rekure(int n)
{

	if(n<3)
	{
		return 1;
	}
	
	return rekure(n-2)+rekure(n-1);
}


	int n;
 int main()
  {
  	
  	
  	
  	cout << "Podaj n" << endl;
	cin >> n;
	
	ofstream plik;
	plik.open("wy.txt");
	
   //Iteracyjnie
   cout << "Iteracyjnie\n";
   plik << "Iteracyjnie\n";
   int a = 0, b = 1;
  
     for(int i=0;i<n;i++)
     {
            cout <<b<<" ";
            plik <<b<<" ";
            b += a; //pod zmienn¹ b przypisujemy wyraz nastêpny czyli a+b
            a = b-a; //pod zmienn¹ a przypisujemy wartoœæ zmiennej b
     }  
   
   //Rekurencyjnie
   	cout << "\nRekurencyjnie\n"; 
   	plik << "\nRekurencyjnie\n";
	
   int i;
	int zapis;
  for (i = 1; i <= n; i++) {
	zapis = rekure(i);
   cout << zapis << " ";
	plik << zapis << " ";
  };
   
   
   plik.close();
   	
   	cin >> n;
   return 0;
  }


