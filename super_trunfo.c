#include <stdio.h>

int main() {

    // Variáveis para armazenar os dados da carta
    char estado;
    char codigoCarta[5], cidade[50];
    unsigned long int populacao;
    int opcao;
    int pontosTuristicos;
    float area, pib, densidade, pibPerCapita, superPoder;

    char estado2;
    char codigoCarta2[5], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;
    float superPoder2;
    int resultadoComparacaoDensidade , resultadoComparacaoPibPerCapita, resultadoComparacaoPontosTuristicos, resultadoComparacaoSuperPoder;
    int resultadoComparacaoPopulacao, resultadoComparacaoArea, resultadoComparacaoPib;


    // Solicita os dados da primeira carta
    printf("Insira a letra inicial do estado de A a H: ");
    scanf(" %c", &estado);
    printf("Insira o código da carta de 01 a 04 (ex: A01): ");
    scanf(" %s", codigoCarta);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população do estado: ");
    scanf("%lu", &populacao);
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
    scanf("%lu", &populacao2);
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

    // Calculando o super poder (Carta 1)
    superPoder = (populacao + area + pib + pontosTuristicos + pibPerCapita + (1/densidade));

    // Calculando o super poder (Carta 2)
    superPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidade2));

    // Quebra de linha para melhor visualização
    printf("\n");

    // Exibe os dados da carta
    printf("\nDados da  primeira carta:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibPerCapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibPerCapita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("\n");
    
    // Menu para escolher o atributo a ser comparado
    printf("\nEscolha o atributo para comparar entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    scanf("%d", &opcao);


    // Exibindo os resultados das comparações
    switch (opcao)
    {
    case 1:
        if (populacao > populacao2) {
            printf("A carta %s vence a carta %s na comparação de população com valor de %lu.\n", codigoCarta, codigoCarta2, populacao);
        } else if (populacao < populacao2) {
            printf("A carta %s vence a carta %s na comparação de população com valor de %lu.\n", codigoCarta2, codigoCarta);
        } else {
            printf("Empate na comparação de população entre as cartas %s e %s.\n", codigoCarta, codigoCarta2);
        }
        break;
    
    case 2:
        if (area > area2) {
            printf("A carta %s vence a carta %s na comparação de área com valor de %.2f.\n", codigoCarta, codigoCarta2, area);
        } else if (area < area2) {
            printf("A carta %s vence a carta %s na comparação de área com valor de %.2f.\n", codigoCarta2, codigoCarta, area2);
        } else {
            printf("Empate na comparação de área entre as cartas %s e %s.\n", codigoCarta, codigoCarta2);
        }
        break;
    
    case 3:
        if (pib > pib2) {
            printf("A carta %s vence a carta %s na comparação de PIB com valor de %.2f.\n", codigoCarta, codigoCarta2, pib);
        } else if (pib < pib2) {
            printf("A carta %s vence a carta %s na comparação de PIB com valor de %.2f.\n", codigoCarta2, codigoCarta, pib2);
        } else {
            printf("Empate na comparação de PIB entre as cartas %s e %s.\n", codigoCarta, codigoCarta2);
        }
        break;
    case 4:
        if (pontosTuristicos > pontosTuristicos2) {
            printf("A carta %s vence a carta %s na comparação de pontos turísticos com valor de %i.\n", codigoCarta, codigoCarta2, pontosTuristicos);
        } else if (pontosTuristicos < pontosTuristicos2) {
            printf("A carta %s vence a carta %s na comparação de pontos turísticos com valor de %i.\n", codigoCarta2, codigoCarta, pontosTuristicos2);
        } else {
            printf("Empate na comparação de pontos turísticos entre as cartas %s e %s.\n", codigoCarta, codigoCarta2);
        }
        break;
    case 5:
        if (densidade < densidade2) {
            printf("A carta %s vence a carta %s na comparação de densidade populacional com valor de %.2f.\n", codigoCarta, codigoCarta2, densidade);
        } else if (densidade > densidade2) {
            printf("A carta %s vence a carta %s na comparação de densidade populacional com valor de %.2f.\n", codigoCarta2, codigoCarta, densidade2);
        } else {
            printf("Empate na comparação de densidade populacional entre as cartas %s e %s.\n", codigoCarta, codigoCarta2);
        }
        break;

    default:
        printf("Opção inválida. Por favor, escolha um número entre 1 e 5.\n");
        break;
    }


    return 0;
}
