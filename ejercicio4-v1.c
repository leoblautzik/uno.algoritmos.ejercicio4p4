/*Escribir un programa que pida 11 números enteros por teclado, 
  los cargue en un vector, luego se imprimirán por pantalla:

  i. Cuántos de esos números son pares.
  ii. Cuál es el valor del número máximo.
  iii. Cuál es el valor del número mínimo. 
*/
#include<stdio.h>
#include<stdlib.h>

void mostrar(int [],int);

void main()
{
    int tam=10, contadorPares=0, max, min;
    int myVector[tam];

    system("clear");    
    for(int i=0;i<tam;i++)
    {
        printf("Ingrese el valor de la posicion [%d]:", i);
        scanf("%d", &myVector[i]);
        getchar();
    }       
    mostrar(myVector,tam);

    max=myVector[0];
    min=myVector[0];        

    for(int i=0;i<tam;i++)
    {
        if(myVector[i]<min)
            min=myVector[i];

        if(myVector[i]>max)
            max=myVector[i];
        
        if(myVector[i]%2==0)
            contadorPares++;    
    }
   
    printf("Cantidad de numeros pares ingresados:%d\n",contadorPares);
    printf("Maximo: %d\n",max);
    printf("Minimo: %d\n",min);


    
}

void mostrar(int v[], int tam)
{
    printf("----------------------------\n");
    for(int i=0;i<tam;i++)
    {
        printf("%d\n", v[i]);
    }
    printf("----------------------------\n");
}


















/*
    max=myVector[0];
    min=myVector[0];        

    for(int i=0;i<tam;i++)
    {
        if(myVector[i]<min)
            min=myVector[i];

        if(myVector[i]>max)
            max=myVector[i];
        
        if(myVector[i]%2==0)
            contadorPares++;    
    }
   
    printf("Cantidad de numeros pares ingresados:%d\n",contadorPares);
    printf("Maximo: %d\n",max);
    printf("Minimo: %d\n",min);


    max=myVector[0];
    min=myVector[0];        

    for(int i=0;i<10;i++)
    {
        printf("%d\n", myVector[i]);
        if(myVector[i]<min)
            min=myVector[i];

        if(myVector[i]>max)
            max=myVector[i];
        
        if(myVector[i]%2==0)
            contadorPares++;    
    }
    mostrar(myVector,tam);
} 


void mostrar(int v[], int tam)
{
    printf("----------------------------\n");
    for(int i=0;i<tam;i++)
    {
        printf("%d\n", v[i]);
    }
    printf("----------------------------\n");
}




























/*
system("clear");    
    for(int i=0;i<10;i++)
    {
        printf("Ingrese el valor de la posicion [%d]:", i);
        scanf("%d", &myVector[i]);
        getchar();
    }       
    
    max=myVector[0];
    min=myVector[0];        

    for(int i=0;i<10;i++)
    {
        printf("%d\n", myVector[i]);
        if(myVector[i]<min)
            min=myVector[i];

        if(myVector[i]>max)
            max=myVector[i];
        
        if(myVector[i]%2==0)
            contadorPares++;    
    }       
    
    printf("La cantidad de numeros pares es: %d\n", contadorPares);
    printf("El minimo es: %d\n", min);
    printf("El Maximo es: %d\n", max); 
            
}*/
