#include <stdio.h>

//que receba dois números inteiros e retorne o maior deles. No programa principal, leia dois números do usuário, chame a função e exiba o resultado.

int maior(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("O maior numero entre %d e %d e: %d",num1, num2, maior(num1, num2));

}