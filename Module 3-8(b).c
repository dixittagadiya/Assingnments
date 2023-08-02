#include<stdio.h>
#include<conio.h>

int main()
{
    int i,a,j,n=1;

    printf("Enter no : ");
    scanf("%d",&a);

    i=1;
    while (i<=a)
    {
        j=1;
        while (j<=i)
        {
            printf("%d",n);
            ++n;
            printf("  ");
            j++;
        }
        printf("\n");
        i++;
    }
}