#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    /// area of triangle
    int a,b,c,s,area;
    printf("Enter a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %d",area);
    return 0;
}
