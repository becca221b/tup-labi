#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int buscar,mitad,i;  
	int a = 0;
	int b = 8;
	int contadorA = 0;
	int contadorB = 0;
	int lista[8]={1,4,6,8,10,11,15,16};
	
	printf("====================================================\n\n");
	for(i=0;i<8;i++){
		printf(" %d ",lista[i]);
	}
	printf("\n\n====================================================\n");
	printf("Ingrese el elemento a buscar: ");
	scanf("%d",&buscar);
	
	while (a <= b){
		contadorA++; 
		mitad = (a + b) / 2;
		if(buscar == lista[mitad]){
			printf("Numero %d encontrado en posicion %d\n", lista[mitad], mitad);
			break;
		}else if(buscar < lista[mitad]){
			b = mitad -1;
		}else{
			a = mitad + 1;
		}
		contadorB++;
		
	}/*fin while*/
	
	
	if(contadorA == contadorB){
		printf("Numero no encontrado\n");
	}
	
	return 0;
}

