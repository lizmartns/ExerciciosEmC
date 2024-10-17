#include <stdio.h>

// função que receba um número inteiro e retorne seu quadrado. No programa principal, leia um número do usuário, chame a função e exiba o resultado
int quadrado(int num){
    return num*num;
}

int main(){
    int numUser;
    
    printf("Escreva o numero do usuario : ");
    scanf("%d",&numUser);

    quadrado(numUser);
    printf("O resultado e %d", quadrado(numUser));

    return 0;

}