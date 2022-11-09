#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> datos;
    // vector.push_back(elemento) -> Agrega un elemento al final del vector
    datos.push_back(67);
    datos.push_back(71);
    datos.push_back(53);
    datos.push_back(111);

    // Elimina el ultimo elemento del vector
    datos.pop_back();

    // Cambia el valor del vector en una posicion
    datos[1] = 101;

    // Inserta el valor en la posicion indicada (begin es la posicion 0)
    datos.insert(datos.begin() + 2, 404);

    // Elimina el valor en la posicion indicada
    datos.erase(datos.begin() + 1);

    // Vacia el vector
    // datos.clear();

    for (int i: datos) {
        cout << "El valor de i es: " << i << endl;
    }

    for (int i = 0; i < datos.size(); i++) {
        cout << "datos[" << i << "] = " << datos[i] << endl;
        cout << "datos.at(" << i << ") = " << datos.at(i) << endl;
    }

}