#include <stdio.h>

int main (){

    int num, num1, num2, soma;

    printf("Digite o primeiro número: \n");
    scanf("%d",&num);

    printf("Digite o segundo número: \n");
    scanf("%d",&num1);

    printf("Digite o terceiro número: \n");
    scanf("%d",&num2);

    soma = num + num1 + num2;

    printf("O valor da soma é: %d\n", soma);
}