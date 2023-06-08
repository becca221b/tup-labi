#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char cadena[20]={"augusto.cesar"};
	int conteo= strlen(cadena);
	int i;
	
	printf("%d",conteo);
	if(conteo<20){
		for(i=conteo;i<20;i++){
			cadena[i]='a';
		}
	}
	printf("\n%s",cadena);
	
	
	return 0;
}

