# include <stdio.h>
int main( )
{
int n,i,sum=0,count=0;
printf("Input number of terms: ");
scanf("%d",&n);
printf("The odd number are:",n);
while(1)
{
    if(i%2!=0)
    {
       printf("%d ",i);
        sum=sum+i;
        count++;
    }
    if(count==n)break;
    i++;
}

printf("\nThe Sum of odd Natural Number upto %d terms: %d\n",n,sum);
return 0 ;
}
