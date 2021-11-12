#include<stdio.h>
int main()
{
	char operator;
	double n1,n2;
	printf("Enter the operator (+,-,/,*) :\n");
	scanf("%c",&operator);
	printf("Enter two operands: \n");
	scanf("%lf %lf",&n1,&n2);

	switch(operator)
	{
		case '+':
			printf(" %.1lf + %.1lf = %.1lf",n1,n2,n1+n2);
			break;
		case '-':
			printf("%.1lf - %.1lf =%.1lf",n1,n2,n1-n2);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
			break;
		
		default:
			printf("The operator you entered is wrong");
	}
	return 0;
}
