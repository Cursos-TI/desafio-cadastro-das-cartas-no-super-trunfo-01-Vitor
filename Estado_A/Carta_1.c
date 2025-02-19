#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main () {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int populacao, pontos_turisticos;
    float pib, areakm2, densidade_populacional, pib_per_capita; // densidade populacional e pib per capita já criados para o segundo nível do desafio
    char nome_da_cidade[50]; 
    char estado = 'A'; //Estado definido como "A"
    char codigo_da_carta [4] = "A01"; //Código da carta definido em 4 caracteres: "AO1"
    
    printf("Estado: %c\n", estado); //Imprimindo o Estado
    printf("Código da carta: %s\n", codigo_da_carta); //Imprimindo o Código da Carta
    
    printf("Entre com o nome da cidade: "); //Solicitando ao usuário que entre com o nome da cidade
    scanf(" %[^\n]", nome_da_cidade); //Lendo o nome da cidade, OBS: %[^\n] foi usado para permitir que ao inserir a cidade, o usuário possa usar o caractere "Espaço" sem que apresente bugs na interação/leitura.
    printf("Cidade: %s\n", nome_da_cidade); //Exibindo o nome da cidade
    
    printf("Entre com a população: "); //Solicitando ao usuário que entre com a população da cidade
    scanf("%d", &populacao); //Lendo a população da cidade
    printf("População: %d\n", populacao); //Exibindo a população da cidade

    printf("Entre com a área em KM²: "); //Solicitando ao usuáro que entre com a área em km²
    scanf(" %f", &areakm2); //Lendo a área em km²
    printf("Área: %f km²\n", areakm2); //Exibindo a área em km²

    printf("Entre com o PIB: "); //Solicitando ao usuário que entre com o PIB da cidade
    scanf("%f", &pib); //Lendo o PIB da cidade
    printf("PIB: %f bilhões de reais\n", pib); //Exibindo o PIB da cidade

    printf("Entre com o Número de Pontos Turisticos: "); //Solicitando ao usuário que entre com a quantidade de pontos turísticos
    scanf(" %d", &pontos_turisticos); //Lendo a quantidade de pontos turísticos
    printf("Pontos Turisticos: %d\n", pontos_turisticos); //Exibindo a quantidade de pontos turísticos

    
    /* Código para o segundo nível, criando a densidade populacional e pib per capita e após, realizando os cálculos solicitados pelo desafio

    printf("Entre com a Densidade Populacional: ");
    scanf("%f", &densidade_populacional);
    printf("Densidade Populacional: %.2f km²\n", densidade_populacional);

    printf("Entre com o PIB per Capita \n");
    scanf("%f", &pib_per_capita);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    

    Calculando a densidade populacional

    densidade_populacional = ((float) populacao / (areakm2));
    printf("Densidade Populacional: %.2f\n", densidade_populacional);

    // calculando o pib per capita

    pib_per_capita = pib_per_capita / populacao;
    printf("PIB per Capita: %.2f\n", pib_per_capita);

    */
    return 0;


    
}