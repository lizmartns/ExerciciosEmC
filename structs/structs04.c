//Crie uma struct chamada Retangulo com os campos largura e altura (ambos do tipo float). Escreva um programaque leia a largura e a altura de um retângulo, calcule e imprima sua área e perímetro

#include <stdio.h>

struct Retangulo{
    float largura;
    float altura;
}retangulo;

int main(){

    int area, perimetro;

    printf("Escreva a largura do retangulo: ");
    scanf("%f", &retangulo.largura);

    printf("Escreva a altura do retangulo: ");
    scanf("%f", &retangulo.altura);

    area = retangulo.largura*retangulo.altura;
    perimetro = 2*retangulo.altura+2*retangulo.largura;

    printf("O perimetro do retangulo e: %d\n", perimetro);
    printf("A area do retangulo e: %d", area);
    return 0;
}