#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int x;
    int y;
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;
    int z = pow(x,y);
    cout << x << " elevado a la " << y << " es: " << z << endl;
}