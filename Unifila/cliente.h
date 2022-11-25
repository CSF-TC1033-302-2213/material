#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <string>
using namespace std;

class Cliente {
private:
    string nombre;
    string asunto;
public:
    Cliente(string nombre, string asunto): nombre{nombre}, asunto{asunto} {}
    string getNombre() {
        return nombre;
    }
    string getAsunto() {
        return asunto;
    }
};

#endif