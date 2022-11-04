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

    x = 3;
    int a = ++x / 2;
    cout << x << endl;
    x = 3;
    int b = x++ / 2;
    cout << x << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
}