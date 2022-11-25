#include <iostream>
#include <string>
#include "unifila.h"

int main() {
    Unifila unifila{};
    int opcion = 1;
    string nombre;
    string asunto;
    while (opcion != 0) {
        cout << "Bienvenido a la unifila." << endl;
        cout << "1) Formar un nuevo cliente." << endl;
        cout << "2) Pasar un cliente a caja." << endl;
        cout << "3) Revisar la unifila." << endl;
        cout << "0) Salir." << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del cliente: ";
                getline(cin >> ws, nombre);
                cout << "Ingrese el asunto del cliente: ";
                getline(cin >> ws, asunto);
                unifila.formarCliente(nombre, asunto);
                break;
            case 2:
                unifila.pasarSiguienteCliente();
                break;
            case 3:
                unifila.revisarFila();
                break;
            case 0:
                cout << "Hasta luego, vuelva pronto." << endl;
                break;
            default:
                cout << "Opcion incorrecta." << endl;
        }
    }
}