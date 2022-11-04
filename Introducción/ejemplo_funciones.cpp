#include <iostream>
#include <string>
using namespace std;

bool es_par(int n) {
    return n % 2 == 0;
}

void saludar(string nombre) {
    cout << "Hola " << nombre << endl;
}

int main() {
    int x = 8;
    bool resultado = es_par(x);
    cout << x << " es par: " << resultado << endl;

    x = 15;
    resultado = es_par(x);
    cout << x << " es par: " << resultado << endl;

    saludar("Aram");
    saludar("Miguel");

}