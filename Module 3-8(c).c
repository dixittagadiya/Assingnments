#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,k;

    printf("Enter No:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=i; k<=a; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}