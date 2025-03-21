#include <stdio.h>

int main (){

    int num, num1, num2;

    printf("Digite o primeiro número: \n");
    scanf("%d",&num);

    printf("Digite o segundo número: \n");
    scanf("%d",&num1);

    printf("Digite o terceiro número: \n");
    scanf("%d",&num2);

    if (num < num1 && num < num2){
        printf("O número: %d foi o menor\n",num);
    }else if (num1< num && num1 < num2){
        printf("O número: %d foi o menor\n",num1);
    }else{
        printf("O número: %d foi o menor\n",num2);
    }
}