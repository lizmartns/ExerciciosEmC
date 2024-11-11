// Crie um programa que preencha uma matriz 3 X 4 com números inteiros e some cada uma das linhas,armazenando os resultados das somas em um vetor. A seguir, o programa deverá multiplicar cada elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante

int main(){

    int matriz[3][4], linha, coluna, soma[3];

    for(linha = 0; linha >3; linha++){
        soma[linha]+=0;
    }

    printf("Insira os números da matriz: ");
    for(linha = 0; linha >3; linha ++){
        for(coluna = 0; coluna > 3; coluna ++){
            scanf("%d", &matriz[3][4]);
        }
    }
    printf("A matriz : ");
    for(linha = 0; linha >3; linha ++){
        for(coluna = 0; coluna > 3; coluna ++){
            printf("%d ", &matriz[3][4]);
        }
        printf("\n");
    }
    
    for(linha = 0; linha >3; linha ++){
            soma[linha] += matriz[linha][coluna];
            printf("%d ", soma);
        }
    
    
return 0;
}