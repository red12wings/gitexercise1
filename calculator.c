#include <stdio.h>

/**
* Simple calculator
*/
int main(){

	float num1;
	int num2;
	float ans;
	char op;
	printf("\nEnter an operator (+,-,/,*): \n");
	scanf("%c",&op);

	printf("\nEnter two numbers: ");
	scanf("%f",&num1);
	scanf("%f",&num2);
	
	switch(op){
		case '+' : 
			ans = num1 + num2;
			break;
		default:
			printf("Enter a correct operator!");
			return 1;
	
	}
	printf("\n The result is as follows:\n");
	printf("%f %c %f = %f",num1, op ,num2,ans);
	return 0;
}
