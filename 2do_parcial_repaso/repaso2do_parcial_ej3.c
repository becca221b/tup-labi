#include <stdio.h>

void buscar(int arr[10]){
	int buscado,i,pos_final;
	int reps=0;
	int cont=0;
	printf("Ingrese el número a buscar: ");
	scanf("%d",&buscado);
	for(i=0;i<10;i++){
		if(arr[i]==buscado){
			reps++;
			printf("El elemento fue encontrado en la posición %d\n",i);
			pos_final=i;
		}else{
			cont++;
		}
	}
	
	if(cont==10){
		printf("Valor no encontrado");
	}else{
		printf("El elemento se repite %d veces\n",reps);
	}
	
}
void eliminar(int arr[10]){
	int buscado,i,pos_final;
	int reps=0;
	int cont=0;
	printf("Ingrese el número a buscar y eliminar: ");
	scanf("%d",&buscado);
	for(i=0;i<10;i++){
		if(arr[i]==buscado){
			reps++;
			pos_final=i;
		}
	}
	if(reps>0){
		for(i=pos_final;i<10;i++){
			arr[i]=arr[i+1];
		}
		
	}
}

void mostrar(int arr[10], int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
}



int main(int argc, char *argv[]) {
	
	int array_1[10]={5,10,12,52,30,12,5,23,12,72};
	
	buscar(array_1);
	
	eliminar(array_1);
	
	mostrar(array_1,9);
	
	return 0;
}

