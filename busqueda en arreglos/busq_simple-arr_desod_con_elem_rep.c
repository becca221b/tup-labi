
#include <stdio.h>
#define MAX 11

int i;

void show_array(int arr[]){
    for(i=0;i<MAX;i++){
        printf("%d ",arr[i]);
    }
}

int main(int argc, char *argv[]) {

	int arreglo[MAX]={5,4,10,8,2,11,9,1,5,11,1};
	int buscado;

	printf("====================================================\n\n");

	show_array(arreglo);

	printf("\n\n====================================================\n");


	printf("Ingrese el elemento a buscar: ");
	scanf("%d",&buscado);

	int contador=0;
	for(i=0;i<MAX;i++){
		if(buscado==arreglo[i]){
			printf("El elemento %d se encuentra en la posicion %d del arreglo\n", buscado,i);
		}else{
			contador++;
		}
	}
	if(contador==MAX){
		printf("Numero no encontrado\n");
	}

	return 0;
}
