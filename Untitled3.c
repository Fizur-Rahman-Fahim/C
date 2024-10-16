#include<stdio.h>
int main()
{
int x;
printf("Enter the number:\n",x);
scanf("%d",&x);
if((x%5==0)&&((x%7==0)&&(x%11!=0)))
printf("The number is a multiple of 5\n",x);
else
printf("The number is not a multiple of 5",x);
return 0;
}
