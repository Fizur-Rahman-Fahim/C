#include<stdio.h>

void printing_arr(int arr[],int n,int i)
{
    if(i==n)return;
    printf("%d\n",arr[i]);
    printing_arr(arr,n,i+1);
}
int main()
{
   int n;
   scanf("%d",&n);

   int arr[n];

   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }

   printing_arr(arr,n,0);

    return 0;
}
