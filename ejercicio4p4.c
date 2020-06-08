/*Escribir un programa que pida 10 números enteros por teclado, 
  los cargue en un vector, luego se imprimirán por pantalla:

  i. Cuántos de esos números son pares.
  ii. Cuál es el valor del número máximo.
  iii. Cuál es el valor del número mínimo. 
*/

#include<stdio.h>
#include<stdlib.h>
// Ej4p4 para hacer
void cargarValores(int [], int);
int contarPares(int [], int);
int encontrarMax(int [], int);
int encontrarMin(int [], int);

int main()
{
     int numeros[10];
     cargarValores(numeros,10);
     printf("Cantidad de Pares:  %d\n", contarPares(numeros,10));
     printf("El maximo es: %d\n" , encontrarMax(numeros,10));     
     printf("El minimo es: %d\n" , encontrarMin(numeros,10));     
}     
 

void cargarValores(int v[], int tam)
{
     system("clear");
  
     for(int x=0; x<tam; x++)
     {   
         printf("Ingrese numero en posicion %d: ",x);
         scanf("%d", &v[x]);
         getchar();
     }
     
}  

int contarPares(int v[], int tam)
{
    int contadorPares=0;
    for(int i=0; i<tam; i++)
    {
        if(v[i]%2==0)
            contadorPares++;
    }
    return contadorPares;
}

int encontrarMax(int v[], int tam)
{
    int max=v[0];
    for(int i=1;i<tam;i++)
    {
        if(v[i]>max)
            max=v[i];
    }
    return max;
}

int encontrarMin(int v[], int tam)
{
    int min=v[0];
    for(int i=1;i<tam;i++)
    {
        if(v[i]<min)
            min=v[i];
    }
    return min;
}

        






