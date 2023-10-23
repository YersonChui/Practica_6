// Fecha creación: 18/10/2023
// Fecha modificación: 20/10/2023
// Número de ejericio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.
#include <iostream>

using namespace std;

int soniguales(int*,int*,int,int,int);
int main()
{
    int maxt =100;
    int vec1[maxt],vec2[maxt],tamano1,tamano2, indice;
    cout <<"introduce tamano del primer vector: "; cin>> tamano1;
    cout<<"introduce el vector:   ";
    for (int i=0;i < tamano1;i++){
        cin>> vec1[i];
    }

    cout <<"introduce tamano del segundo vector: "; cin>> tamano2;
    cout<<"introduce el vector:   ";
    for (int i=0;i < tamano2;i++){
        cin>> vec2[i];
    }
    if (soniguales(vec1,vec2, tamano1, tamano2, indice)==1)
        cout<<"los vectores son iguales "<< endl;
    else if (soniguales(vec1,vec2, tamano1, tamano2, indice)==0)
        cout<<"los vectores NO son iguales "<< endl;
    return 0;
}

int soniguales(int vec1[],int vec2[],int tamano1,int tamano2, int indice=0)
{
    if(tamano1 != tamano2)
        return 0;
    if (indice == tamano1)
        return 1;
    if (vec1[indice]!= vec2[indice])
        return 0;

    return soniguales(vec1,vec2, tamano1, tamano2, indice+1);
}
