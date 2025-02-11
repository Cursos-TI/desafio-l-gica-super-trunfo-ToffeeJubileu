#include <stdio.h>

int main() {
    
    int pontos, pontos1;
    float popul, por, area, area1, pib, pib1, populacao, populacao1, sp;
    char nome[20], nome1[20];

        printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Goiás: \n");
        scanf("%s", &nome);

        printf("Digite o Número da População: \n");
        scanf("%f", &populacao);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos);

        popul = (populacao / area);
        por = (pib / populacao);
        sp = (populacao + area + pib + pontos);

    printf("Cidade: %s\n", nome);
    printf("População: %.2f HAB\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("US$: %.2f Bi\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

    printf("Pessoas por Km²: %.2f km²\n", popul);
    printf("Salário por Pessoas: %.2f Min.\n", por);
    printf("Super Poder: %.2f Pontos\n", sp);

    printf("Pessoas por Km² é menor do que PIB?: %d\n", popul < pib);
    printf("Pontos Turísticos é maior do que Super Poder?: %d\n", pontos > sp);
    
            printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Goiás: \n");
            scanf("%s", &nome1);

            printf("Digite o Número da População: \n");
            scanf("%f", &populacao1);

            printf("Digite o Número da Área: \n");
            scanf("%f", &area1);

            printf("Digite o PIB: \n");
            scanf("%f", &pib1);

            printf("Digite o Número de Pontos Turísticos: \n");
            scanf("%d", &pontos1);

            popul = (populacao1 / area1);
            por = (pib1 / populacao1);
            sp = (populacao1 + area1 + pib1 + pontos1);

        printf("Cidade: %s\n", nome1);
        printf("População: %.2f HAB\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("US$: %.2f Bi\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos1);

        printf("Pessoas por Km²: %.2f km²\n", popul);
        printf("Salário por Pessoas: %.2f Min.\n", por);
        printf("Super Poder: %.2f Pontos\n", sp);

        printf("Pessoas por Km² é menor do que PIB?: %d\n", popul < pib);
        printf("Pontos Turísticos é maior do que Super Poder?: %d\n", pontos > sp);

        if (populacao < populacao1){
            printf("O ganhador é: %s com pontos de %.2f\n", nome, populacao);
        }else {
            printf("O ganhador é: %s com pontos de %.2f\n", nome1, populacao1);
        }
        
        if (area > area1){
            printf("O ganhador é: %s com pontos de %.2f\n", nome, area);
        }else {
            printf("O ganhador é: %s com pontos de %.2f\n", nome1, area1);
        }

        if (pib > pib1){
            printf("O ganhador é: %s com pontos de %.2f\n", nome, pib);
        }else {
            printf("O ganhador é: %s com pontos de %.2f\n", nome1, pib1);
        }

        if (pontos > pontos1){
            printf("O ganhador é: %s com pontos de %d\n", nome, pontos);
        }else {
            printf("O ganhador é: %s com pontos de %d\n", nome1, pontos1);
        }

}