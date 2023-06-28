#include <stdio.h>

void mostrar(int arr[13],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int array_1[7]={3,1,25,8,30,12,0};
	int array_2[6]={20,12,5,8,31,15};
	int array_3[13];
	int i,j;
	
	for(i=0;i<7;i++){
		array_3[i]=array_1[i];
	}
	for(i=0;i<7;i++){
		array_3[6+i]=array_2[i];
	}
	
	mostrar(array_3,13);
	
	return 0;
}

