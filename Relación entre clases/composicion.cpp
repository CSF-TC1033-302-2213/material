#include <iostream>
#include <string>
using namespace std;

class Motor {
private:
    int hp;
public:
    Motor(int hp): hp{hp} {}
    void arrancar() {
        cout << "Arrancando con " << hp << " caballos de fuerza..." << endl;
    }
};

class Automovil {
private:
    Motor motor;
public:
    Automovil(int hp): motor{hp} {}
    void avanzar() {
        motor.arrancar();
        cout << "Auto empieza a avanzar..." << endl;
    }
};

int main() {
    Automovil coche{130};
    coche.avanzar();
}