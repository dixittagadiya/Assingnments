#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,d,e,total,per;

    printf("Enter the mark blow in\n");
    
    printf("Gujarati:-");
    scanf("%d",&a);

    printf("Hindi:-");
    scanf("%d",&b);

    printf("Mathe:-");
    scanf("%d",&c);

    printf("Economic:-");
    scanf("%d",&d);

    printf("English:-");
    scanf("%d",&e); 

    total= a+ b + c + d + e;

    printf("\ntotal in %d out of 500 ", total);

    per= total / 5;

    printf("\n percent is %d", per);
}
