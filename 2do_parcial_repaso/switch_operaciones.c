#include <stdio.h>
#define ELEMENTOS 5
	
void cargar(int arr[ELEMENTOS]){
	int i;
	for(i=0;i<ELEMENTOS;i++){
		printf("Ingrese el valor para el indice %d: ",i);
		scanf("%d",&arr[i]);
	}
}

void mostrar(int arr[ELEMENTOS],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
	
void insertar(int arr[ELEMENTOS]){
	int inserted;
	printf("Ingrese el valor a insertar: ");
	scanf("%d",&inserted);
	arr[ELEMENTOS]=inserted;
}
	
int eliminar(int arr[ELEMENTOS], int n){
	int i,j,valor;
	int cont=0;
	printf("Ingresar el valor a eliminar: ");
	scanf("%d",&valor);
	for(i=0;i<n;i++){
		if(arr[i]==valor){
			for(j=i;j<n-1;j++){
				arr[j]=arr[j+1];
			}
			return 1;
		}else{
			cont++;
		}
	}
	if(cont==n){
		printf("Valor no encontrado\n");
		return 0;
	}
	
}

int main(int argc, char *argv[]) {
	
	int array_1[ELEMENTOS];
	cargar(array_1);
	mostrar(array_1,ELEMENTOS);
	insertar(array_1);
	mostrar(array_1,ELEMENTOS+1);
	
	if(eliminar(array_1,ELEMENTOS+1)){
		mostrar(array_1,ELEMENTOS);
	}else{
		mostrar(array_1,ELEMENTOS+1);
	}
	
	
	
	return 0;
}

