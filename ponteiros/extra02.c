//Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida,compare seus endereços e exiba o conteúdo do maior endereço

#include <stdio.h>

int main(){
    int a, b;
    int *ptr_a = &a;
    int *ptr_b = &b;

    printf("Insira o valor da variavel a :\n");
    scanf("%d", &a);

    printf("Insira o valor da variavel b :\n");
    scanf("%d", &b);

    printf("O endereço de memória de a é :%p", ptr_a);
    printf("O endereço de memória de b é :%p", ptr_b);


    if(ptr_a > ptr_b){
        printf("O endereço de memória de a é maior que o de b");
    }else{
        printf("O endereço de memória de a é maior que o de b");
    }
}