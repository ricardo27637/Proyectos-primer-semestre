#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Dame un numero para determinar si es par o impar: ";
	cin>>n;
	
	if(n%2)//el resultado es 0 y en c, cero=falso
	{
	cout<<"El numero es impar\n";
	}
	else
	{
	cout<<"El numero es par\n";
	}
	
	system("pause");
	
	if(n%2==0)//el resultado es 0 y en c, cero=falso
	{
	cout<<"El numero es par\n";
	}
	else
	{
	cout<<"El numero es impar\n";
	}
	return 0; 
}
