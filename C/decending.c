#include<stdio.h>
#include<conio.h>
void main()
{
    int num[30],n,i,t,j;
    printf("Enter value: \n");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(num[i]>num[j])
            {
                t = num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }
    printf("The numbers in the descending order are...\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",num[i]);
    }
    getch();
}
