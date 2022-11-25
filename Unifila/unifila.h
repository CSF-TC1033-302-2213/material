#ifndef UNIFILA_H_
#define UNIFILA_H_

#include <iostream>
#include <string>
#include <vector>
#include "cliente.h"
using namespace std;

class Unifila {
private:
    // vector<Tipo de dato> nombre_variable;
    vector<Cliente> clientes;
public:
    void pasarSiguienteCliente() {
        if (clientes.size() > 0) {
            cout << "Pasando al cliente: " << clientes[0].getNombre() << endl;
            clientes.erase(clientes.begin());
        } else {
            cout << "No hay clientes en la fila." << endl;
        }
    }
    void formarCliente(string nombre, string asunto) {
        cout << "Formando al cliente: " << nombre << endl;
        clientes.push_back(Cliente{nombre, asunto});
    }
    void revisarFila() {
        // Tipo_de_dato_del_arreglo nombre_variable : arreglo_o_vector
        for (Cliente cliente: clientes) {
            cout << "Cliente: " << cliente.getNombre() << " - Asunto: " << cliente.getAsunto() << endl;
        }
        // (int i = inicia ; hasta donde llega; paso)
        // for (int i=0; i<clientes.size(); i++) {
        //     cout << "Cliente: " << clientes.at(i).getNombre() << " - Asunto: " << clientes.at(i).getAsunto() << endl;
        // }
    }
};

#endif