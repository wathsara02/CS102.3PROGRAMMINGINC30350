#include<stdio.h>
int main()
{
    int number,total=0,c;

    printf("Enter a number to be reversed:");
    scanf("%d",&number);

    do
    {
        total=total*10;
        c=number%10;
        total=total+c;
        number=number/10;
    }
    while(number>0);
    printf("Reversed number is %d",total);
}
