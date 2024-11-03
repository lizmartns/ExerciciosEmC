//Escreva duas funções: uma que converta uma temperatura de Celsius para Fahrenheit e outra que converta de Fahrenheit para Celsius. No programa principal, permita que o usuário escolha aconversão desejada, leia a temperatura e chame a função correspondente. Exiba o resultado daconversão.
#include <stdio.h>

float celsiusFahrenheit(float tempC){
    return (tempC * 1.8) + 32;
}

float fahrenheitCelsius(float tempF){
    return (tempF - 32) / 1.8;
}

int main(){
    int escolha;
    float temperatura, resultado;

    printf("Escolha a conversao desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    if(escolha ==1){
        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        resultado = celsiusFahrenheit(temperatura);
        printf("A conversao de %.2fC para Fahrenheit é: %.2fF\n", temperatura, resultado);
    }
    else if(escolha ==2){
        printf("Insira a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = fahrenheitCelsius(temperatura);
        printf("A conversao de %.2fF para Celsius é: %.2fC\n", temperatura, resultado);
    }
    else{
        printf("Opção inválida");

    }
    return 0;
}