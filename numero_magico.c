#include <stdio.h>
#include <stdlib.h>

int main(void){
    
	//------------------------------
	    
    int numero_uno,numero_dos;
    numero_uno = rand() % 500;
    numero_dos = rand() % 500;

    int suma,resta,multipliacion;

    suma = numero_uno + numero_uno;
    multipliacion = numero_uno * numero_uno;
    
    if(numero_uno < numero_dos){
        
		resta = numero_dos - numero_uno;
    }
    else{
        
		resta=numero_uno-numero_dos;
    }
    
    //------------------------------
    
    int a;
    int contador = 0;

    int historial[100];
    int b = 0;


    printf("Debes adivinar el numero entre el 1 y el 200.\nCada vez que escribas un numero, se te dira si es mayor o menor, a uno de los dos numeros \nque tienes que adivinar. al igual que la suma , resta o multiplicacion de los numeros .\nTambien se te dira cuantos intentos tomaste en lograrlo y el historial de todos los numeros que utilizaste.\n\n");

    printf("ingrese el primer numero\n");
    
    scanf("%d",&a);
    historial[b] = a;
    
	//------------------------------

    while(a != numero_uno && a != numero_dos && a != suma && a != resta && a != multipliacion){
        
		if(a < numero_uno){
            
			printf("El numero uno es mayor\n");
            contador++;
        }
        if(a > numero_uno){
            
			printf("El numero uno es menor\n");
            contador++;
        }
        if(a < numero_dos){
            
			printf("El numero dos es mayor\n");
            contador++;
        }
        if(a > numero_dos){
            
			printf("El numero dos es menor\n");
            contador++;
        }

        if(numero_uno>numero_dos){
            
			if((numero_uno > a) && (a < numero_dos)){
                
				printf("El numero uno ingresado esta entre el primero y el segundo");
                contador++;
            }
        }
        if(numero_uno<numero_dos){
            
			if((numero_uno<a) && (a<numero_dos)){
                
				printf("El numero dos ingresado esta entre el primero y el segundo");
                contador++;
            }
        }


        printf("Ingrese el numero\n");
        scanf("%d",&a);
        b++;
        historial[b] = a;
    }
    
    contador++;
    
	printf("Lo intentaste: %d veces antes de adivinar el numero\n",contador);
    printf("Intentaste con estos numeros antes de encontrar el numero:\n");
    
	int c = 0;   //se para imprimir todo el historial
    
	while(c <= b){
        printf("%d\n", historial[c]);
        c++;
    }
    
    printf("\nEl numero uno es %d\n",numero_uno);
    printf("El numero dos es %d\n",numero_dos);
    printf("Si aun asi gano. Significa que acerto la suma, resta o multiplicacion del numero.");

}
