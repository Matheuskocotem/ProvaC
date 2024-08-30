#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float valor;
    char unidadezona[20];
} Conversao;

Conversao conversoes[] = {
    {0.621371, "milhas"},
    {1000, "metros"},
    {3.28084, "pes"},
    {100, "centimetros"},
    {39.3701, "polegadas"},
    {12, "polegadas"},
    {0.393701, "polegadas"}
};

int main() {
    float valor, resultado;
    int opcao, opcaoConversao;
    
    printf("Selecione a unidade para converter:\n");
    printf("1. km\n");
    printf("2. Milhas\n");
    printf("3. Metros\n");
    printf("4. Pezao\n");
    printf("5. Centímetros\n");
    printf("6. Polegadas\n");
    scanf("%d", &opcao);
    
    printf("Digite o valor para converter: ");
    scanf("%f", &valor);
    
    switch(opcao) {
        case 1: 
            printf("Converter para:\n");
            printf("1. Milhas\n");
            printf("2. Metros\n");
            scanf("%d", &opcaoConversao);
            if (opcaoConversao == 1) {
                resultado = valor * conversoes[0].valor;
                printf("%.2f quilômetros é igual a %.2f %s\n", valor, resultado, conversoes[0].unidadezona);
            } else if (opcaoConversao == 2) {
                resultado = valor * conversoes[1].valor;
                printf("%.2f quilômetros é igual a %.2f %s\n", valor, resultado, conversoes[1].unidadezona);
            }
            break;
        case 2:
            printf("Converter para:\n");
            printf("1. Quilômetros\n");
            printf("2. Metros\n");
            scanf("%d", &opcaoConversao);
            if (opcaoConversao == 1) {
                resultado = valor / conversoes[0].valor;
                printf("%.2f milhas é igual a %.2f %s\n", valor, resultado, conversoes[0].unidadezona);
            } else if (opcaoConversao == 2) {
                resultado = valor * conversoes[0].valor * conversoes[1].valor;
                printf("%.2f milhas é igual a %.2f %s\n", valor, resultado, conversoes[1].unidadezona);
            }
            break;
        case 3: 
            printf("Converter para:\n");
            printf("1. Quilômetros\n");
            printf("2. Milhas\n");
            printf("3. Pés\n");
            printf("4. Centímetros\n");
            printf("5. Polegadas\n");
            scanf("%d", &opcaoConversao);
            if (opcaoConversao == 1) {
                resultado = valor / conversoes[1].valor;
                printf("%.2f metros é igual a %.2f %s\n", valor, resultado, conversoes[1].unidadezona);
            } else if (opcaoConversao == 2) {
                resultado = valor / (conversoes[0].valor * conversoes[1].valor);
                printf("%.2f metros é igual a %.2f %s\n", valor, resultado, conversoes[0].unidadezona);
            } else if (opcaoConversao == 3) {
                resultado = valor * conversoes[2].valor;
                printf("%.2f metros é igual a %.2f %s\n", valor, resultado, conversoes[2].unidadezona);
            } else if (opcaoConversao == 4) {
                resultado = valor * conversoes[3].valor;
                printf("%.2f metros é igual a %.2f %s\n", valor, resultado, conversoes[3].unidadezona);
            } else if (opcaoConversao == 5) {
                resultado = valor * conversoes[4].valor;
                printf("%.2f metros é igual a %.2f %s\n", valor, resultado, conversoes[4].unidadezona);
            }
            break;
    }
    
    return 0;
}
