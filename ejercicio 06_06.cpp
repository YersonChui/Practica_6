// Fecha creación: 18/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función:

#include <iostream>
#include <wchar.h>

using namespace std;


int sumatoria(int);

int main()
{
    int n;
    cout<<"ingrese el valor de n:  "<<endl;
     cin>>n;
    cout<<"el resultados es:  "<<sumatoria(n);
    return 0;
}
int sumatoria(int n)
{
    if (n==1)
        return 1;
    else if(n>1)
    return (n*n)+sumatoria(n-1);
}
