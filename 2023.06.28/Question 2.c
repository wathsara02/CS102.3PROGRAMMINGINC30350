#include<stdio.h>
int main()
{
     float avg,mark,total;
     int count=0;

     while(count<10)
     {
          printf("Enter your mark %d:",count+1);
          scanf("%f",&mark);
          count++;
          total=total+mark;
     }
     avg=total/count;
     printf("Total is %f",total);
     printf("Average is %f",avg);
}
