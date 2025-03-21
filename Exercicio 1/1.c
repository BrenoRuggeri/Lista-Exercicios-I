#include <stdio.h>

int main (){

    char nome[40];

    printf("Digite qual é o seu nome: \n");
    scanf("%39[^\n]",nome);

    printf("Olá, %s\n" ,nome);    
}