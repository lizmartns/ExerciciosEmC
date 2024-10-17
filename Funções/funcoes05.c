#include <stdio.h>

//que receba três números reais e retorne a média aritmética deles. No programa principal, leia três números do usuário, chame a função e exiba o resultado;

float aritmetica(float a, float b, float c){

    return (a + b + c )/3;
}

int main(){
    float user1, user2, user3;

    printf("Digite o numero do usuario 1: ");
    scanf("%f", &user1);

    printf("Digite o numero do usuario 2: ");
    scanf("%f", &user2);

    printf("Digite o numero do usuario 3: ");
    scanf("%f", &user3);

    printf("A media aritmetica dos 3 usuarios e %f:",aritmetica(user1, user2, user3));

}

//não precisa do return 0 ?