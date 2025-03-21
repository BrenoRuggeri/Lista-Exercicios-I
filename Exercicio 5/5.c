#include <stdio.h>

int main (){

    double numeroReal, quadrado;

    printf("Digite um número real: \n");
    scanf("%lf",&numeroReal);

    quadrado = numeroReal * numeroReal;

    printf("O quadrado de %lf é %lf\n",numeroReal, quadrado);
}