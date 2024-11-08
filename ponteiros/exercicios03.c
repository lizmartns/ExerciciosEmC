/*crie uma função que receba dois ponteiros e troque os valores entre duas variáveis apontadas chame a função no main e imprima os valores antes e depois*/
#include <stdio.h>

int ponteiros( int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 10;
    int b = 20;

    printf("O valor da variavel A antes da troca é : %d\n",a);
    printf("O valor da variavel B antes da troca é : %d\n", b);

    ponteiros(&a,&b);

    printf("O valor da variavel A depois da troca é : %d\n", a);
    printf("O valor da variavel B depois da troca é : %d\n", b);
}