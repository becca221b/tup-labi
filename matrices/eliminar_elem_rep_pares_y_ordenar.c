#include <stdio.h>
#include<string.h>
int i=0,j=0;

int main(int argc, char *argv[]) {
	int mat[4][4];
	int cont=0,par=0;
	/*CARGAR MATRIZ*/
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			
			printf("matriz posicion [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
			cont+= mat[i][j];
		}
		
	}
	/*MOSTRAR MATRIZ*/
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			
			printf("%d",mat[i][j]);
		}
		printf("\n");
		
	}
	/*
	divisiblesEnCuatro(mat);*/
	elementosPares(mat);
	return 0;
}

int divisiblesEnCuatro(int matriz[4][4]){
	int cont=0;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(matriz[i][j]%4==0){
				printf("%d es divisible por 4\n",matriz[i][j]);
				cont++;
			}
			
		}
		
	}
	if(cont==0){
		printf("No hay numeros divisibles por 4");
	}
	return 0;
}



int elementosPares(int matriz[4][4]){
	int k=0;
	int n=0;
	int contador=0;
	int cont=0;
	int arreglo[10];
	int arreglo2[10];
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(matriz[i][j]%2==0){
				contador++;
			}
		}
	}
		
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(matriz[i][j]%2==0){
				arreglo[k]=matriz[i][j];
				k++;
			}
		}
	}
	for(i=0;i<contador;i++){
		printf("%d, ",arreglo[i]);
	}
	printf("\n");
	/*Eliminar elementos repetidos*/
	for(i=0;i<contador;i++){
		j++;
		for(k=0;k<contador;k++){
			if()
		}
	}
	
	for(i=0;i<cont;i++){
		printf("%d, ",arreglo2[i]);
	}
	
	return 0;
}
