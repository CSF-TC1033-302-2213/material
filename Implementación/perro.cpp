#include <iostream>
#include <string>
using namespace std;

class Perro {
// Privado - Sólo tiene acceso los elementos dentro de la clase Perro
// Si no se indica un modificador de acceso, el default es private
// Protegido - Sólo tiene acceso los elementos dentro de la clase Perro y las clases que hereden de Perro
// Público - Todos tienen acceso
private:
    string raza;
    string color;
    int edad;
public:
    // Constructor que no recibe parámetros se llama constructor por default
    // Perro() {
    //     raza = "French";
    //     color = "Negro";
    //     edad = 1;
    // }

    // Indico que use el constructor por default de C++
    // Perro() = default;

    // Perro(string raza, string color, int edad) {
    //     // this - Es un apuntador a nuestro objeto
    //     this->raza = raza;
    //     this->color = color;
    //     this->edad = edad;
    // }

    // Lista de inicialización atributo{parámetro}
    // Perro(string raza, string color, int edad): raza{raza}, color{color}, edad{edad} {}

    // Usando argumentos por default
    Perro(string raza = "Husky", string color = "Gris", int edad = 0): 
        raza{raza}, color{color}, edad{edad} {}

    // Getters - Para dar acceso de lectura
    string getRaza() { return raza; }
    string getColor() { return color; }
    int getEdad() { return edad; }

    // Setters - Para dar acceso de escritura
    void setRaza(string raza) { this->raza = raza; }
    void setColor(string c) { color = c; }
    void setEdad(int e) { 
        edad = e; 
        if (e < 0)
            edad = 0;
    }

    void imprimir() {
        cout << "Raza: " << raza << " - Color: " << color << " - Edad: " << edad << endl;
    }

};

int main() {
    Perro perro{};
    perro.imprimir();

    perro.setRaza("Golden");
    perro.setColor("Dorado");
    perro.setEdad(-8);
    perro.imprimir();

    cout << perro.getRaza() << endl;

    Perro otro_perro{};
    otro_perro.imprimir();

    Perro otro_mas{"Salchicha", "Cafe", 5};
    otro_mas.imprimir();

    Perro aun_mas{"Maltes", "Amarillo"};
    aun_mas.imprimir();

}