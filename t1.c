#include<stdio.h>

int main(){

	int arrayi[4];
	char arrayc[4];
	short arrays[4];
	double arrayd[4];
	//int *in = arrayi;
	//char *c = arrayc;
	//short *s = arrays;
	//double *d = arrayd;

	for(int i = 0 ; i<4 ; i++){
		printf("Integer Array: %p\n",&arrayi[i]);
		printf("Character Array: %p\n",&arrayc[i]);
		printf("Short Array: %p\n", &arrays[i]);
		printf("Double Array: %p\n", &arrayd[i]);
		printf("\n");

	}
}
