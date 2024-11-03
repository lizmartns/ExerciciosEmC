#include <stdio.h>

//Crie uma função que receba um vetor de inteiros e o tamanho do vetor, e retorne a soma de todos os elementos. No programa principal, leia o tamanho do vetor, os elementos do vetor do usuário, chame a função e exiba o resultado.
int vetor(int vetor[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}