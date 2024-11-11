// Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

#include <stdio.h>
int main(){

    int a = 10;
    float b = 20.0;
    char c = 'a';

    int *ptr_a = &a;
    float *ptr_b = &b;
    char *ptr_c = &c;

    printf("Valores iniciais :\n");
    printf("O valor da variável inteira é %d\n", a);
    printf("O valor da real inteira é %f\n", b);
    printf("O valor da char inteira é %c\n", c);

    *ptr_a = 15;   
    *ptr_b = 25.5; 
    *ptr_c = 'B'; 

    printf("Valores após modificação :\n");
    printf("O valor da variável inteira é %d\n", a);
    printf("O valor da real inteira é %f\n", b);
    printf("O valor da char inteira é %c\n", c);

    return 0;

}