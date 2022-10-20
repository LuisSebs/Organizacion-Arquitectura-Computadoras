#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


/** 
 * Practica02
 * Arrieta Mancera Luis Sebastian 318174116    
 * NOTA:
 *  gcc -o practica02 practica02.c -lm PARA COMPILAR ESTE PROGRAMA
 *  ./practica02 A 53.25 55.79 29.05 21.63 183.99 307.16 284.56 PARA MEDIA ARITMETICA
 *  ./practica02 H 53.25 55.79 29.05 21.63 183.99 307.16 284.56 PARA MEDIA ARMONICA
 *  ./practica02 G 53.25 55.79 29.05 21.63 183.99 307.16 284.56 PARA MEDIA GEOMETRICA 
*/

/**
 * Una funcion que calculela media aritmética de un arreglo de datos,
 * recibe el arreglo de datos y el número de datos en el arreglo.
*/
float media_aritmetica(float datos[], int n){
    float suma = 0;
    float resultado;
    for (int i = 0; i < n; i++)
    {
        suma += datos[i];
    }
    resultado = suma / n;
    return resultado;
}

/**
 * Una funcion que calcule la media armónica de un arreglo de datos, 
 * recibe el arreglo de datos y el número de datos en el arreglo.
*/
float media_armonica(float datos[], int n){
    float suma = 0;
    float resultado;
    for (int i = 0; i < n; i++)
    {
        suma += (1/datos[i]);
    }
    resultado = (n/suma);
    return resultado;
}

/**
 * Una funcion que calculela media geométrica de un arreglo de datos, 
 * recibe el arreglo de datos y el número de datos en el arreglo.
*/
float media_geometrica(float datos[], int n){
    float producto = 1;
    double resultado;
    for (int i = 0; i < n; i++)
    {
        producto *= datos[i];
    }
    resultado = pow(producto,(1.0/n));
    return resultado;
}

int main(int argc, char* argv[])
{
    //float arr1[] = {53.25,55.79,29.05,21.63,183.99,307.16,284.56}
    if(argc >= 3){
        // Program name
        printf("Program Name Is: %s \n",argv[0]);
        
        // Fill the array
        float arr[argc-2];
        for(int i = 0; i < argc-2 ; i++){
            arr[i] = atof(argv[i+2]);
        }

        // Calculate the array
        float result;
        if(strcmp(argv[1],"A")==0){
            result = media_aritmetica(arr,argc-2);
            printf("La media aritmetica es: %f \n",result);
        }
        if (strcmp(argv[1],"H")==0){
            result = media_armonica(arr,argc-2);
            printf("La media armonica es: %f \n",result);
        }
        if (strcmp(argv[1],"G")==0)
        {
            result = media_geometrica(arr,argc-2);
            printf("La media geometrica es: %f \n",result);
        }
        
    }else{

        char steps[] = "\nFaltan argumentos, por favor:\n\n\tIngresa el nombre del programa (./<nombre>) \n\n\tIngresa A: si quieres calcular la media aritmética \n\tIngresa H: si quieres calcular la media armónica \n\tIngresa G: si quieres calcular la media geométrica \n\n\tLos valores de los que quieres calcular la media seaparados por coma's\n";

        printf("%s",steps);
    }
    
    return 0;
}