#include<stdio.h>
int main ()
{
     int number,a=0,total=0,digits=0;
     printf("Enter a number");
     scanf("%d",&number);
     int original=number;

     do
     {  number=number/10;
     digits++;
     }
     while(number>0);
     number=original;

     do
     {
          a=number%10;
          total=total+pow(a,digits);
          number=number/10;
     }    while(number>0);

     if (original == total)
          printf("%d is an Armstrong number",original);
     else
          printf("%d is not an Armstrong number",original);
}
