// Multiplique e imprima todos os elementos de uma matriz 3x3 por um valor informado pelo usuário.


#include <stdio.h>

int main(){
    int matriz[3][3], linha, coluna, multip;

    printf("Informe o valor que multiplicará a matriz: ");
    scanf("%d", &multip);

    printf("Insira os valores da matriz: ");
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){        
            scanf("%d", &matriz[linha][coluna]);
        }
    }
printf("A matriz multiplicada pelo número %d é:\n", multip);
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){
            printf("%d ", matriz[linha][coluna]* multip);
        }
    printf("\n");
    }
return 0;
}