// Fecha creación: 18/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 9 y 2
// Problema planteado: Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos
#include <iostream>
#include <wchar.h>

using namespace std;

unsigned int factorial(unsigned int);

int main()
{
    unsigned int n,m;
    setlocale(LC_ALL, "");
    cout << "Ingrese un valor: ";cin >> n;
    cout << "Ingrese un valor: ";cin >> m;
    cout<< " es igual a " << (factorial(n))/(factorial(n-m)*factorial(m));
    return 0;
}

//Muestra el factorial de un número
unsigned int factorial(unsigned int x)
{
    if (x == 0) // Condición de SALIDA - CASO BASE
        x = 1;
    else
        x = x * factorial(x-1);
    return x;
}
