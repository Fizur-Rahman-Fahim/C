#include <stdio.h>

int main() {

   double a,b,c ,t;
  scanf("%lf%lf%lf",&a, &b,&c);
   t=sqrt((b*b)-4*a*c);
  if(((b*b)-4*a*c)<0||a==0)
  printf("Impossivel calcular\n");
  else
  printf("R1 = %.5lf\nR2 = %.5lf\n",((-b+t)/(2*a)),((-b-t)/(2*a)));


     /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */

    return 0;
}
