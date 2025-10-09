super_trunfo.c
#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
};

int main() {
    struct Carta carta1, carta2;

    // Carta 1
    strcpy(carta1.nome, "Dragão Vermelho");
    carta1.forca = 95;
    carta1.velocidade = 80;
    carta1.inteligencia = 70;

    // Carta 2
    strcpy(carta2.nome, "Cavaleiro de Gelo");
    carta2.forca = 85;
    carta2.velocidade = 75;
    carta2.inteligencia = 90;

    printf("=== SUPER TRUNFO ===\n\n");

    printf("Carta 1: %s\n", carta1.nome);
    printf("Força: %d | Velocidade: %d | Inteligência: %d\n\n",
           carta1.forca, carta1.velocidade, carta1.inteligencia);

    printf("Carta 2: %s\n", carta2.nome);
