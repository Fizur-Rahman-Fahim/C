#include<stdio.h>
#define pi 3.1416
int main()
{
    double area, b,h,r;
    int type;
    printf("Select the type:1.Triangle\t 2.Circle\t 3.Square\t 4.Rectangle\n");
    scanf("%d",type);
    if (type == 1)
    {
        printf("Input b and h :");
        scanf("%lf %lf",&b ,&h);

        area = (0.5*b*h);

        printf("The area of tringle is %lf", area);
    }

    else if (type == 2)
    {
        printf(" Inter the value of radius:");
        scanf("%lf ",&r);
        area = (pi *r*r);
        printf("The area of circle is %lf ", area);

    }

    else
        printf("Type not matching ");
 return 0;
}
