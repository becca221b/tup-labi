#include <stdio.h>
int i,j;
int suma=0;
int main(int argc, char *argv[]) {
	
	
	int matriz[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};
	int num;
	
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			printf("matriz[%d][%d] = ",i,j);
			printf("%d \t",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			printf("matriz[%d][%d] = ",i,j);
			printf("%d \t",matriz[i][j]);
			printf("\n");
		}
		
	}
	
	sumatoria(matriz);
	
	
	printf("Ingrese el num a ser buscado");
	scanf("%d",&num);
	printf("%d",buscarNum(matriz,num));
	return 0;
}
int sumatoria(int arre[5][2]){
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			suma+=arre[i][j];
		}
		
	}
	printf("%d",suma);
	return 0;
}

int buscarNum(int arre[5][2], int buscado){
	int contador=0;
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			if(arre[i][j]==buscado){
			contador++;
			printf("En la posicion [%d][%d]\n",i,j);
			}
		}
		
	}
	printf("El numero %d se repite %d veces",buscado,contador);
	return 0;
}

