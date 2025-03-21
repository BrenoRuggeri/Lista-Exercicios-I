#include <stdio.h>

int main (){

    int numero;
    
    printf("Digite um número: \n");
    scanf("%d",&numero);

    if (numero%2 != 1){
        printf("O número é par\n");
    }else {
        printf("O número é impar\n");
    }
}