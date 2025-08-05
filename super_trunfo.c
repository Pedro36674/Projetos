#include <stdio.h>

int main() {

    // Variáveis para armazenar os dados da carta
    char estado;
    char codigoCarta[2], cidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    char estado2;
    char codigoCarta2[2], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Solicita os dados ao usuário
    printf("Insira a letra inicial do estado de A a H: ");
    scanf(" %c", &estado);
    printf("Insira o código da carta de 01 a 04 (ex: A01): ");
    scanf(" %s", codigoCarta);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população do estado: ");
    scanf("%i", &populacao);
    printf("Insira a área do estado: ");
    scanf("%f", &area);
    printf("Insira o PIB do estado: ");
    scanf("%f", &pib);
    printf("Insira a quantidade de pontos turísticos do estado: ");
    scanf("%i", &pontosTuristicos);

    printf("Insira a letra inicial do estado de A a H: ");
    scanf(" %c", &estado2);
    printf("Insira o código da carta de 01 a 04(ex: A01): ");
    scanf(" %s", codigoCarta2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população do estado: ");
    scanf("%i", &populacao2);
    printf("Insira a área do estado: ");
    scanf("%f", &area2);
    printf("Insira o PIB do estado: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos do estado: ");
    scanf("%i", &pontosTuristicos2);


    // Exibe os dados da carta
    printf("\nDados da  primeira carta:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %i\n", pontosTuristicos);
    printf("\n");
    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %i\n", pontosTuristicos2);

}