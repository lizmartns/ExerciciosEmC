//Preencha e exiba uma matriz 3x3 com valores informados pelo usuário. (o formato da impressão deve estar em formato visual de matriz)

#include <stdio.h>

int main(){
    int matriz[3][3] ;
    int linha, coluna;

    printf("Insira os valores da matriz: ");
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){
            
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){
            printf("%d ", matriz[linha][coluna]);
        }
    printf("\n");
    }
    return 0;
}