#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char cadena[20]={"augusto.cesar"};
	int conteo= strlen(cadena);
	int i;
	
	printf("La cantidad de caracteres es de %d",conteo);
	
	printf("\n=========================================\n");
	if(conteo<20){
		for(i=conteo;i<20;i++){
			cadena[i]='a';
		}
	}
	printf("\nPara completar la cadena quedaria en %s",cadena);
	
	
	return 0;
}

