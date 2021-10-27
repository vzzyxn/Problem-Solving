#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter the no:of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("The elements of the matrix is:%d%d",i+0,j+0);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered elements in matrix:\n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n\n");
    }
    printf("Transpose of the matrix:\n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n\n");
    }
    getch();
}
