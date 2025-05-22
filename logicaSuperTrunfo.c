#include <stdio.h>
#include <string.h>

int main() {
    // Mensagem inicial
    printf("Bem-vindo ao jogo de Super Trunfo de Cidades!\n");

    // Dados da carta 1
    char estado1[50], codigo1[5], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Dados da carta 2
    char estado2[50], codigo2[5], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Entrada de dados para a carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %s", estado2);
    printf("Código: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;

    // Menu do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Menu do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turísticos\n"); break;
                case 5: printf("5. Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Validação das escolhas
    if (opcao1 == opcao2 || opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5) {
        printf("\nErro: Opções inválidas ou repetidas!\n");
        return 1;
    }

    // Obter valores
    float getValor(int opcao, int carta) {
        switch (opcao) {
            case 1: return carta == 1 ? populacao1 : populacao2;
            case 2: return carta == 1 ? area1 : area2;
            case 3: return carta == 1 ? pib1 : pib2;
            case 4: return carta == 1 ? pontosTuristicos1 : pontosTuristicos2;
            case 5: return carta == 1 ? densidade1 : densidade2;
            default: return 0;
        }
    }

    char* getNomeAtributo(int opcao) {
        switch (opcao) {
            case 1: return "População";
            case 2: return "Área";
            case 3: return "PIB";
            case 4: return "Pontos Turísticos";
            case 5: return "Densidade Demográfica";
            default: return "Desconhecido";
        }
    }

    float valor1_attr1 = getValor(opcao1, 1);
    float valor2_attr1 = getValor(opcao1, 2);
    float valor1_attr2 = getValor(opcao2, 1);
    float valor2_attr2 = getValor(opcao2, 2);

    int pontosCarta1 = 0, pontosCarta2 = 0;

    printf("\n--- Comparação ---\n");
    printf("Cidade 1: %s\n", nomeCidade1);
    printf("Cidade 2: %s\n\n", nomeCidade2);

    // Comparação atributo 1
    printf("%s:\n", getNomeAtributo(opcao1));
    printf("  %s: %.2f\n", nomeCidade1, valor1_attr1);
    printf("  %s: %.2f\n", nomeCidade2, valor2_attr1);
    if (valor1_attr1 == valor2_attr1) {
        pontosCarta1++; pontosCarta2++;
        printf("  Resultado: Empate\n\n");
    } else {
        int carta1Vence = (opcao1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
        if (carta1Vence) {
            pontosCarta1++;
            printf("  Vencedor: %s\n\n", nomeCidade1);
        } else {
            pontosCarta2++;
            printf("  Vencedor: %s\n\n", nomeCidade2);
        }
    }

    // Comparação atributo 2
    printf("%s:\n", getNomeAtributo(opcao2));
    printf("  %s: %.2f\n", nomeCidade1, valor1_attr2);
    printf("  %s: %.2f\n", nomeCidade2, valor2_attr2);
    if (valor1_attr2 == valor2_attr2) {
        pontosCarta1++; pontosCarta2++;
        printf("  Resultado: Empate\n\n");
    } else {
        int carta1Vence = (opcao2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
        if (carta1Vence) {
            pontosCarta1++;
            printf("  Vencedor: %s\n\n", nomeCidade1);
        } else {
            pontosCarta2++;
            printf("  Vencedor: %s\n\n", nomeCidade2);
        }
    }

    // Resultado final
    printf("Pontuação final:\n");
    printf("  %s: %d ponto(s)\n", nomeCidade1, pontosCarta1);
    printf("  %s: %d ponto(s)\n", nomeCidade2, pontosCarta2);

    printf("\nResultado final: ");
    if (pontosCarta1 > pontosCarta2)
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pontosCarta2 > pontosCarta1)
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}
