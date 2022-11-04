#include <iostream>
#include <string>
using namespace std;

int main() {
    // Factorial
    // 5! -> 5*4*3*2*1 = 1*2*3*4*5 = 120
    int contador = 1;
    int acumulador = 1;
    int n = 5;
    while (contador <= n) {
        acumulador = acumulador * contador;
        // acumulador *= contador;
        contador++;
    }
    cout << "El factorial de " << n << " es: " << acumulador << endl;

    // Version con for numerico
    // for (inicio; fin; paso)
    acumulador = 1;
    for (int i = 1; i <= n; i++) {
        acumulador *= i;
    }
    cout << "El factorial de " << n << " es: " << acumulador << endl;

    // Version con for each (como el for de Python)
    acumulador = 1;
    int arreglo[5] = {1,2,3,4,5};
    for (int i: arreglo) {
        acumulador *= i;
    }
    cout << "El factorial de " << n << " es: " << acumulador << endl;

}