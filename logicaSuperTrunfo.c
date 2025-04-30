#include <stdio.h>

int main() {

    // Dados da carta 1
    char estado1[50];
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; // PIB em bilhões de reais
    int pontosTuristicos1;

    // Dados da carta 2
    char estado2[50];
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; // PIB em bilhões de reais
    int pontosTuristicos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados da carta 1
    printf("\nDigite o estado da carta 1: ");
    scanf(" %s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Informações básicas
    printf("\nCarta 1 - %s (%s)\n", nomeCidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s)\n", nomeCidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Comparação Densidade Populacional (MENOR vence)
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("%s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
    printf("%s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu! Menor densidade populacional.\n", nomeCidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu! Menor densidade populacional.\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm a mesma densidade populacional.\n");
    }

    return 0;
}
