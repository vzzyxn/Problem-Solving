#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,r;
    float ncr;
    long int fact(int a);
    printf("Enter the number: \n");
    scanf("%ld%ld",&n,&r);
    ncr = (fact(n)/(fact(n-r)*fact(r)));
    printf("The nCr value of the number = %f",ncr);
    getch();
}
long int fact(int a)
{
    int i;
    long int f = 1;
    for(i=1;i<=a;i++)
        f*=i;
    return f;
}
