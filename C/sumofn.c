#include<stdio.h>
#include<conio.h>
int main()
{
	// find the sum of first 10 natural numbers;ie
	int num,count,sum=0; 
	printf("Enter number: \n");
	scanf("%d",&num);
	for(count=1;count<=num;++count)
	{
		sum += count;
	}
	printf("Sum of the number = %d",sum);
	return 0;

}
