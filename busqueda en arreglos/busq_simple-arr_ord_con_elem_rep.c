#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[11]= {1,4,6,6,8,10,11,11,15,16,16};
	int buscado,i;
	int cont=0;
	
	printf("====================================================\n\n");

	for(i=0;i<11;i++){
		printf(" %d ",arreglo[i]);
	}
	printf("\n\n====================================================\n");
	
	printf("Ingrese el elemento a buscar: ");
	scanf("%d",&buscado);
	
	for(int i=0;i<11;i++){
		if(buscado==arreglo[i]){
			printf("El elemento %d se encuentra en la posición %d del arreglo\n", buscado,i);
			cont++;
		}
	}
	
	printf("\nEl numero se repite %d vez/veces",cont);
	return 0;
}

