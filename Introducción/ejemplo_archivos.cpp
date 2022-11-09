#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // output file stream
    ofstream fout;
    fout.open("ejemplo.txt");
    if (fout.is_open()) {
        for (int i = 1; i <= 10; i++) {
            fout << i << " x 3 = " << i * 3 << endl;
        }
    }
    fout.close();
    cout << "Termino de escribir..." << endl;
    // input file stream
    ifstream fin;
    fin.open("ejemplo.txt");
    if (fin.is_open()) {
        string linea;
        while (fin.good()) {
            getline(fin, linea);
            cout << linea << endl;
        }
    }
    fin.close();
}