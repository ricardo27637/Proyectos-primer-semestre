#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n,num,x;

    // Pedir al usuario un n�mero mayor que 1
    do {
        cout << "Dame un n�mero mayor que 1: ";
        cin >> n;
    } while (n < 2);

    cout << "N�meros primos hasta " << n << ":\n";

    // Ciclo para verificar todos los n�meros desde 2 hasta n
    for (num = 2; num <= n; num++) {
       

        // Verificar si 'num' es primo
        for (x = 2; x < num; x++) {
            if (num % x == 0) {
                break; // Si 'num' es divisible por 'x', no es primo
            }
        }

        // Si el ciclo lleg� al final, 'num' es primo
        if (x == num) {
            cout << num << " ";
        }
    }

    return 0;
}

