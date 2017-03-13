#include<stdio.h>
#include<stdlib.h>

int longCadena(char *cadena ){
	int a = 0;
	while (cadena[a] != '\0'){
		a++;
	}
	return a;
}
char * hacia_mayuscula(char *cadena){
	int c;
	int b = longCadena(cadena);
	char *final =(char*)malloc(b);

	for (c = 0; cadena[c] != '\0'; c++){
		if (cadena[c] >= 'a' && cadena[c] <= 'z'){
			final[c] = cadena[c] - 32;
		}else if ( cadena[c] >= 'A' && cadena[c] <= 'Z'){
			final[c] = cadena[c];
		}
	}
	return final;
}

int main(int argc, char *arreglo[]){
	char* x = arreglo[1];
	char* s = hacia_mayuscula(x);
	printf("%s",s);
}
