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

    // Criação da Carta 1
    printf("--- Criando a carta 1 ---\n");

    printf("Escolha uma letra para representar o estado (A-H): "); //Solicitando ao usuário que digite uma letra de A até H para representar o estado
    scanf(" %c", &estado);  //Lendo a informação inserida pelo usuário referente a escolha da letra do estado

    printf("Digite o código da carta (ex: A01, A02...): "); //Solicitando ao usuário que digite o código da carta
    scanf("%s", codigocarta1); //Lendo a informação inserida pelo usuário referente a escolha do código da carta

    printf("Digite o nome da cidade: "); //Solicitando ao usuário que digite o nome da cidade
    scanf(" %[^\n]", cidade); //Lendo a informação inserida pelo usuário referente a escolha do nome da cidade

    printf("Digite a população da cidade: "); //Solicitando ao usuário que digite a população da cidade
    scanf("%d", &populacao); //Lendo a informação inserida pelo usuário referente a escolha da população da cidade

    printf("Digite a quantidade de pontos turísticos: "); //Solicitando ao usuário que digite a quantidade de pontos turísticos
    scanf("%d", &pontos_turisticos); //Lendo a informação inserida pelo usuário referente a escolha da quantidade de pontos turísticos

    printf("Digite o PIB da cidade: "); //Solicitando ao usuário que digite o PIB da cidade
    scanf("%f", &PIB); //Lendo a informação inserida pelo usuário referente a escolha do PIB da cidade

    printf("Digite a área da cidade: "); //Solicitando ao usuário que digite a área da cidade
    scanf("%f", &area); //Lendo a informação inserida pelo usuário referente a escolha da área da cidade

    // O cadastro da carta 2 é a mesma coisa da carta 1 mudando apenas a numeração da carta

    // Carta 2
    printf(" --- Criando a carta 2 ---\n");

    printf("Escolha uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);


    //Exibindo os dados da carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código Carta 1: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Área em km²: %.2f\n", area);

    //Exibindo os dados da carta 2 

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código Carta 1: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área em km²: %.2f\n", area2);


    return 0;
}