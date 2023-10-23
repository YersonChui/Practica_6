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
