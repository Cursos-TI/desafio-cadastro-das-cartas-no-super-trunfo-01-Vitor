#include <stdio.h> //Biblioteca necessária para utilizar as funções de entrada e saída
#include <stdlib.h> //Biblioteca necessária para utilizar a função system ("pause")

int main(){

    // Declarando as variáveis
    unsigned long int populacao, populacao2;
    int pontos_turisticos, pontos_turisticos2;
    int resultado, resultado2;
    float PIB, PIB2;
    float area, area2;
    float densidade, densidade2;
    float pib_per_capita, pib_per_capita2;
    float superPoder1, superPoder2;
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
    scanf("%ld", &populacao); //Lendo a informação inserida pelo usuário referente a escolha da população da cidade

    printf("Digite a quantidade de pontos turísticos: "); //Solicitando ao usuário que digite a quantidade de pontos turísticos
    scanf("%d", &pontos_turisticos); //Lendo a informação inserida pelo usuário referente a escolha da quantidade de pontos turísticos

    printf("Digite o PIB da cidade: "); //Solicitando ao usuário que digite o PIB da cidade
    scanf("%f", &PIB); //Lendo a informação inserida pelo usuário referente a escolha do PIB da cidade

    printf("Digite a área da cidade: "); //Solicitando ao usuário que digite a área da cidade
    scanf("%f", &area); //Lendo a informação inserida pelo usuário referente a escolha da área da cidade

    printf("\n");
    

        //Segundo nível do desafio super trunfo, calculando a densidade e o pib per capita 
    
    //Definindo a densidade populacional e o pib per capita carta 1
    densidade = ((float)populacao / area); //Definindo a densidade populacional da carta 1
    pib_per_capita = PIB / populacao; //Definindo o PIB per capita da carta 1

    // O cadastro da carta 2 é a mesma coisa da carta 1 mudando apenas as variaveis e a numeração da carta

    // Carta 2
    printf(" --- Criando a carta 2 ---\n");

    printf("Escolha uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

        //Segundo nível do desafio super trunfo, calculando a densidade e o pib per capita
    
    //Definindo a densidade populacional e o pib per capita carta 2
    densidade2 = ((float)populacao2) / area2; //Definindo a densidade populacional da carta 2
    pib_per_capita2 = PIB2 / populacao2; //Definindo o PIB per capita da carta 2

    //definindo e calculando o super poder (Nivel Mestre - Desafio Super Trunfo)

    superPoder1 = ((float) populacao + area + PIB + (float) pontos_turisticos + pib_per_capita + (densidade > 0 ? (1 / densidade) : 0));
    superPoder2 = ((float) populacao2 + area2 + PIB2 + (float) pontos_turisticos2 + pib_per_capita2 + (densidade2 > 0 ? (1 / densidade2) : 0));


    //Exibindo os dados da carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade);
    printf("População: %ld\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Área em km²: %.2f\n", area);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", superPoder1);

    //Exibindo os dados da carta 2 

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área em km²: %.2f\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    //Desafio Nivel Mestre - Cálculo do Super Poder, Comparação de cartas e Exibição do resultado das comparações

    //Comparação das Cartas:


    printf("\nComparação das Cartas:\n");

    printf("\nPopulação: Carta 1 venceu? %d\n", populacao > populacao2);
    printf("Área: Carta 1 venceu? %d\n", area > area2);
    printf("PIB: Carta 1 venceu? %d\n", PIB > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu? %d\n", pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu? %d\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu? %d\n", superPoder1 > superPoder2);

    //Lembrando que a resposta é entre 0 e 1, sendo 0 para não e 1 para sim. 

    system("pause"); //Usado para manter o arquivo executável aberto após a execução do código.

    return 0;
}