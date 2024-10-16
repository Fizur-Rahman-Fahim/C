#include<stdio.h>
int main()
{
    int total_sales;
    float rate;
    double commission;
    printf("Enter the amount of total sales: ");
    scanf("%d",&total_sales);
    if(total_sales<=1000)
    {
    rate =.03;}
    else if(total_sales<=4000)
       {
        rate = .08;
       }

 else if(total_sales<=6000)
    {
    rate = .12;
    }
 else
   {
       rate = .15;
   }
    commission = rate * total_sales;
 printf("Commission = %lf ", commission );
 return 0;
}
