#include <stdio.h>

int main() {

    // Variáveis para armazenar os dados da carta
    char estado;
    char codigoCarta[5], cidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    char estado2;
    char codigoCarta2[5], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade, densidade2, pibPerCapita, pibPerCapita2;

    // Solicita os dados da primeira carta
    printf("Insira a letra inicial do estado de A a H: ");
    scanf(" %c", &estado);
    printf("Insira o código da carta de 01 a 04 (ex: A01): ");
    scanf(" %s", codigoCarta);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população do estado: ");
    scanf("%d", &populacao);
    printf("Insira a área do estado: ");
    scanf("%f", &area);
    printf("Insira o PIB do estado: ");
    scanf("%f", &pib);
    printf("Insira a quantidade de pontos turísticos do estado: ");
    scanf("%d", &pontosTuristicos);
    
    // Solicita os dados da segunda carta
    printf("Insira a letra inicial do estado de A a H: ");
    scanf(" %c", &estado2);
    printf("Insira o código da carta de 01 a 04(ex: A01): ");
    scanf(" %s", codigoCarta2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população do estado: ");
    scanf("%d", &populacao2);
    printf("Insira a área do estado: ");
    scanf("%f", &area2);
    printf("Insira o PIB do estado: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos do estado: ");
    scanf("%d", &pontosTuristicos2);

     // Calculando o PIB per capita (Carta 1)
    pibPerCapita = pib / populacao;

    // Calculando a densidade populacional (Carta 1)
    densidade = populacao / area;

    // Calculando o PIB per capita (Carta 2)
    pibPerCapita2 = pib2 / populacao2;

    // Calculando a densidade populacional (Carta 2)
    densidade2 = populacao2 / area2;

    // Exibe os dados da carta
    printf("\nDados da  primeira carta:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibPerCapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    printf("\n");

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibPerCapita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
} 
