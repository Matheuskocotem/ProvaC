#include <stdio.h>

float kmPraMilha(float km) {
    return km * 0,621371;
}

float milhasPraKmzao(float milhas) {
    return milhas * 1,60934;
}

float metrosPraPezao(float metros) {
    return metros * 3,28084;
}

float pezaoPraMetros(float pes) {
    return pes * 0,3048;
}

int main(){
    int opcao;
    float valor;
    
    printf("Escolha a opção de conversão:\n");
    printf("1 - km para milhas\n");
    printf("2 - Milhas para km\n");
    printf("3 - Metros para pezao\n");
    printf("4 - pezao para metros\n");
    scanf("%d", &opcao);
    
    printf("digite o valor a ser convertido:");
    scanf("%f", &valor);
    
    switch (opcao) {
        case 1:
            printf("%.2f quilômetros é igual a %.2f milhas\n", valor, kmPraMilha(valor));
            break;
        case 2:
            printf("%.2f milhas é igual a %.2f quilômetros\n", valor, milhasPraKmzao(valor));
            break;
        case 3:
            printf("%.2f metros é igual a %.2f pés\n", valor, metrosPraPezao(valor));
            break;
        case 4:
            printf("%.2f pés é igual a %.2f metros\n", valor, pezaoPraMetros(valor));
            break;       
default:
            printf("Opção inválida\n");
    }
    return 0;
}
