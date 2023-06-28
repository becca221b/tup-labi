#include <stdio.h>

int i,j;

void cargar_matriz(int matrix[3][3]){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Ingrese el valor del elemento [%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void show_matriz(int matrix[3][3]){
    for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\t%d |",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void comparar(int matrix1[3][3], int matrix2[3][3]){
    int cont=0;
    for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matrix1[i][j]==matrix2[i][j]){
                cont++;
			}
		}
    }
    if(cont==9){
        printf("las matrices son iguales");
    }else{
        printf("las matrices no son iguales");
    }
}

void sumar(int matrix1[3][3], int matrix2[3][3]){
    int matriz3[3][3];

    for(i=0; i<3; i++){
		for(j=0; j<3; j++){
            matriz3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\t%d |",matriz3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(int argc,char* argv[]){

    int matriz1[3][3];
    int matriz2[3][3];
    cargar_matriz(matriz1);
    show_matriz(matriz1);
    cargar_matriz(matriz2);
    show_matriz(matriz2);
    //comparar(matriz1,matriz2);
    sumar(matriz1,matriz2);


    return 0;
}


