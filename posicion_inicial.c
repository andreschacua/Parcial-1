#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pos_inicial(char *cadena, char *cadena_1){
	int a = 0;
	int b = strlen(cadena);
	int posicion = 0;
	for(a = 0; a < b; a++){
		if(cadena[a] == cadena_1[0]){
			posicion = a + 1;
			return posicion - 1;
		}
	}
}

int main(int arreglo_2, char *arreglo[]){
	char *cadena_2 = arreglo[1];
	char *cadena_1 = arreglo[2];
	int posicion;
	posicion = pos_inicial(cadena_2,cadena_1);
	printf("%d", posicion);
}
