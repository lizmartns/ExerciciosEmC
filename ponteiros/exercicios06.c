/*crie uma função que receba uma matriz 3/3 e retorne a soma de todos os elementos*/
#include <stdio.h>

int somaMatriz(int (*matriz)[3]) {
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += *(*(matriz + i) + j);
        }
    }

    return soma;
}

int main() {
    int matriz[3][3] = {
        {9, 5, 7},
        {1, 6, 8},
        {2, 4, 3}
    };

    int resultado = somaMatriz(matriz);
    printf("A soma de todos os elementos da matriz é: %d\n", resultado);

    return 0;
}