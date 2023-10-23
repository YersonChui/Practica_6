// Fecha creaci�n: 18/10/2023
// Fecha modificaci�n: 22/10/2023
// N�mero de ejericio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es sim�trica

#include <iostream>

using namespace std;

bool esSimetrica(char*,int,int);

int main() {
    int MAX_LONGITUD = 100;
    char miCadena[MAX_LONGITUD];

    cout << "Ingrese una cadena de caracteres: ";
    cin >> miCadena;

    // Calcula la longitud de la cadena.
    int longitud = 0;
    while (miCadena[longitud] != '\0') {
        longitud++;
    }

    if (esSimetrica(miCadena, 0, longitud - 1)) {
        cout << "La cadena es simetrica." << endl;
    } else {
        cout << "La cadena no es simetrica." << endl;
    }

    return 0;
}
bool esSimetrica(char cadena[], int inicio, int fin) {
    // Caso base: si hemos llegado al centro de la cadena, es sim�trica.
    if (inicio >= fin) {
        return true;
    }

    // Compara el car�cter en la posici�n de inicio con el de fin.
    if (cadena[inicio] != cadena[fin]) {
        return false;
    }

    // Llamada recursiva para comparar los siguientes caracteres.
    return esSimetrica(cadena, inicio + 1, fin - 1);
}
