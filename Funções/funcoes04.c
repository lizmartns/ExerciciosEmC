#include <stdio.h>

// que receba um número inteiro e retorne verdadeiro se o numero for par e falso se for ímpar. No programa principal, leia um número do usuário, chame a função e exiba uma mensagem informando se o número é par ou ímpar.

void opcao(int n){
    if(n % 2 == 0){
    printf("O numero e par");  
    }else{
       printf("O numero e impar"); 
    }
}

int main(){
    int numUser;
    
    printf("Escreva o numero do usuario : ");
    scanf("%d", &numUser);
    
    opcao(numUser);

    return 0;
}