#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2,ip,rp;
    printf("Enter a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    d = (b*b)-(4*a*c);

    if(d<0)
    {
        printf("Imaginary and real parts are...\n");
        rp = -b / (2*a);
        ip = sqrt(-d) / (2*a);
        printf("The roots are %f & %f");
    }
    if(d==0)
    {
        printf("Real and equal roots are...\n");
        r1=r2=b/(2*a);
        printf("The roots are %f",r1);
    }
    if(d>0)
    {
        printf("Real and unequal roots are...\n");
        r1 = (-b)-sqrt(d)/(2*a);
        r2 = (-b)+sqrt(d)/(2*a);
        printf("The roots are %f & %f",r1,r2);
    }
    getch();
}
