#include <stdio.h>

void find_value(int arr[7],int n){
	int buscado;
	int i;
	int sup=n-1;
	int inf=0;
	int middle;
	printf("Ingrese el numero a buscar");
	scanf("%d",&buscado);
	
	while(inf<sup){
		middle=inf+sup/2;
		if(arr[middle]==buscado){
			printf("El %d está en la pos %d", buscado,middle);
			break;
		}else{
			if(arr[middle]<buscado){
				inf=middle+1;
			}else{
				sup=middle-1;
			}
		}
	}
	if(inf==sup){
		printf("Valor no encontrado");
	}
}

void sort_array(int arr[7], int n){
	int i,j,aux;
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			if(arr[j]<arr[j-1]){
				aux=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=aux;
			}
		}
	}
}

void show_array(int arr[7], int n){
	int i;
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
void combinar_elem(int arr[7],int arr2[6], int n){
	int array_c[8];
	int i,j;
	int k=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			if(arr[i]<arr2[j]){
				arr[k]=arr2[i];
				k++;
			}else{
				array_c[k]=arr2[j];
				k++;
			}
		}
	}
	
}
int main(int argc, char *argv[]) {
	
	int array_a[6]= {2,4,8,12,16,18};
	int array_b[7]={5,3,7,6,2,1,8};
	int array_c[8];
	
	/*Se muestra por pantalla el Arreglo B sin ordenar*/
	show_array(array_b,7);
	/*Se aplica la funcion para ordenar el array*/
	sort_array(array_b,7);
	/*Se muestra por pantalla el Arreglo B ordenado*/
	show_array(array_b,7);
	printf("\n");
	
	
	/*
	show_array(array_a,6);
		
	show_array(array_c,k);
	*/
	find_value(array_b,7);
	
	
	return 0;
}

