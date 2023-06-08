#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char cadena[50];
	char caracter;
	int i;
	int contador=0;
	
	printf("Ingrese la cadena\n");
	scanf("%s",&cadena);
	
	printf("\nIngrese un caracter: ");
	scanf(" %c",&caracter);
	
	for(i=0;i<50;i++){
		if(cadena[i]==caracter){
			contador++;
		}
	}
	
	printf("\nEl caracter %c aparece %d veces en la cadena",caracter,contador);
	
	
	return 0;
}

