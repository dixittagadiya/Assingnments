#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,total,per;
    printf("Enter the Mark blow in \n");

    printf("Gujarati:-");
    scanf("%d",&a);

    printf("English:-");
    scanf("%d",&b);

    printf("Hindi:-");
    scanf("%d",&c);

    printf("Math:-");
    scanf("%d",&d);

    printf("B.A:-");
    scanf("%d",&e);

    total = a + b + c + d + e;
    printf("\ntotal is %d out of 500",total);

    per=total/5;
    printf("\npercent is %d", per);

    if(per>=75)
    {
        printf("\nDistriction");
    }
    else if(per>=60 && per<=75)
    {
        printf("\nFirst Class");
    }
    else if(per>=50 && per<=60)
    {
        printf("\nSecond Class");
    }
    else if(per>=35 && per<=50)
    {
        printf("\nPass Class");
    }
    else
    {
        printf("\nFail");
    }
    getch();
}