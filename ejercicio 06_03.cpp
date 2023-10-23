// Fecha creación: 18/10/2023
// Fecha modificación: 18/10/2023
// Número de ejericio: 3
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos.
#include <iostream>

using namespace std;

int sumaElementos(int arr[], int n, int indice = 0) {
    if (indice == n) {
        return 0;
    }
    return arr[indice] + sumaElementos(arr, n, indice + 1);
}

int main() {
    int n;
    cout << "Ingrese la longitud del vector: ";cin >> n;
    int vector1[n];
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> vector1[i];
    }

    int resultado = sumaElementos(vector1, n);
    cout << "La suma de los elementos del vector es: " << resultado << endl;
    return 0;
}
