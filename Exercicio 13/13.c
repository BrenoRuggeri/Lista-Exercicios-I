#include <stdio.h>

int main (){

    int num, num1;

    printf("Digite um número: \n");
    scanf("%d",&num);

    printf("Digite outro número: \n");
    scanf("%d",&num1);

    if(num > num1){
        printf("O maior número foi: %d\n",num);
    }else if (num1 > num){
        printf("O maior número foi: %d\n",num1);
    }else{
        printf("Os número são iguais\n");
    }
}