#include<stdio.h>

int copiar_sub(char *, char *,int,int);

int longCadena(char *cadena){
	
    int a = 0;
    while(cadena[a] != '\0'){
        a++;
    }
    return a;
}

int main(){
	
    char *cadena = "Laboratorio de Programacion";
    int primera_letra = 5;
    int ultima_letra = 15;
    int a = longCadena(cadena);
    char *cadena_2;
    cadena_2 = (char*)malloc(a);
    copiar_sub(cadena,cadena_2,primera_letra,ultima_letra);
}

int copiar_sub(char *cadena_origen, char *cadena_destino,int numero_iniciar,int numero_parar ){
	
    int b = longCadena(cadena_origen);
    int c;

    for(c = numero_iniciar; c <= numero_parar; c++){
        cadena_destino[c] = cadena_origen[c];
        
        printf("%c",cadena_destino[c]);
    }
}
