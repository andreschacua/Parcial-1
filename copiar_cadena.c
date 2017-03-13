#include<stdio.h>
char copiarCadena(char*);

int longCadena(char *);

int longCadena(char * cadena_2){
    int a = 0;
    while(cadena_2[a] != '\0'){
        a++;
    }
    return a;
}
int main(){
    char *cadena = "Laboratorio";
    copiarCadena(cadena);
}

char copiarCadena(char * cadena_origen){
    int b;
    b = longCadena(cadena_origen);
    char *cadena_destino;
    int c;
    printf("La cadena copiada es: \n");
    for(c = 0; c <= b ;c++){
        cadena_destino[c]=cadena_origen[c];
        printf("%c",cadena_destino[c]);
    }
}
