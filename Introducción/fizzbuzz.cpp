#include <iostream>
#include <string>
using namespace std;

int main() {
    // Si es divisible entre 3 -> Fizz
    // Si es divisible entre 5 -> Buzz
    // Si es divisible entre 3 y 5 -> FizzBuzz
    // De lo contrario se debe imprimir el numero
    // cout -> print
    // cin -> input
    // endl -> salto de linea \n
    int n;
    cout << "Ingresa tu numero: ";
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (n % 3 == 0) {
        cout << "Fizz" << endl;
    } else if (n % 5 == 0) {
        cout << "Buzz" << endl;
    } else {
        cout << n << endl;
    }
}

