#include<stdio.h>
#include<conio.h>

int main()
{
    int i,a,j;

    printf("Enter no : ");
    scanf("%d",&a);

    i=1;
    while (i<=a)
    {
        j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}