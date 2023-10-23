// Fecha creación: 18/10/2023
// Fecha modificación: 20/10/2023
// Número de ejericio: 7
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero hacomprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// más en ser también productiva, ¿cuántos pares de conejos podrá poner a la venta el granjero al cabo de un año?

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


