#include <stdio.h>

void show_array(int arr[]){
    int i;
    for(i=0;i<11;i++){
        printf("%d ",arr[i]);
    }
}

int main(int argc, char *argv[]) {
	int lista[11]= {1,4,6,6,8,10,11,11,15,16,16};
	int buscar,mitad,i;
	int a = 0;
	int b = 10;//verificar max
	int contadorA = 0;
	int contadorB = 0;
    int cont=0;

	printf("====================================================\n\n");

	show_array(lista);

	printf("\n\n====================================================\n");

	printf("Ingrese el elemento a buscar: ");
	scanf("%d",&buscar);

	while (a <= b){

		mitad = (a + b) / 2;
		if(buscar == lista[mitad]){
			printf("Numero %d encontrado en posicion %d\n", lista[mitad], mitad);
			cont++;
		}
		if(buscar < lista[mitad]){
			b = mitad -1;
		}else{
			a = mitad + 1;
		}


	}/*fin while*/


    if(cont>0){
        printf("El numero %d se repite %d vez/veces",buscar,cont);
    }else{
        printf("Numero no encontrado\n");
    }


	return 0;
}
