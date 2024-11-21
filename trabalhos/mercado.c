#include <stdio.h>
#include <string.h>

// Definindo a estrutura de um produto
typedef struct {
    int id;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

// Função para exibir todos os produtos
void listarProdutos(Produto produtos[], int numProdutos) {
    printf("\n--- Produtos Disponíveis ---\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("ID: %d | Nome: %s | Preço: %.2f | Quantidade: %d\n",
               produtos[i].id, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }
}

// Função para realizar uma venda
void realizarVenda(Produto produtos[], int numProdutos) {
    int id, quantidade;
    printf("\n--- Realizar Venda ---\n");
    printf("Digite o ID do produto: ");
    scanf("%d", &id);
    printf("Digite a quantidade a ser vendida: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].id == id) {
            if (produtos[i].quantidade >= quantidade) {
                produtos[i].quantidade -= quantidade;
                printf("Venda realizada! Total: R$ %.2f\n", produtos[i].preco * quantidade);
            } else {
                printf("Estoque insuficiente!\n");
            }
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

// Função para cadastrar um novo produto
void cadastrarProduto(Produto produtos[], int *numProdutos) {
    Produto novo;
    printf("\n--- Cadastrar Produto ---\n");
    novo.id = *numProdutos + 1; // Gerar ID automaticamente
    printf("Nome do produto: ");
    scanf(" %[^\n]s", novo.nome); // Ler string com espaços
    printf("Preço do produto: ");
    scanf("%f", &novo.preco);
    printf("Quantidade em estoque: ");
    scanf("%d", &novo.quantidade);

    produtos[*numProdutos] = novo;
    (*numProdutos)++;
    printf("Produto cadastrado com sucesso!\n");
}

// Função principal
int main() {
    Produto produtos[100]; // Array para armazenar até 100 produtos
    int numProdutos = 0;
    int opcao;

    do {
        printf("\n--- Sistema de Mercado ---\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Realizar Venda\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &numProdutos);
                break;
            case 2:
                listarProdutos(produtos, numProdutos);
                break;
            case 3:
                realizarVenda(produtos, numProdutos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}