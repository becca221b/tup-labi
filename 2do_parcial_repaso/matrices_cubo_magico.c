#include <stdio.h>

void cargar(int mat[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Ingrese el valor en la posicion %d %d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
}

void mostrar(int mat[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
	
void comprobar(int mat[3][3]){
	int i,j;
	int cont=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat[i][j]>=1&&mat[i][j]<=9){
				cont++;
			}else{
				printf("Numero %d incorrecto\n",mat[i][j]);
			}
		}
	}
	if(cont==9){
		printf("Los numeros son correctos");
	}
}

int main(int argc, char *argv[]) {
	
	int matrix[3][3];
	
	cargar(matrix);
	
	mostrar(matrix);
	
	comprobar(matrix);
	
	
	return 0;
}

