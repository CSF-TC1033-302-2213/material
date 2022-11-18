#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Punto {
private:
    float x;
    float y;
public:
    Punto(float x = 0, float y = 0): x{x}, y{y} {}

    float distancia(Punto punto) {
        return sqrt(pow(y - punto.y, 2) + pow(x - punto.x, 2));
    }

    float pendiente(Punto punto) {
        return (punto.y - y) / (punto.x - x);
    }

};

int main() {
    Punto p1{4,3};
    Punto p2{-5,1};
    float distancia = p1.distancia(p2);
    float pendiente = p1.pendiente(p2);
    cout << "Distancia: " << distancia << " y pendiente: " << pendiente << endl;
}