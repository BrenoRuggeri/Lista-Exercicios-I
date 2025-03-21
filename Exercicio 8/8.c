#include <stdio.h>

int main (){
    
    int num, num1;

    printf("Digite um número: \n");
    scanf("%d",&num);

    printf("Digite um número: \n");
    scanf("%d",&num1);

    if (num> num1){
        printf("O %d é maior que %d\n",num,num1);
    }else{
        printf("O %d é maior que %d\n",num1,num);
    }
}