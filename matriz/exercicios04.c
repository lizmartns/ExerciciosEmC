// Verifique se uma matriz 3x3 é simétrica.
// o que é matriz simétrica : A =A^t linha vria coluna

#include <stdio.h>

int main(){
    int matriz[3][3], linha, coluna;

    printf("Insira os valores da matriz: ");
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){        
            scanf("%d", &matriz[linha][coluna]);
            
        }
    }
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){  
            printf("%d", matriz[linha][coluna]);
        }
    printf("\n");
    }


    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){         
            printf("%d ", matriz[coluna][linha]);
        }
        printf("\n");
    }
    for(linha = 0; linha < 3; linha ++){
        for(coluna = 0; coluna < 3; coluna ++){
            if(matriz[coluna][linha] == matriz[linha][coluna]){
                printf("A matriz é simétrica.");
            }else{
                printf("A matriz é assimétrica.");
            }
        }
    }

    return 0;
}
