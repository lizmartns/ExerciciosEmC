/*implemente uma função que receba um ponteiro para inteiro incremente o valor apontado. no main declare uma variavel e inicialize a com 0 e chame a função para incrementar o valor
imprima o valor*/
#include <stdio.h>

int ponteiro(int * ptr){
    (*ptr)++;
}
int main(){
    int a = 0;
    ponteiro(&a);

    printf("O valor do ponteiro é %d\n", a);

}