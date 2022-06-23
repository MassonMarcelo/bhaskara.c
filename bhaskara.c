#include<stdio.h>
#include<math.h>
int main (void){
    float a, b, c, D, x1, x2;

    printf("***Bhaskara - Programa que calcula as raízes da equação de segundo grau***\n\n");
    printf("Informe o coeficiente a:\n");
    scanf("%f", &a);
    printf("Informe o coeficiente b:\n");
    scanf("%f", &b);
    printf("Informe o coeficiente c:\n");
    scanf("%f", &c);

    D=(b*b-4*a*c);
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);

    if (a==0)
        printf("\nO coeficiente a deve ser diferente de zero!\n");
        else
            if (D<0)
                printf("\nNão existe raiz real!\n");
                else
                    if (D>0)
                    printf("\nExistem duas raizes reis:\n\nx1 = %f\n\nx2 = %f\n",x1, x2);
                    else
                        if (x1=x2)
                        printf("\nExiste uma raiz real:\n\nx1 = x2 = %f\n", x1);

    return 0;

}
