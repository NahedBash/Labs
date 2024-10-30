#include <stdio.h>
#include<stdlib.h>

int main(){

	int size;

	printf("Enter the size of vector: ");
	scanf("%d", &size);

	int *x = (int*)malloc(size *sizeof(int));
	int *y = (int*)malloc(size *sizeof(int));
	int *z = (int*)malloc(size *sizeof(int));

	if(x == NULL || y == NULL || z == NULL){
		printf("Error! memory not allocated. \n");
		return 1;
	}

	int a ,b;

	printf("\nEnter the values of a , b: ");
	scanf("%d %d", &a ,&b);

	printf("\nEnter the value of x: ");
	for(int i = 0; i<size; i++){
		scanf("%d", &x[i]);
	}
	
	printf("\nEnter the value of y: ");
        for(int i = 0; i<size; i++){
                scanf("%d", &y[i]);
        }

	for(int i = 0; i< size; i++){
		z[i]= (a * x[i]) + (b * y[i]);
	}

	printf("\nz = ");
	for(int i = 0; i<size; i++){
		printf("%d", z[i]);
	}

	printf("\n");
	
	free(x);
	free(y);
	free(z);

	return 0;

}
