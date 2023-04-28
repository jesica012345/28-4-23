#include<stdio.h>
#include<conio.h>

void main()
{

    int a;
    clrscr();
    printf("Enter the value of A:");
    scanf("%d",&a);
    if (a==0)
    {
       printf("This number is neutral");
    }
    else if (a<0)
    {
       printf("This number is not neutral");
    }
    else if (a>0)
    {
       printf("This number is not neutral");
    }
    getch();
}

