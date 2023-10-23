// Fecha creación: 18/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 11
// Problema planteado: ealizar un algoritmo recursivo para elaborar un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
#include <iostream>

using namespace std;


void conjeturaUllman(int);

int main() {
    int n;
    cout << "Ingrese un entero positivo mayor que 1: ";cin >> n;
    if (n <= 1) {
        cout << "El entero debe ser mayor que 1." << endl;
    } else {
        cout << "Secuencia de la conjetura de Ullman para " << n << ": ";
        conjeturaUllman(n);
        cout << endl;
    }
    return 0;
}

void conjeturaUllman(int n) {
    cout << n << " ";
    if (n == 1) {
        return;
    }
    // Si n es par, divídelo entre 2
    if (n % 2 == 0) {
        conjeturaUllman(n / 2);
    }
    // Si n es impar, multiplícalo por 3 y agrégale 1
    else {
        conjeturaUllman(3 * n + 1);
    }
}
