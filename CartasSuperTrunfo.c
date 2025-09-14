#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    printf("Novo commit\n");

    int carta1;
    char estado[20];
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    int carta2;
    char estado2[20];
    char codigo2[20];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Digite sua carta:\n");
    scanf("%d", &carta1);

    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nome);

    printf("Digite o numero da Populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a Area da cidade:\n");
    scanf("%f", &area);

    printf("Digite o pib:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);

    

    printf("Carta: %d\nEstado: %s\n", carta1, estado);
    printf("Codigo: %s\nNome: %s\n", codigo, nome);
    printf("População: %.1d\nArea: %.0fkm²\n", populacao, area);
    printf("PIB: %.0f Bilhões de Reais\nPontos Turisticos: %d\n", pib, pontosturisticos);

    printf("Digite sua carta:\n");
    scanf("%d", &carta2);

    printf("Digite o Estado:\n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nome2);

    printf("Digite o numero da Populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);

    printf("Carta2: %d\nEstado2: %s\n", carta2, estado2);
    printf("Codigo2: %s\nNome2: %s\n", codigo2, nome2);
    printf("População2: %.1d\nArea2: %.0fkm²\n", populacao2, area2);
    printf("PIB2: %.0f Bilhões de Reais\nPontos Turisticos2: %d\n", pib2, pontosturisticos2);



return 0;
} 
