#include <stdio.h>

int main (){

    double nota, nota1, nota2, nota3, media;

    printf("Digite qual foi sua primeira nota: \n");
    scanf("%lf",&nota);

    printf("Digite qual foi sua segunda nota: \n");
    scanf("%lf",&nota1);

    printf("Digite qual foi sua terceira nota: \n");
    scanf("%lf",&nota2);

    printf("Digite qual foi sua quarta nota: \n");
    scanf("%lf",&nota3);

    media = (nota+nota1+nota2+nota3)/4;

    printf("Sua média é: %.2lf\n",media);
}