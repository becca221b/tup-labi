#include <stdio.h>
int i,j;
int main(int argc, char *argv[]) {
	int matriz[2][2]={{1,2},{3,4}};
	mostrar_matriz(matriz);

	prod_cruz(matriz);
	return 0;
}
int mostrar_matriz(int mat[2][2]){

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){

			printf("%d |",mat[i][j]);
		}
		printf("\n");

	}

	return 0;
}

int prod_cruz(int matriz[2][2]){
	/*diag principal*/
	int prod=1;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(i==j){
				prod=prod*(matriz[i][j]);
			}
		}

	}

	printf("\n%d",prod);

	/*diagonal secundar*/

	for(i=0; i<2; i++){
		for(j=2; j>0; j--){
			if(i==(j-2)){
				prod=prod*(matriz[i][j]);
			}
		}

	}

	return 0;
}

