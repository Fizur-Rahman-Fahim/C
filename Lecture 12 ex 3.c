#include<stdio.h>
int main()
{
    int total_time ,rate;

    printf("Enter the total time: ");
    scanf("%d",&total_time);
    if(total_time<=10)
    {
    rate = 60;}
    else if(total_time<=14)
       {
        rate = 75;
       }

 else if(total_time<=20)
    {
    rate = 93;
    }
 else
   {
       rate = 118;
   }

 printf("Rs %d ", rate);
 return 0;
}

