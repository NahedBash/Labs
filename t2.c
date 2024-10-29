#include <stdio.h>

int main(){
	int a = 3;
	char *ch = (char *)&a;
	int *p;
	if(sizeof(&p)==8){
		printf("its 64bit\n");
	}
	else if (sizeof(&p)==4){
		printf("its 32bit\n");
	}
	
	if(*ch){
		printf("LSB\n");
	}else{
                printf("LSB\n");
	}
	return 0;
}

