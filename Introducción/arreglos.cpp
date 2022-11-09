#include <iostream>
#include <string>
using namespace std;

int main() {
    int datos[5];
    cout << datos[0] << endl;
    datos[0] = 123;
    cout << datos[0] << endl;

    int otros_datos[3] = {64,13,74};
    cout << otros_datos[1] << endl;

    for (int i: otros_datos) {
        cout << "Elemento i: " << i << endl;
    }

    int size = sizeof(otros_datos)/sizeof(int);
    cout << size << endl;

    for (int i = 0; i < size; i++) {
        cout << "otros_datos[" << i << "] = " << otros_datos[i] << endl;
    }

}