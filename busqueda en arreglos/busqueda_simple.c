#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arreglo[8]={1,4,6,8,10,11,15,16};
	int buscado;
	printf("Ingrese el elemento a buscar: ");
	scanf("%d",&buscado);
	
	int contador=0;
	for(int i=0;i<8;i++){
		if(buscado==arreglo[i]){
			printf("El elemento %d se encuentra en la posición %d del arreglo", buscado,i);
		}else{
			contador++;
		}
	}
	if(contador==8){
		printf("Numero no encontrado\n");
	}
	
	return 0;
}

