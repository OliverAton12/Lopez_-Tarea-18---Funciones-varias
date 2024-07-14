//fecha: 14/07/24
////Autor: Lopez Quiroz Wagner
//tema:  Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector.. 
#include<iostream>
using namespace std;
int buscNumero(int vector[], int total, int num)
{
    int cont=0;
    for(int k=0; k<total; k++)
    {
        if(vector[k]==num)//si existe el elemento
        cont++; //se incrementa el contador 
    }
    return cont;


}

int main() 
{
    int vector[]={10, 20, 6, 45, 10, 45, 6, 10, 1, 77, 3};
    int total = sizeof(vector)/sizeof(int); // 44/ 4= 11

    int num = 10;
    int cont = buscNumero(vector, total, num);
    cout<<endl<<"El elemento "<<num<< " existe "<<cont << " veces en el vector";
   return 0; 
}

