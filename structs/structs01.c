// Que crie uma struct chamada Livro com os campos: título (string), autor (string), ano de publicação (inteiro) e ISBN(string). Escreva um programa que permita ao usuário cadastrar 5 livros e depois imprima os dados de cada livro

#include <stdio.h>

struct Livro{
    char titulo[100];
    char autor[100];
    char isbn[20];
    int anoDePublicacao;
}livros[5];

int main(){ 
    for( int i=0; i<5; i++){
        printf("Escreva o titulo do livro %d: ", i+1);
        scanf("%99s", &livros[i].titulo);

        printf("Escreva o autor do livro %d: ", i+1);
        scanf("%99s", &livros[i].autor);

        printf("Escreva o ano de publicacao do livro %d: ", i+1);
        scanf("%d", &livros[i].anoDePublicacao);

        printf("Escreva o ISBN do livro %d: ", i+1);
        scanf("%20s", &livros[i].isbn);
    }
    
    for( int i=0; i<5; i++){
        printf("\nDados do Livro %d:\n", i + 1);
        printf("Titulo: %s\n",livros[i].titulo); 
        printf("Autor: %s\n",livros[i].autor);
        printf("Ano de Publicacao %d\n: ",livros[i].anoDePublicacao); 
        printf("ISBN: %s\n",livros[i].isbn);
       
    }

    return 0;
}