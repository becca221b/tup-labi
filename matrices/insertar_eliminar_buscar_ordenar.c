#include <stdio.h>
#define MAX 6
int i,j;
//Carga de elementos en el arreglo
void cargar_array(int arr[MAX]){
	for(i=0;i<MAX;i++){
		printf("Ingresar el elemento %d: ",i);
		scanf("%d",&arr[i]);
	}
}
//Mostrar array
void show_array(int arr[MAX]){
    for(i=0;i<MAX;i++){
		printf("%d  ",arr[i]);
	}
}

void eliminar(int arr[MAX]){
    int finded= 0;
    int pos= 0;
    int valor,max;

    printf("Ingrese el valor a borrar: ");
    scanf("%d",&valor);

    for(i=0;i<MAX;i++){
		if(arr[i]==valor){
            finded=1;
            pos= i;
            break;
		}
	}

	if(finded){
        arr[pos]=arr[pos+1];
        max= MAX-1;
	}
    for(i=0;i<max;i++){
		printf("%d  ",arr[i]);
	}
}

int main(int argc,char* argv[]){
    int arreglo[MAX];

    cargar_array(arreglo);
    show_array(arreglo);
    eliminar(arreglo);
    /*
    printf("Seleccione la operación a realizar: ");
    printf("1 insertar\n");
    printf("2 eliminar\n");
    printf("3 buscar\n");
    printf("4 buscar\n");
    int param= scanf("%d",&param);


    switch(param){
        case 1:
            insertar();
            break;
        case 2:
            eliminar(arreglo);
            break;
        case 3:
            buscar();
            break;
        case 4:
            ordenar();
            break;
    }

    */

    return 0;
}
