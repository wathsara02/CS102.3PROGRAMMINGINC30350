#include<stdio.h>
int main()
{
     int number,c=1,d;

     printf("Enter a number to calculate factorial:");
     scanf("%d",&number);

     if(number<0)
          {printf("Error: Can't calculate the factorial of a negative number");}
     else{
    for(d=1;d<=number;d++)
     {
          c=c*d;
     }
     printf("Factorial is %d",c);}
}
