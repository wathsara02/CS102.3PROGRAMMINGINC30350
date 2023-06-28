#include<stdio.h>
int main()
{
    int total=0,number,remainder;

    printf("Enter a number to calculate the total:");
    scanf("%d",&number);

    do
    {
        remainder=number%10;
        total=total+remainder;
        number=number/10;
    }
    while(number>0);

    printf("Total is %d",total);
}
