#include<stdio.h>
int main()
{
    float a,b,c;
printf("Input the value of each side");
scanf("%f %f %f",&a,&b,&c);
if (a==b && b==c)
    printf("Equilateral triangle");
else if((a==b ||b==c) && (b!=c || a!=b))
    printf("Isosceles triangle");
    else
        printf("Scalene triangle");
    return 0;

}
