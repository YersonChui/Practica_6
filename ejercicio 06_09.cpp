// Fecha creación: 18/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 9 y 2
// Problema planteado: Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos
#include <iostream>
#include <wchar.h>

using namespace std;


int sumatoria(int);

int main()
{
    int n;
    cout<<"ingrese el valor de n:  "<<endl;cin>>n;
    for (int i=0; i<n; i++)
        cout << sumatoria(i) << endl;
    return 0;
}

int sumatoria(int n)
{
/*
    if(n==0)
        return 0;
    else if(n>=1)
        return n=n+sumatoria(n%10)+sumatoria(n/10);
    */

}
