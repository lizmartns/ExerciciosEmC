//Crie uma função que receba um vetor de inteiros e o tamanho do vetor, e retorne a soma de todos os elementos. No programa principal, leia o tamanho do vetor, os elementos do vetor do usuário, chame a função e exiba o resultado.
#include <stdio.h>

// Função que recebe um vetor e seu tamanho, e retorna a soma dos elementos
int somaElementos(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = somaElementos(vetor, tamanho);
    printf("A soma de todos os elementos é: %d\n", resultado);

    return 0;
}