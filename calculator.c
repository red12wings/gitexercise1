#include <stdio.h>
#include <math.h>

/**
* Simple calculator
*/
int main(){

	float num1;
	float num2;
	float ans;
	char op;
	printf("\nEnter an operator (+,-,/,*): \n");
	scanf("%c",&op);

	printf("\nEnter first numbers: ");
	scanf("%f",&num1);
	printf("\nEnter second numbers: ");
	scanf("%f",&num2);

	switch(op){
		case '+' :
			ans = num1 + num2;
			break;
        case '-' :
			ans = num1 - num2;
			break;
        case '*' :
			ans = num1 * num2;
			break;
        case '/' :
			ans = num1 / num2;
			break;
		default:
			printf("Enter a correct operator!");
			return 1;

	}
	printf("\n The result is as follows:\n");
	printf("%.2f %c %.2f = %.2f",num1, op ,num2,ans);
	return 0;
}
