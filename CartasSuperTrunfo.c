#include <stdio.h> //Biblioteca necessária para utilizar as funções de entrada e saída
#include <stdlib.h> //Biblioteca necessária para utilizar a função system ("pause")

int main(){

    //Tema 2 Super Trunfo - Nível Novato (Comparando os atributos das cartas)

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

    printf("Digite o código da carta (ex: A01, A02... A04): "); //Solicitando ao usuário que digite o código da carta
    scanf("%s", codigocarta1); //Lendo a informação inserida pelo usuário referente a escolha do código da carta

    getchar(); //Limpar o buffer do teclado

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
    

        //Segundo nível do desafio super trunfo tema 1, calculando a densidade e o pib per capita 
    
    //Definindo a densidade populacional e o pib per capita carta 1
    densidade = ((float)populacao / area); //Definindo a densidade populacional da carta 1
    pib_per_capita = PIB / populacao; //Definindo o PIB per capita da carta 1

    // O cadastro da carta 2 é a mesma coisa da carta 1 mudando apenas as variaveis e a numeração do código carta

    // Carta 2
    printf(" --- Criando a carta 2 ---\n");

    printf("Escolha uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, A02... A04): ");
    scanf("%s", codigocarta2);

    getchar(); //Limpar o buffer do teclado

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

        //Segundo nível do desafio super trunfo tema 1, calculando a densidade e o pib per capita
    
    //Definindo a densidade populacional e o pib per capita carta 2
    densidade2 = ((float)populacao2) / area2; //Definindo a densidade populacional da carta 2
    pib_per_capita2 = PIB2 / populacao2; //Definindo o PIB per capita da carta 2

    //definindo e calculando o super poder (Nivel Mestre - Desafio Super Trunfo Tema 1)

    superPoder1 = ((float) populacao + area + PIB + (float) pontos_turisticos + pib_per_capita + (densidade > 0 ? (1 / densidade) : 0));
    superPoder2 = ((float) populacao2 + area2 + PIB2 + (float) pontos_turisticos2 + pib_per_capita2 + (densidade2 > 0 ? (1 / densidade2) : 0));


    //Exibindo os dados da carta 1

    printf("\n Exibindo os dados inseridos pelo usuário das cartas 1 e 2\n");

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

    //Tema 2 - Super Trunfo - Nivel Novato (Comparando os atributos das cartas)
    
    //Comparação das Cartas:

    printf("\nComparação entre as cartas 1 e 2\n"); //Atributo por atributo

    printf("\n População \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %lu \n", cidade, populacao); //Exibindo as informações da cidade e população escolhida pelo jogador da carta 1
    printf("Carta 2: %s: %lu \n", cidade2, populacao2); //Exibindo as informações da cidade e população escolhida pelo jogador da carta 2

    //Comparação da população entre as cartas 1 e 2: Se a população da carta 1 for maior que a carta 2, carta 1 é a vencedora
    if (populacao > populacao2) {
        printf("Carta 1 %s Venceu!\n", cidade);
    
    }

    //Incluindo a condição de empate: Se a população da carta 1 for igual a carta 2, é declarado o empate
    else if (populacao == populacao2) {
        printf("Os valores escolhidos para este atributo são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se a população da carta 2 for maior que a da carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s Venceu!\n", cidade2);

    }

    //Comparando a quantidade de pontos turísticos das cartas e exibindo a carta vencedora

    printf("\n Pontos Turísticos \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %u \n", cidade, pontos_turisticos); //Exibindo as informações da cidade e pontos turísticos escolhida pelo jogador da carta 1
    printf("Carta 2: %s: %u \n", cidade2, pontos_turisticos2); //Exibindo as informações da cidade e pontos turísticos escolhida pelo jogador da carta 2

     //Comparação da quantidade de pontos turisticos entre as cartas 1 e 2: Se a quantidade de pontos da carta 1 for maior que a carta 2, carta 1 é a vencedora
    if (pontos_turisticos > pontos_turisticos2) {
        printf("Carta 1 %s Venceu!\n", cidade);

    }

    //Incluindo a condição de empate: Se a quantidade de pontos turisticos da carta 1 for igual a carta 2, é declarado o empate
    else if (pontos_turisticos == pontos_turisticos2) {
        printf("Os valores escolhidos para este atributo são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se a quantidade de pontos turisticos da carta 2 for maior que a da carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s Venceu!\n", cidade2);

    }

    //Comparando o PIB das cartas e exibindo a carta vencedora

    printf("\n PIB \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %.2f \n", cidade, PIB); //Exibindo as informações da cidade e pib escolhida pelo usuário da carta 1
    printf("Carta 2: %s: %.2f \n", cidade2, PIB2); //Exibindo as informações da cidade e pib escolhida pelo usuário da carta 2

    //Comparação do PIB entre as cartas 1 e 2: Se o PIB da carta 1 for maior que a carta 2, carta 1 é a vencedora
    if (PIB > PIB2) {
        printf("Carta 1 %s Venceu!\n", cidade);

    } 

    //Incluindo a condição de empate: Se o PIB da carta 1 for igual a carta 2, é declarado o empate
    else if (PIB == PIB2) {
        printf("Os valores escolhidos para este atributo são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se o PIB da carta 2 for maior que a carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s Venceu!\n", cidade2);

    }

    //Comparando a área das cartas e exibindo a carta vencedora

    printf("\n Área \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %.2fkm² \n", cidade, area); //Exibindo as informações da cidade e area escolhida pelo usuário da carta 1
    printf("Carta 2: %s: %.2fkm² \n", cidade2, area2); //Exibindo as informações da cidade e area escolhida pelo usuário da carta 2

    //Comparação da Área em km² entre as cartas 1 e 2: Se a área da carta 1 for maior que a carta 2, carta 1 é a vencedora
    if (area > area2) {
        printf("Carta 1 %skm² Venceu!\n", cidade);

    }

    //Incluindo a condição de empate: Se a área da carta 1 for igual a carta 2, é declarado o empate
    else if (area == area2) {
        printf("Os valores escolhidos para este atributo são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se a área da carta 2 for maior que a carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s - Venceu!\n", cidade2);

    }

    //Comparando a densidade populacional das cartas e exibindo a carta vencedora

    printf("\n Densidade Populacional \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %.2f \n", cidade, densidade); //Exibindo as informações da cidade e densidade escolhida pelo usuário da carta 1
    printf("Carta 2: %s: %.2f \n", cidade2, densidade2); //Exibindo as informações da cidade e densidade escolhida pelo usuário da carta 2

    //Comparação da densidade populacional entre as cartas 1 e 2: Se a densidade da carta 1 for menor que a carta 2, carta 1 é a vencedora
    if (densidade < densidade2) {
        printf("Carta 1 %s Venceu!\n", cidade);

    }
    //Incluindo a condição de empate: Se a densidade populacional da carta 1 for igual a carta 2, é declarado o empate
    else if (densidade == densidade2) {
        printf("Os valores escolhidos para este atributo são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se a densidade populacional da carta 2 for menor que a carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s Venceu!\n", cidade2);

    }

    //Comparando o PIB per capita das cartas e exibindo a carta vencedora

    printf("\n PIB per capita \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %.2f \n", cidade, pib_per_capita); //Exibindo as informações da cidade e pib per capita escolhida pelo usuário da carta 1
    printf("Carta 2: %s: %.2f \n", cidade2, pib_per_capita2); //Exibindo as informações da cidade e pib per capita escolhida pelo usuário da carta 2

    //Comparação do PIB per Capita entre as cartas 1 e 2: Se o pib per capita da carta 1 for maior que a carta 2, carta 1 é a vencedora
    if (pib_per_capita > pib_per_capita2) {
        printf("Carta 1 %s Venceu!\n", cidade);

    }

    //Incluindo a condição de empate: Se o pib per capita da carta 1 for igual a carta 2, é declarado o empate
    else if (pib_per_capita == pib_per_capita2) {
        printf("Os valores escolhidos para este atributo são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se o pib per capita da carta 2 for maior que a carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s Venceu!\n", cidade2);

    }

    //Comparando o super poder das cartas e exibindo a carta vencedora
    printf("\n Super Poder \n"); //Informando o atributo a ser comparado
    printf("Carta 1: %s: %.2f \n", cidade, superPoder1); //Exibindo as informações da cidade e super poder da carta 1
    printf("Carta 2: %s: %.2f \n", cidade2, superPoder2); //Exibindo as informações da cidade e super poder da carta 2

    //Comparação do Super Poder entre as cartas 1 e 2: Se o super poder da carta 1 for maior que a carta 2, carta 1 é a vencedora
    if (superPoder1 > superPoder2) {
        printf("Carta 1 %s Venceu!\n", cidade);

    }

    //Incluindo a condição de empate: Se o super poder da carta 1 for igual a carta 2, é declarado o empate
    else if (superPoder1 == superPoder2) {
        printf("A soma desses atributos são iguais, sendo declarado o empate\n");

    }

    //Incluindo a condição contrária: Se o super poder da carta 2 for maior que a carta 1, carta 2 é a vencedora
    else {
        printf("Carta 2 %s Venceu!\n", cidade2);

    }
    
    system("pause"); //Usado para manter o arquivo executável aberto após a execução do código.

    return 0;
}