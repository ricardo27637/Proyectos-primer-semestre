#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float lado1, lado2, lado3;  
	
	cout<<"Escribe el lado 1 del tri�ngulo: ";
	cin>>lado1;
	cout<<"Escribe el lado 2 del tri�ngulo: ";
	cin>>lado2;
	cout<<"Escribe el lado 3 del tri�ngulo: ";
	cin>>lado3;
	
	if(lado1==lado2&&lado1==lado3&&lado2==lado3){
		cout<<"Tu tri�ngulo es un equil�tero.";
	} else {
		if(lado1==lado2||lado1==lado3||lado2==lado3){ //si no, ya no pregunto
			cout<<"Tu tri�ngulo es un is�sceles.";
		} else {
			if(lado1!=lado2&&lado1!=lado3&&lado2!=lado3){ //diferente
				cout<<"Tu tri�ngulo es un escaleno.";
			}
		}
	}
	
	return 0;
}
