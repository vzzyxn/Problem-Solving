#include<stdio.h>
#include<conio.h>
int main()
{
    // Matrix multiplication 
    // C programming Lab
    int first[10][10],second[10][10],multiply[10][10];
    int m,n,p,q,c,d,k,sum=0;
    //first matrix
    printf("Enter the rows and columns of the first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the first matrix:\n");
    for(c=0;c<m;c++)
        for(d=0;d<n;d++)
            scanf("%d",&first[c][d]);
    // second matrix
    printf("Enter the rows and columns of the second matrix:\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
        printf("Matrix in this order can't be multiply\n");
    else
    {
        printf("Enter the elements of the second matrix:\n");
            for(c=0;c<p;c++)
                for(d=0;d<q;d++)
                    scanf("%d",&second[c][d]);
        for(c=0;c<p;c++)
        {
            for(d=0;d<q;d++)
            {
                for(k=0;k<p;k++)
                {
                    sum = sum + first[c][k]*second[k][d];
                }
                multiply[c][d]=sum;
                sum=0;
            }
        }
        printf("\nProduct of entered matrix:\n");
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
            {
                printf("\t%d",multiply[c][d]);
            }
            printf("\n\n\n");
        }
        getch();
        return 0;
    }
}
