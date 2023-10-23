// Fecha creación: 18/10/2023
// Fecha modificación: 20/10/2023
// Número de ejericio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.
# include <iostream>

using namespace std;

int longitudcadena(char*);
void invertir(char*, int, int);

int main (){
    char cadena[100];
    cout<< "INTRODUCE UNA CADENA:  ";cin.getline(cadena, 100);
    invertir(cadena, 0,longitudcadena(cadena)-1);
    cout << "la invertida es:  "<< cadena<< endl;
    return 0;
}

int longitudcadena(char cadena[])
{
    int log =0;
    while (cadena[log] != '\0')
    {
        log++;
    }
    return log;
}
void invertir(char cadena[], int inicio, int fin)
{
    if (inicio>=fin){
        return;
    }
    char temporal= cadena[inicio];
    cadena[inicio]= cadena[fin];
    cadena[fin]= temporal;
    invertir(cadena, inicio+1, fin-1);
}

