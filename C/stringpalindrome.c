#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int flag=0,i,j,l;
    char ch1[50];
    printf("Enter the string: \n");
    scanf("%s",&ch1);
    l = strlen(ch1);
    for(i=0,j=l-1;i<l/2;i++,--j)
    {
        if(ch1[i]!=ch1[j])
        {
            flag = 1;
            break;
        }
    }
    strrev(ch1);
    printf("The reverse of the string = %s\n",ch1);
    if(flag==0)
        printf("The string is an palindrome\n");
    else
        printf("The string is not an palindrome\n");
    getch();
}
