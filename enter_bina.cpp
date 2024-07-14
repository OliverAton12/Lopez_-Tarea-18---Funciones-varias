//fecha: 14/07/24
////Autor: Lopez Quiroz Wagner
//tema:  Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número binario se debe guardar en un vector
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
//Diseñe la función que convierte un entero en su equivalente en binario. 
//El resultado del número binario se debe guardar en un vector. 
//Por ejemplo es número 353 en binario es 0 0 0 0 0 0 0 1 0 1 1 0 0 0 0 1 
void EnteroBina(int num)
{
    int const MAX = 16;
    int vector[MAX];
    int numOriginal = num;
    // encerrar el vector
    for(int k=0; k<MAX; k++)
      vector[k]=0;
// convertir en binario
    int cont=0;  
    while(num > 0)  
    {
        int resto = num % 2;
        vector[cont] = resto;
        cont++;

        num = num / 2;
    } 
    //imprimir resultado
    cout<<endl<<"El numero "<<numOriginal<< " en binario es ";
    for(int k=(cont-1); k>=0; k--)
      cout<<vector[k];
}

int main() 
{
    int vector[]={10, 20, 6, 45, 10, 45, 6, 10, 1, 77, 3};
    int total = sizeof(vector)/sizeof(int); // 44/ 4= 11

    int num = 10;
    int cont = buscNumero(vector, total, num);
    cout<<endl<<" el elemento "<<num<< " existe "<<cont << " veces en el vector";
    EnteroBina(78);
   return 0; 
}
