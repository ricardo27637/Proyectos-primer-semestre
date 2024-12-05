#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    int numero; // Declara una variable para almacenar el n�mero ingresado
    bool esPrimo = true; // Inicializa la variable esPrimo como verdadero

    cout << "Ingrese un n�mero: "; // Pide al usuario que ingrese un n�mero
    cin >> numero; // Lee el n�mero ingresado por el usuario

    // Verifica si el n�mero es menor o igual a 1
    if (numero <= 1) {
        esPrimo = false; // Si es menor o igual a 1, no es primo
    } else {
        // Itera desde 2 hasta el n�mero
        for (int i = 2; i <= numero; i++) {
            // Si el n�mero es divisible por i, no es primo
            if (numero % i == 0) {
                esPrimo = false; // Marca como no primo
                break; // Sale del bucle, ya no es necesario seguir comprobando
            }
        }
    }

    // Muestra el resultado
    if (esPrimo) {
        cout << numero << " es un n�mero primo." << endl; // El n�mero es primo
    } else {
        cout << numero << " no es un n�mero primo." << endl; // El n�mero no es primo
    }

    return 0; // Finaliza el programa
}
