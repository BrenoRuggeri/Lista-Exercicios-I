#include <stdio.h>

int main (){

    int numero, sucessor;

    printf("Digite um número: \n");
    scanf("%d",&numero);

    sucessor = numero + 1;

    printf("O sucessor de %d é %d\n",numero, sucessor);
}