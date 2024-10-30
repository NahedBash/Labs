#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int count =0, sum=0;
	int *s= (int *)malloc(sizeof(int));

	if (s == 0){
		printf("Error! memory not alloceted \n");
		return 1;
	}	

	int sam,m;
	
	do{
	printf("Enter the integer the sample: \n");
	scanf("%d", &sam);
	

	s[count] = sam;
	sum += sam;
	count++;

	s = (int *)realloc(s,(count + 1)* sizeof(int));

	printf("Do you want to add more samples (1/0): \n");
                scanf("%d", &m);

	}while(m == 1);
		
	float average = sum/count;
	printf("The average of DC= %f\n",average);

	printf("The average from each sample to perform the DC shift= \n");	
	for(int i =0; i < count; i++){
		s[i] -= average;
		printf("%d\n", s[i]);
	}

	
	
	
	return 0;

}
