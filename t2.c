#include<stdio.h>
#include<stdlib.h>


int main(){

	char  string[100];
	int l = 0;

	printf("Enter the string: ");
	scanf("%50s", string);
	

	for (int i=0 ; string[i] != '\0'; i++){
		l++;
	}

	char *r = (char*)malloc((l +1)* sizeof(char));

	if (r == NULL){
		printf("Error! memory not allocated. \n");
		return 1;
	}
	
	for(int i = 0; i < l ; i++){
		r[i] = string[l - i - 1];
	}

	r[l] = '\0';

	printf("The reversed string: %s\n",r);

	free(r);

	return 0;

}
