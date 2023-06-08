#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char c1[4]={'h','o','l','a'};
	char c2[5]={'t','u'};
	char new_cad[]=" como estas"; 
	int i,long1,long2;
	
	printf("La cadena 1 es: ");
	for(i=0;i<4;i++){
		printf("%c",c1[i]);
	}
	printf("\n");
	printf("La cadena 2 es: ");
	for(i=0;i<5;i++){
		printf("%c",c2[i]);
	}
	printf("\n=========================================\n");
	
	/*Comparar la longitud de la cadena*/
	long1= strlen(c1);
	long2= strlen(c2);
	printf ("\nLongitud de la cadena 1: %d\n", long1);
	printf ("\nLongitud de la cadena 2: %d\n", long2);
	if(long1>long2){
		printf("\nLa cadena 1 es mayor que la cadena 2\n");
		strcat(c2,new_cad);
		printf("%s\n",c2); 
	}else if(long2>long1){
		printf("\nLa cadena 2 es mayor que la cadena 1\n");
		strcat(c1,new_cad);
		printf("%s\n",c1); 
	}else{
		printf("\nlas cadenas son iguales");
	}
	
	printf("\n=========================================\n\n");
	


	
	
	return 0;
}

