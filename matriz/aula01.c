#include <stdio.h>

int main(){
    int matriz[3][3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna <3; coluna ++){
            matriz[linha][coluna] = linha + coluna + 2; // soma os valores das variáveis linha e coluna e adiciona 2 ao resultado
        }
    }
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna <3; coluna ++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}