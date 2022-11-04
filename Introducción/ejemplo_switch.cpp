#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion = 2;
    opcion = 1;
    // cout << "Ingresa la opcion deseada: ";
    // cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Elegiste la opcion 1" << endl;
            break;
        case 2:
            cout << "Elegiste 2" << endl;
            break;
        default:
            cout << "Caso por default" << endl;
    }

}