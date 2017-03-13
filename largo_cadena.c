#include<stdio.h>

int longCadena(char *cadena){
    int a = 0;
    while(cadena[a] != '\0'){
        a++;
    }
    return a;
}

int main(){
    char *cadena="Laboratorio de Programacion";
    int a;
    a = longCadena(cadena);
    printf("El largo de la cadena es de: \n%d",a);
}
