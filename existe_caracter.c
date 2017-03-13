#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int existe_cararacter(char *cadena, char *cadena_2){
	int a = 0;
	int b;
	for(a = 0; a < strlen(cadena); a++){
		if(cadena[a] == cadena_2[0]){
			b = 1;
			return b;
		}
	}
	b = 0;
	return b;
}

int main(int argc, char *arreglo[]){
	char *cadena_1 = arreglo[1];
	char *cadena_2 = arreglo[2];
	int b;
	b = existe_cararacter(cadena_1,cadena_2);
	printf("%d",b);
}
