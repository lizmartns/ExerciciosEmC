/*declare uma variavel inicialize com qualquer valor crie um ponteiro e imprima o valor e o endereço da variavel utilizando o ponteiro*/

#include <stdio.h>

int main(){
    int a = 100, *ptr;

    ptr = &a;

    printf("O valor da variável é : %d\n", *ptr);
    printf("O valor do endereço de memória é : %d", &ptr);
    
}