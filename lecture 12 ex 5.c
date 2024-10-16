#include<stdio.h>
int main()
{
    float a,b,h,r,pi=3.14159;
    int choose;
    double v;
    printf("Choose :\n 1. Cube\n 2. Cuboid\n 3. Cylinder\n 4. Sphere\n");
    scanf("%d",&choose);

    switch(choose)
    {
  case 1:
    printf("Enter the value of side: ");
    scanf("%f",&a);
    v = (a*a*a);
        printf("The Vol of cube is %lf",v);
        break;
    case 2:
       printf("Enter the value of side & height: ");
       scanf("%f %f %f",&a, &b ,&h);
       v= (a*b*h);
       printf("Vol of a cuboid is %lf",v);
       break;

    case 3:
        printf("Enter the value of radis & hight: ");
       scanf("%f %f",&r,&h);
       v= (pi*r*r*h);
       printf("Vol of a cyclinder is %lf",v);
       break;

    case 4:
         printf("Enter the value of radis: ");
       scanf("%f",&r);
       v= (1.33*pi*r*r*r);
       printf("Vol of a cyclinder is %lf",v);
       break;

    default:
        printf("Invalide choise");
        break;

    }


       return 0;
}
