#include <stdio.h>

int main() {
    
    int pontos, pontos1, opcao;
    float popul, por, area, area1, pib, pib1, populacao, populacao1, sp;
    char nome[20], nome1[20];
         
      // cadastrado a primeira carta 
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

        // calculando os ponto da primeira carta
        popul = (populacao / area);
        por = (pib / populacao);
        sp = (populacao + area + pib + pontos);

        //imprimido a primeira carta registrada
    printf("Cidade: %s\n", nome);
    printf("População: %.2f HAB\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("US$: %.2f Bi\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

    printf("Pessoas por Km²: %.2f km²\n", popul);
    printf("Salário por Pessoas: %.2f Min.\n", por);
    printf("Super Poder: %.2f Pontos\n", sp);

    //imprimido e calculando a primeira carta registrada
    printf("Pessoas por Km² é menor do que PIB?: %d\n", popul < pib);
    printf("Pontos Turísticos é maior do que Super Poder?: %d\n", pontos > sp);
    
         //cadastrando a segunda carta 
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

            //calculando os pontos da segunda carta
            popul = (populacao1 / area1);
            por = (pib1 / populacao1);
            sp = (populacao1 + area1 + pib1 + pontos1);

            //imprimindo a segunda casta registrada
        printf("Cidade: %s\n", nome1);
        printf("População: %.2f HAB\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("US$: %.2f Bi\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos1);

        printf("Pessoas por Km²: %.2f km²\n", popul);
        printf("Salário por Pessoas: %.2f Min.\n", por);
        printf("Super Poder: %.2f Pontos\n", sp);

         //imprimindo e calculando a segunda casta registrada
        printf("Pessoas por Km² é menor do que PIB?: %d\n", popul < pib);
        printf("Pontos Turísticos é maior do que Super Poder?: %d\n", pontos > sp);
    
        //lista de escolha de pontos das cartas 
     printf("Escolha uma opção de Atributos:\n");
     printf("1. Cidade de: %s\n", nome);
     printf("2. Cidade de: %s\n", nome1);
     scanf("%d", &opcao);
     printf("3. População de: %s\n", nome);
     printf("4. População de: %s\n", nome1);
     scanf("%d", &opcao);
     printf("5. área de: %s\n", nome);
     printf("6. área de: %s\n", nome1);
     scanf("%d", &opcao);
     printf("7. PID de: %s\n", nome);
     printf("8. PID de: %s\n", nome1);
     scanf("%d", &opcao);
     printf("9. Turístas de: %s\n", nome);
     printf("0. Turístas de: %s\n", nome1);
     scanf("%d", &opcao);

     //calculando resuntado de pontos de cartas 
     switch (opcao) {
     case 1:
        printf("%s", nome);
        break;
     case 2:
        printf("%s", nome1);
        break;
     case 3:
        printf("%.2f", populacao);
        break;
     case 4:
        printf("%.2f", populacao1);
        break;
     case 5:
        printf("%.2f", area);
        break;
     case 6:
        printf("%.2f", area1);
        break;
     case 7:
        printf("%.2f", pib);
        break;
     case 8:
        printf("%.2f", pib1);
        break;
     case 9:
        printf("%d", pontos);
        break;
     case 0:
        printf("%d\n", pontos1);
        break;
      }
      
      //demostração do resuntado de escolhas e pontos
      printf("!!! Calculando sua Escolha !!!\n");
      if (populacao < populacao1)
       {   printf("### Parabéns, você ganhou! é:%s ###\n", nome);
       } else if (populacao == populacao1)
       {
       printf("### Jogo empatou pontos de População ###\n");  
       } else{
          printf("### Você Perdeu! é:%s ###\n", nome1);
       }

       if (area > area1)
       {   printf("### Parabéns, você ganhou! é:%s ###\n", nome);
       } else if (area == area1)
       {
       printf("### Jogo empatou pontos de Áreas ###\n");  
       } else{
          printf("### Você Perdeu! é:%s ###\n", nome1);
       }

       if (pib > pib1)
       {   printf("### Parabéns, você ganhou! é:%s ###\n", nome);
       } else if (pib == pib1)
       {
       printf("### Jogo empatou pontos de PID ###\n");  
     } else{
          printf("### Você Perdeu! é:%s ###\n", nome1);
       }

       if (pontos > pontos1)
       {   printf("### Parabéns, você ganhou! é:%s ###\n", nome);
       } else if (pontos == pontos1)
       {
       printf("### Jogo empatou pontos de Turístos ###\n");  
     } else{
          printf("### Você Perdeu! é:%s ###\n", nome1);
       }
      
       printf("!!! Calcolando O Vencerdor !!!\n");
        if (populacao < populacao1){
            printf("O ganhador de População é: %s com pontos de %.2f\n", nome, populacao);
        } else if (populacao == populacao1)
        {
        printf("### Jogo empatou pontos de População ###\n");  
        }else {
            printf("O ganhador de População é: %s com pontos de %.2f\n", nome1, populacao1);
        }
        
        if (area > area1){
            printf("O ganhador de Área é: %s com pontos de %.2f\n", nome, area);
        } else if (area == area1)
        {
        printf("### Jogo empatou pontos de Áreas ###\n");  
        }else {
            printf("O ganhador de Área é: %s com pontos de %.2f\n", nome1, area1);
        }

        if (pib > pib1){
            printf("O ganhador de PID é: %s com pontos de %.2f\n", nome, pib);
        } else if (pib == pib1)
        {
        printf("### Jogo empatou pontos de PID ###\n");  
      } else {
            printf("O ganhador de PID é: %s com pontos de %.2f\n", nome1, pib1);
        }

        if (pontos > pontos1){
            printf("O ganhador de Turístas é: %s com pontos de %d\n", nome, pontos);
        } else if (pontos == pontos1)
        {
        printf("### Jogo empatou pontos de Turístos ###\n");  
      } else {
            printf("O ganhador de Turístas é: %s com pontos de %d\n", nome1, pontos1);
        }

}