#include <stdio.h>

int main() {
    // Mensagem inicial
    printf("Bem-vindo ao jogo de Super Trunfo! Vamos comparar duas cidades.\n");

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

    // Entrada de dados para a carta 1
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

    // Entrada de dados para a carta 2
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

    // Cálculos de densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Pergunta qual atributo o jogador quer comparar
    int opcao;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Comparação baseada no atributo escolhido
    switch (opcao) {
        case 1: // População
            printf("\nAtributo escolhido: População\n");
            printf("População de %s: %lu\n", nomeCidade1, populacao1);
            printf("População de %s: %lu\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu! Maior população.\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu! Maior população.\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas as cartas têm a mesma população.\n");
            }
            break;

        case 2: // Área
            printf("\nAtributo escolhido: Área\n");
            printf("Área de %s: %.2f km²\n", nomeCidade1, area1);
            printf("Área de %s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu! Maior área.\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu! Maior área.\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas as cartas têm a mesma área.\n");
            }
            break;

        case 3: // PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("PIB de %s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("PIB de %s: %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu! Maior PIB.\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu! Maior PIB.\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambos têm o mesmo PIB.\n");
            }
            break;

        case 4: // Número de pontos turísticos
            printf("\nAtributo escolhido: Pontos Turísticos\n");
            printf("Pontos turísticos de %s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("Pontos turísticos de %s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu! Mais pontos turísticos.\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu! Mais pontos turísticos.\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas têm o mesmo número de pontos turísticos.\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("\nAtributo escolhido: Densidade Demográfica\n");
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu! Menor densidade populacional.\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu! Menor densidade populacional.\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas têm a mesma densidade populacional.\n");
            }
           
    }

    return 0;
}
