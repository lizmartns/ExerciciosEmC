// Crie uma struct chamada Funcionario com os campos: nome (string), idade (inteiro), salário (float) e cargo (string).Escreva um programa que cadastre 3 funcionários e depois imprima os dados do funcionário com o maior salário.

#include <stdio.h>

struct Funcionario{
    char nome[100];
    float salario;
    char cargo[25];
    int idade;
}funcionarios[3];

int main(){ 
    for( int i=0; i<3; i++){
        printf("Escreva o nome do funcionario %d: ", i+1);
        scanf("%99s", &funcionarios[i].nome);

        printf("Escreva a idade do funcionario%d: ", i+1);
        scanf("%d", &funcionarios[i].idade);

        printf("Escreva o salario do funcionario %d: ", i+1);
        scanf("%f", &funcionarios[i].salario);

        printf("Escreva o cargo do funcionario %d: ", i+1);
        scanf("%24s", &funcionarios[i].salario);
    }
     struct Funcionario funcionarioMaiorSalario = funcionarios[0]; 
    for (int i = 1; i < 3; i++) { 
        if (funcionarios[i].salario >funcionarioMaiorSalario.salario){ 
            funcionarioMaiorSalario  = funcionarios[i]; 
        } 

    } 
        printf("\nDados do Funcionario de Maior Salario:\n");
        printf("Nome: %s\n",funcionarioMaiorSalario.nome); 
        printf("Idade: %d\n",funcionarioMaiorSalario.idade);
        printf("Salario %f\n: ",funcionarioMaiorSalario.salario); 
        printf("Cargo: %s\n",funcionarioMaiorSalario.cargo);
       

    return 0;
}