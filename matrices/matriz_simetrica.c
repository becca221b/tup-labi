#include <stdio.h>

int i,j;

void cargar_matriz(int matrix[3][3]){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Ingrese el valor del elemento [%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
}

void show_matriz(int matrix[3][3]){
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("\t%d | ",matrix[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int main(int argc,char* argv[]){
    int matriz[3][3];
    int cont=0;
    cargar_matriz(matriz);
    show_matriz(matriz);

    for(i=0; i<3; i++){
			for(j=0; j<3; j++){
                if(matriz[i][j]==matriz[j][i]){
                    cont++;
                }
            }
    }
    if(cont==9){
        printf("Es una matriz simetrica");
    }else{
        printf("No es simetrica");
    }


    return 0;

}
