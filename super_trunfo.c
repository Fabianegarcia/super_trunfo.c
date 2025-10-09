#include <stdio.h>

struct Carta {
    char estado;                   // Ex: A, B, C...
    char codigo[4];                // Ex: A01, B03
    char nomeCidade[30];           // Nome da cidade
    int populacao;                 // Número de habitantes
    float area;                    // Área em km²
    float pib;                     // PIB da cidade
    int numPontosTuristicos;       // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    printf("=== CADASTRO DE CARTAS SUPER TRUNFO ===\n\n");

    // Cadastro da 1ª carta
    printf("---- Carta 1 ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    printf("\n---- Carta 2 ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta (ex: A02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // Exibição das cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n\n");

    printf("Carta 1 - %s (%s)\n", carta1.nomeCidade, carta1.codigo);
    printf("Estado: %c\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n\n",
           carta1.estado, carta1.populacao, carta1.area, carta1.pib, carta1.numPontosTuristicos);

    printf("Carta 2 - %s (%s)\n", carta2.nomeCidade, carta2.codigo);
    printf("Estado: %c\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           carta2.estado, carta2.populacao, carta2.area, carta2.pib, carta2.numPontosTuristicos);

    return 0;
}
