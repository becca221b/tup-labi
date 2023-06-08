#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char cadena[5]={'h', 'o', 'l', 'a', '\0'};
	char cadena2[5]= "mundo";
	int i;
	int cont=0;
	char caracter;
	int contador=0;
	/*
	printf("La cadena es: \n");
	i=0;
	
	while(i<=5){
		printf("caracter %d: %c\n", i, cadena[i]);
		i++;
	}
	/*
	printf(cadena2);
	*/
	
	char nombre[10], apellidos[10];
	printf("Introduce tu nombre: ");
	
	
	scanf("%s",&nombre);
	printf("Introduce tus apellidos: ");
	scanf("%s",&apellidos);
	printf("Hola %s %s \n",nombre, apellidos);
	
	/*
	for(i=0;i<10;i++){
		if(nombre[i]=='a'|| nombre[i]=='e'|| nombre[i]=='i'|| nombre[i]=='o'|| nombre[i]=='u'){
			cont++;
		}
	}
	printf("Tu nombre tiene %d vocales",cont);
	*/
	printf("\nIngrese un caracter: ");
	scanf(" %c",&caracter);
	
	for(i=0;i<10;i++){
		if(nombre[i]==caracter){
			contador++;
		}
		
	
		if(apellidos[i]==caracter){
			contador++;
		}
	}
	
	printf("\nEl caracter %c aparece %d veces en tu nombre y apellido",caracter,contador);
	
	
	for(i=0;i<10;i++){
		if(nombre[i]=='a'&& nombre[i+1]=='r'){
			cont++;
		}
		
	}
	printf("\nar aparece %d veces en tu nombre y apellido",cont);
	
	getch();
	return 0;
}

