#include <iostream>

using namespace std;

void agregarElementos(int a[], int n);

void imprimirElementos(int a[], int n);

void ordenamientoSeleccion(int a[], int n);


int main()
{
    int arreglo[5];
    agregarElementos(arreglo,5);
    imprimirElementos(arreglo,5);
    cout<<endl;
    ordenamientoSeleccion(arreglo,5);
    cout<<endl;
    imprimirElementos(arreglo,5);
    cout<<endl;
    return 0;
}


void agregarElementos(int a[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

void imprimirElementos(int a[], int n)
{
    for (int i=0 ; i<n ; i++)
    {
        cout<<"["<<a[i]<<"]";
    }

}

void ordenamientoSeleccion(int a[], int n)
{
    int i,j,aux,min;

    for (i=0 ; i<n ; i++)
    {
        min = i;

        for (j= i+1 ; j< n ; j ++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }
}
