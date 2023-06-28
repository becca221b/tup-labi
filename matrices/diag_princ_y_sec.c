#include <stdio.h>
int i=0, j=0, k=0; 
int main(int argc, char *argv[]) {
	int arreglo[10]={1,20,3,5,10,6,8,9,2,15};
	int mat[3][3];
	
	
	/*CARGAR MATRIZ*/
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			mat[i][j]=arreglo[k];
			k++;
		}
		
	}
	/*MOSTRAR MATRIZ*/
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			printf("%d |",mat[i][j]);
		}
		printf("\n");
		
	}
	diag_princ(mat);
	diag_sec(mat);
	return 0;
}

int diag_princ(int matriz[3][3]){
	int suma=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i==j){
				suma+=matriz[i][j];
			}
		}
		
	}
	printf("%d",suma);
	return 0;
}


int diag_sec(int matriz[3][3]){
	int suma=0;
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if((i)==(j)){
				suma+=matriz[i][j];
				
			}
		}
		
	}
	printf("\n%d",suma);
	return 0;
}
