#include <stdio.h>

int main() {
    // Primeira carta
    char estado1[3];
    char codigo_carta1[4];
    char nome_cidade1[10];
    int populacao1 = 0;
    float areakm21 = 0;
    float pib1 = 0;
    int pontos_turisticos1 = 0;

    // Segunda carta
    char estado2[3];
    char codigo_carta2[4];
    char nome_cidade2[10];
    int populacao2 = 0;
    float areakm22 = 0;
    float pib2 = 0;
    int pontos_turisticos2 = 0;

    // Entrada de dados - Carta 1
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf("%2s", estado1);
    printf("Codigo da carta: ");
    scanf("%3s", codigo_carta1);
    printf("Nome da cidade: ");
    scanf("%10s", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area do estado: ");
    scanf("%f", &areakm21);
    printf("PIB do estado: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados - Carta 2
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf("%2s", estado2);
    printf("Codigo da carta: ");
    scanf("%3s", codigo_carta2);
    printf("Nome da cidade: ");
    scanf("%10s", nome_cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area do estado: ");
    scanf("%f", &areakm22);
    printf("PIB do estado: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição - Carta 1
    printf("\n=========================\n");
    printf("   DADOS DA CARTA 1:\n");
    printf("=========================\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area do estado: %.2f km²\n", areakm21);
    printf("PIB do estado: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    // Exibição - Carta 2
    printf("\n=========================\n");
    printf("   DADOS DA CARTA 2:\n");
    printf("=========================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area do estado: %.2f km²\n", areakm22);
    printf("PIB do estado: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);


    return 0;
}
