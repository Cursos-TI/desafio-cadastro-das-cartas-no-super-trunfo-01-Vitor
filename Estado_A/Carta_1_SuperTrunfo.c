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

    int populacao; //População total da cidade
    int pontos_turisticos; //Número de Pontos Turisticos da cidade
    float pib; //PIB da cidade
    float areakm2; //área em KM² da cidade
    char nome_da_cidade[50]; //Nome da cidade em até 50 caracteres
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
    printf("Entre com o Número de Pontos Turisticos: "); //Solicitando ao usuário que entre com a quantidade de pontos turísticos
    scanf(" %d", &pontos_turisticos); //Lendo a quantidade de pontos turísticos
    printf("Pontos Turisticos:%d\n", pontos_turisticos); //Exibindo a quantidade de pontos turísticos
    printf("Entre com o PIB: "); //Solicitando ao usuário que entre com o PIB da cidade
    scanf("%f", &pib); //Lendo o PIB da cidade
    printf("PIB: %f\n", pib); //Exibindo o PIB da cidade
    printf("Entre com a área em KM²: "); //Solicitando ao usuáro que entre com a área em km²
    scanf(" %f", &areakm2); //Lendo a área em km²
    printf("Área em KM²: %f\n", areakm2); //Exibindo a área em km²

    return 0;
    
}