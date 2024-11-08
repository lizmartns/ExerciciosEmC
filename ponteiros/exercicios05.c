/*crie uma função que receba um vetor de inteiros e seu tamanho e retorne a média dos elementos do vetor e imprima essa média*/
#include <stdio.h>

int media(int vetor[], int *tamanho) {
    int soma = 0, media;
    for (int i = 0; i < (*tamanho); i++) {
        soma += vetor[i];
    }
    media = soma/(*tamanho);
    return media;
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

    int resultado = media(vetor, &tamanho);
    printf("A soma de todos os elementos é: %d\n", resultado);

    return 0;
}
