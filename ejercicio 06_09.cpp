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
