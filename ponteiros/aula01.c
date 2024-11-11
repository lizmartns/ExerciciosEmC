/*Ponteiros - permitem manipular diretamente dados contidos em endereços específicos de memória. Seu objetivo é armazenar o endereço de outra variável e acessar outros objetos através dos seus endereços.
Um ponteiro deve apontar para o endereço de memória que está em outra variável
ptr = &ch; -> ponteiro está recebendo o endereço de ch

*/
#include <stdio.h>

void incrementa(int * valor){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*valor));
    printf("O endereço de memória é %p\n\n", valor);
    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*valor));
    printf("O endereço de memória é %p\n", valor);

}

int main(){
    int cont = 10; 

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", cont);
    printf("O endereço de memória é %p\n\n", &cont);

    incrementa(&cont);
 
    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", cont);
    printf("O endereço de memória é %p\n", &cont);

    return 0;
}