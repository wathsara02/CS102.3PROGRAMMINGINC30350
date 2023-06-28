#include<stdio.h>
int main()
{
    int base,power,i=0,total=1;
    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter the power");
    scanf("%d",&power);

    do
    {
        total=total*base;
        i++;
    }while(i<power);

printf("Answer is %d",total);
}
