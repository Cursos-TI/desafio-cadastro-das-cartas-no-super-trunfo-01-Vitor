#include <stdio.h>

int main(){

    // Declarando as variáveis
    int populacao, populacao2;
    int pontos_turisticos, pontos_turisticos2;
    float PIB, PIB2;
    float area, area2;
    char cidade[50], cidade2[50];
    char estado, estado2;
    char codigocarta1[4], codigocarta2[4];

    // Carta 1
    printf("--- Criando a carta 1 ---\n");

    printf("Escolha uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado);  // Correção aqui
    printf("Estado: %c\n", estado);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigocarta1);
    printf("Código Carta 1: %s\n", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("PIB: %.2f bilhões de reais\n", PIB);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Área em km²: %.2f\n", area);


    // Carta 2
    printf(" --- Criando a carta 2 ---\n");

    printf("Escolha uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigocarta2);
    printf("Código Carta 2: %s\n", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Cidade: %s\n", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("População: %d\n", populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Área em km²: %.2f\n", area2);

    //Inserindo a densidade populacional e pib per capita

    return 0;
}