#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	//uso de if
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"Dime una calificaci�n: ";
	cin>>cal;
	if (cal>=70)
	{
		cout<<"Suficiente\n";
	}
	system("pause");
	system("cls");
	cout<<"Dime una calificaci�n: ";
	cin>>cal;
	if (cal>=70)
	{
		cout<<"Suficiente\n";
	}
	else{
		cout<<"No Suficiente\n";
	}
	//lo mismo con ?
	system("pause");
	system("cls");
	cout<<"Dime una calificaci�n: (Evaluando con ?) ";
	cin>>cal;
	cal>=70?cout<<"Suficiente\n":cout<<"No suficiente\n";
	
	//if con m�s de una instrucci�n
	system("pause");
	system("cls");
	cout<<"Dime una calificaci�n: ";
	cin>>cal;
	if (cal>=70)
	{
		printf("La calificaci�n obtenida es: ");
		cout<<"Suficiente\n";
	}
	else
	{
		printf("La calificaci�n obtenida es: ");
		cout<<"No Suficiente\n";
	}
	return 0;     
}
