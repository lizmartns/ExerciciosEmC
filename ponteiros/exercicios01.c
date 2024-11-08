#include <stdio.h>

int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("O endereço de memória é %d", &a);
    return 0; 
}