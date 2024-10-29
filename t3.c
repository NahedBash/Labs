#include <stdio.h>
#define PI 3.14

int add(int a, int b){
	return a+b;
}

float addf(float a, float b){
        return a+b;
}

float area_circle(float area){
	return PI*(area*area);
}

float area_rectangle(float w , float l){
	return w*l;
}

int factorial(int n) {
    if (n == 0)
        return 1;  
    else
        return n * factorial(n - 1); 
}

int main(){

	int isum = add(3,4);
	printf("Sum of 3 + 4 =:%d\n ",isum);

	float fsum = addf(30.0,20.0);
	printf("Sum of 30.0+20.0 =: %f\n",fsum);

	float areac = area_circle(3.0);
	printf("The area of circle: %f\n",areac);

	float arear = area_rectangle(7.0, 2.0);
        printf("The area of rectangle: %f\n",arear);

	int f = 2;
	printf("The factorial of a number %d!: \n",f);


return 0;
}


