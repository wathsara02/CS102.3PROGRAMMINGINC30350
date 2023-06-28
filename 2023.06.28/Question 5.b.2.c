#include<stdio.h>
int main()
{
    int num,max=0,min,avg=0,total=0,i;

    for(i=0;i<10;i++)
        {printf("Enter number %d",i+1);
        scanf("%d",&num);

        if(num>max)
            max=num;
        else if (num<min)
            min=num;

        total=total+num;}

        avg=total/10;
        printf("Maximum mark is %d\n",max);
        printf("Minimum mark is %d\n",min);
        printf("Average mark is %d\n",avg);
}

