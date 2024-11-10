//Calcule e imprima a soma dos elementos de uma matriz 3x3.

#include <stdio.h>

int main(){
    int matriz[3][3], linha, coluna, soma = 0;

    printf("Insira os valores da matriz: ");
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){        
            scanf("%d", &matriz[linha][coluna]);
            soma += matriz[linha][coluna];
        }
    }

    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){
            printf("%d ", matriz[linha][coluna]);
        }
    printf("\n");
    }
printf("A soma dos elementos dessa matriz é: %d", soma);
return 0;
}