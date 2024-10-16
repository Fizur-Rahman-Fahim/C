#include <stdio.h>

int main() {

    int X ,Y;
    float price =00.00;
    scanf("%d%d",&X,&Y);
    if (X==1)
    price= Y*4.00;
    else if(X==2)
    price= Y*4.50;
    else if(X==3)
     price= Y*5,00;
    else if(X==4)
     price= Y*2.00;
    else if(X==5)
     price= Y*1.50;
     printf("Total: R$ %.2f\n",price);

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}
