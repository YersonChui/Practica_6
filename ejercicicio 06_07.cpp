// Fecha creaci�n: 18/10/2023
// Fecha modificaci�n: 20/10/2023
// N�mero de ejericio: 7
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero hacomprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// m�s en ser tambi�n productiva, �cu�ntos pares de conejos podr� poner a la venta el granjero al cabo de un a�o?

#include <iostream>

using namespace std;

int conejosVenta (int);
int main ()
{
    int n;//=12;
    cout << "ingrese cantidad de meses :  ";cin>>n;
    cout<<"la cantidad de pares de conejos a final de anio es:   "<<conejosVenta(n);
    return 0;
}

int conejosVenta (int n)
{
    if (n==1)
        return 2;
    if (n>1)
        return (n*2);//+conejosVenta(n-1);
}


