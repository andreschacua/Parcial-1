#include <stdio.h>

int copiar_n_cadena(char *, char *,int);

int longCadena(char *cadena){
    int a = 0;
    while(cadena[a] != '\0'){
        a++;
    }
    return a;
}

int main(){
    char *cadena = "Laboratorio\nde\nProgramación";
    int a;
    int num_letras = 20; //numero de letras que desea copiar con numeros desde el 0.
    a = longCadena(cadena);
    char *cadena_2;
    cadena_2 = (char*)malloc(a);
    copiar_n_cadena(cadena,cadena_2,num_letras);
}

int copiar_n_cadena(char *cadena_origen, char *cadena_destino,int numero){
    int b = longCadena(cadena_origen);
    int c;
    for(c = 0; c <= numero; c++){
        cadena_destino[c]=cadena_origen[c];
        printf("%c",cadena_destino[c]);
    }
}
