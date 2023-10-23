// Fecha creaci�n: 18/10/2023
// Fecha modificaci�n: 18/10/2023
// N�mero de ejericio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el m�ximo com�n divisor de dos n�meros enteros aplicando el algoritmo de Euclides.


#include <iostream>

using namespace std;

int maxcomundivisor (int, int);


int main ()
{
    int a,b;
    cout<<"ingrese el valor de a: "; cin >> a;
    cout<<"ingrese el valor de b: "; cin >> b;
    cout<< "el mcd es: "<<maxcomundivisor(a,b)<<endl;
    return 0;
}

int maxcomundivisor (int a, int b)
{
    if (b==0)
        return a;
    else
        return maxcomundivisor(b, a%b);
}
