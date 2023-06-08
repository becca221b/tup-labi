#include <stdio.h>
/*
//cada oracion separada por un punto. Cada palabra separada por un asterisco
//se pide cuantas palabras tiene cada oracion
//oracion con mayor cantidad de palabras
//mostrar las oraciones una bajo la otra (procedimiento)
//ingresar un caracter por teclado e indicar la oracion en la que mas veces aparece
*/
int main(int argc, char *argv[]) {
	char oracion[60];
	int i=0;
	int cont_palabra=0;
	int cont_oracion=0;

	printf("Ingrese 3 oraciones:\n");
	scanf("%s",&oracion);
	printf("%s",oracion);
	
/*
		while(i<60){
			while(oracion[i]!='.'){
					
				while(oracion[i]!='*'){
					
				}
				cont_palabra++;
				printf("\nLa cantidad de palabras es %d",cont_palabra);
			}
			cont_oracion++;
			i++;
		}
	
*/
	for(i=0;i<60;i++){
		
		if(oracion[i]=='*'){
			cont_palabra;
			if(oracion[i]=='.'){
				cont_oracion++;
				cont_palabra=0;
			}
		}
	
	}
	
	
	return 0;
}

