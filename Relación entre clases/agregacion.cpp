#include <iostream>
#include <string>
using namespace std;

class Profesor {
private:
    string nombre;
    int nomina;
public:
    // atributo{parámetro}
    Profesor(string nombre, int nomina): nombre{nombre}, nomina{nomina} {}
    string getNombre() const { return nombre; }
    int getNomina() { return nomina; }
};

class Clase {
private:
    const Profesor &profesor;
public:
    Clase(const Profesor &profesor): profesor{profesor} {}
    void iniciarClase() {
        cout << profesor.getNombre() << " esta iniciando la clase..." << endl;
    }
};

int main() {
    Profesor profe{"Aram", 648451};
    {
        Clase clase{profe};
        clase.iniciarClase();
    }
    // Aunque desaparece clase de la memoria, profe sigue existiendo
    cout << profe.getNomina() << endl;
}