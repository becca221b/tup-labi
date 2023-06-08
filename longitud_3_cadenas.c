#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char cadena1[50];
	char cadena2[50];
	char cadena3[50];
	int long1,long2,long3;
	
	printf("Ingrese la cadena 1\n");
	scanf("%s",cadena1);
	
	printf("Ingrese la cadena 2\n");
	scanf("%s",cadena2);
	
	printf("Ingrese la cadena 3\n");
	scanf("%s",cadena3);
	
	long1= strlen(cadena1);
	long2= strlen(cadena2);
	long3= strlen(cadena3);
	
	if(long1<long2&&long1<long3){
		printf("%s\n",cadena1);
		if(long2<long3){
			printf("%s\n",cadena2);
			printf("%s\n",cadena3);
		}else{
			printf("%s\n",cadena3);
			printf("%s\n",cadena2);
		}
		
	}else if(long2<long1 && long2<long3){
		printf("%s\n",cadena2);
		if(long1<long3){
			printf("%s\n",cadena1);
			printf("%s\n",cadena3);
		}else{
			printf("%s\n",cadena3);
			printf("%s\n",cadena1);
		}
	}else if(long3<long1 && long3<long2){
		printf("%s\n",cadena3);
		if(long1<long2){
			printf("%s\n",cadena1);
			printf("%s\n",cadena2);
		}else{
			printf("%s\n",cadena2);
			printf("%s\n",cadena1);
		}
	}else{
		printf("\nlas cadenas son iguales");
	}
	/*
	printf("%s\n",cadena1);
	printf("%s\n",cadena2);
	printf("%s\n",cadena3);
	*/
	
	
	return 0;
}

