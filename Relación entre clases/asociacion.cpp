#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    float salario;
public:
    Empleado(string nombre, float salario): nombre{nombre}, salario{salario} {}
    ~Empleado() {
        cout << "Esto es el destructor..." << endl;
    }
    // const después del nombre de la función 
    // -> Promete no modificar los atributos de esta clase
    string getNombre() const { return nombre; }
    float getSalario() const { return salario; }
};

class Auditor {
private:
    string nombre;
public:
    Auditor(string nombre): nombre{nombre} {}
    // Copia por valor -> Hace una copia del objeto de tipo Empleado
    // void calcularImpuestos(Empleado empleado) {
    //     float impuestos = empleado.getSalario() * 0.3;
    //     cout << empleado.getNombre() << " debe pagar " << impuestos << " de impuestos." << endl;
    // }

    // const promete y obliga a que yo no pueda modificar el objeto de tipo Empleado dentro de mi función
    void calcularImpuestos(const Empleado &empleado) {
        float impuestos = empleado.getSalario() * 0.3;
        cout << empleado.getNombre() << " debe pagar " << impuestos << " de impuestos." << endl;
    }
};

int main() {
    Auditor auditor{"Pepe"};
    Empleado empleado1{"Panfilomeno", 25000};
    Empleado empleado2{"Esteban", 10000};
    auditor.calcularImpuestos(empleado1);
    auditor.calcularImpuestos(empleado2);

    int a = 5;
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl; // Dirección en memoria donde está guardado a

    int &b = a; // Estoy creando un alias para la variable a
    cout << "b: " << b << endl;
    cout << "&b: " << &b << endl;

    b = 150;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

}