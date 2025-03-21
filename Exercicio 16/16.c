#include <stdio.h>

int main (){

    double nota, nota1, media;

    printf("Digite sua primeira nota: \n");
    scanf("%lf",&nota);

    printf("Digite sua segunda nota: \n");
    scanf("%lf",&nota1);

    if (nota<0 || nota >10){
        printf("Nota inválida !\n");
    }else if (nota1<0 || nota1 >10){
        printf("Nota inválida !\n");
    }else{
        media = (nota + nota1)/2;
        printf("Sua média é: %.2lf\n",media);
    }
}