//Crie uma struct chamada Ponto com os campos x e y (ambos do tipo float). Escreva um programa que leia ascoordenadas de dois pontos e calcule a distância entre eles usando a fórmula:distancia = sqrt((x2 - x1)^2 + (y2 - y1)^2)

#include <stdio.h>
#include <math.h>

struct Ponto{
    float x;
    float y;
}pontos;

int main(){
    struct Ponto p1, p2;
    float distancia=0;
    float ponto1, ponto2;

    printf("Escreva as coordenadas (x e y) do ponto 1: ");
    scanf("%f%f", &p1.x, &p1.y);

    printf("Escreva as coordenadas (x e y) do ponto 2: ");
    scanf("%f%f", &p2.x, &p2.y);

    ponto1 = (p1.x - p2.x)*(p1.x - p2.x);
    ponto2 = (p1.y - p2.y)*(p1.y - p2.y);

    distancia = sqrt(ponto1 + ponto2);

    printf("A distancia entre os dois pontos e: %f", distancia);

    return 0;
}