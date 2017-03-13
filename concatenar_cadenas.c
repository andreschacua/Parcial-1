#include <stdio.h>
#include <stdlib.h>

int concatenar_cadena(char *, char *);

int longCadena(char *cadena){
    int a = 0;
    while(cadena[a] != '\0'){
        a++;
    }
    return a;
} 

int main(){
	
    char *cadena_1="Hola";
    char *cadena_2="Mundo";

    concatenar_cadena(cadena_1,cadena_2);
}

int concatenar_cadena(char *cadena_mayor_1, char *cadena_mayor_2){
	
    int x,y,z;
    char *s;
    s = cadena_mayor_1;
    x = longCadena(cadena_mayor_1);
    y = longCadena(cadena_mayor_2);
    z = x + y;
    cadena_mayor_1 = (char *) malloc(x + 1);

    int c;
    cadena_mayor_1=(char *)realloc(cadena_mayor_1, z + 1);

    for(c = 0; c <= z; c++){
    	
        cadena_mayor_1[c] = s[c];
        printf("%c",cadena_mayor_1[c]);
    }
}

