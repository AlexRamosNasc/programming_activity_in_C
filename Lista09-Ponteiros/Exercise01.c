#include<stdio.h>

int main(){
	int a = 1, *x;
	float b = 2.5, *y;
	char c = 'C', *z;

	x = &a; 
	y = &b; 
	z = &c;

	printf("a = %d, b = %.2f, c = %c\n", a, b, c);

	*x = 9;
	*y = 8.5;
	*z = 'P';

	printf("a = %d, b = %.2f, c = %c", a, b, c);

	return 0;
}