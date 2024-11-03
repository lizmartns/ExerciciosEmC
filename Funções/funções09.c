#include <stdio.h> 

//Crie uma função que receba um número inteiro positivo e retorne o número de dígitos que ele possui.No programa principal, leia um número do usuário, chame a função e exiba o resultado.
int numeros(int numero){
    int contador = 0;

    while(numero > 0){
        numero/=10;
        contador ++;
    }
    return contador;
}
int main(){
    int numero;

    printf("Escreva um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("A quantidade de digitos desse numero e %d", numeros(numero));

}