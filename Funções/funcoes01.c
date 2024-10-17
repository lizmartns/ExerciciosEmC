#include <stdio.h>

//funções- blocos de código que realizam funções específicas e podem ser reutilizados, tornam o código mais legível e mais fácil de dá manutenção
int soma (int n, int m){
    return n + m;
}

int subtracao (int n, int m){
    return n - m;
}
int divisao (int n, int m){
    return n / m;
}

int multiplicacao (int n, int m){
    return n * m;
}
int main(){
    int n, m, operacao;

    printf("Escolha uma operacao :\n 1- Soma, 2-Subtracao, 3- Divisao, 4-Multiplicacao :");
    scanf("%d", &operacao);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    switch (operacao)
    {
    case 1:
        printf("A soma de %d e %d e: %d\n", n, m, soma(n,m));
        break;
    case 2:
        printf("A Subtracao de %d e %d e: %d\n", n, m, subtracao(n,m));
        break;
    case 3:
        printf("A Divisao de %d e %d e: %d\n", n, m, divisao(n,m));
        break;
    case 4:
        printf("A Multiplicacao de %d e %d e: %d\n", n, m, multiplicacao(n,m));
        break;
    
    default:
        break;
    }


    return 0;
}