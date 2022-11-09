#include <iostream>
#include <string>
using namespace std;

int main() {
    int matricula;
    string nombre;
    cout << "Ingresa tu matricula: ";
    cin >> matricula;
    cout << "Ingresa tu nombre: ";
    getline(cin >> ws, nombre);
    cout << "Hola " << nombre << " - Matricula: " << matricula << endl;
}