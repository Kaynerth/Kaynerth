#include <stdio.h>
#include <string.h>

int main(){
    //Declaração das variáveis que serão utilizadas na primeira carta.
    char estado1;
    char codigoDaCarta1[10];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Declaração das variáveis que serão utilizadas na segunda carta.
    char estado2;
    char codigoDaCarta2[10];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    //Declaração de uma variável de leitura para permitir o funcionamento correto do "fgets" quando não está utilizando "char[]" diretamente. Onde também é utilizado o "sscanf" para direcionar o valor para a variavel na qual pertence corretamente.
    char leitura[100];

    //Declaração das variáveis de resultado dos embates.
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPIBperCapita;
    int resultadoSuperPoder;

    //Mensagem de boas vindas, apenas para uma introdução legal.
    printf("Bem vindo ao jogo Super Trunfo da Estacio, criado pelo aluno Alexandre Mendonca!\n");
    printf("Para poder jogar, voce precisa primeiro criar duas cartas. Vamos la ^-^\n\n");

    //Início da construção da primeira carta.
    printf("Primeira Carta!\n");
    printf("\nDigite o estado! (Insira uma letra de 'A' a 'H'):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%c", &estado1);

    printf("\nDigite o codigo da Carta! (Insira a letra do Estado escolhido anteriormente, seguida de um numero de 01 a 04 - Ex: A01, A02...):\n");
    fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);
    codigoDaCarta1[strcspn(codigoDaCarta1, "\n")] = '\0';

    printf("\nDigite o nome da cidade! (Insira de fato o nome da cidade que deseja utilizar nessa carta - Ex: Cabo Frio, Vinhedo...):\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("\nDigite o numero de habitantes da cidade! (Por favor, insira apenas um numero inteiro - Ex: 1000, 10000, 100000...):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%lu", &populacao1);

    printf("\nDigite a area da cidade, podendo agora usar 'ponto' no valor, mas ainda sendo apenas o valor, vamos adicionar o 'km2' pra voce! (Ex: 2523.10, 1342.32...):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%f", &area1);

    printf("\nDigite o PIB (Produto Interno Bruto) da cidade! (Trabalharemos na casa de bilhoes, entao pense nessa quantia, mas se preocupe em inserir apenas o valor como antes - Ex: 699.28, 710.20):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%f", &pib1);

    printf("\nPara finalizar essa carta, digite agora o numero de pontos turisticos que a cidade escolhida possui (Apenas utilize numeros inteiros novamente - Ex: 10, 12, 15...):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%d", &pontosTuristicos1);

    //Calculo da densidade populacional na carta 1.
    densidadePopulacional1 = (float) populacao1 / area1;

    //Calculo do PIB per Capita na carta 1.
    pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;

    //Calculo do Super Poder na carta 1.
    superPoder1 = ((float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1) + 1.0f/densidadePopulacional1;

    //Início da construção da segunda carta.
    printf("\n\nPerfeito! Os dados da primeira carta ja foram computados, agora vamos para a segunda! Repetiremos as instrucoes apenas para que nao precise se dar o trabalho de lembrar como preencher corretamente. Sim, nosso sistema foi super legal desse jeito ^-^\n");
    printf("\nDigite o estado! (Insira uma letra de 'A' a 'H'):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%c", &estado2);

    printf("\nDigite o codigo da Carta! (Insira a letra do Estado escolhido anteriormente, seguida de um numero de 01 a 04 - Ex: A01, A02...):\n");
    fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);
    codigoDaCarta2[strcspn(codigoDaCarta2, "\n")] = '\0';

    printf("\nDigite o nome da cidade! (Insira de fato o nome da cidade que deseja utilizar nessa carta - Ex: Cabo Frio, Vinhedo...):\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("\nDigite o numero de habitantes da cidade! (Por favor, insira apenas um numero inteiro - Ex: 1000, 10000, 100000...):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%lu", &populacao2);

    printf("\nDigite a area da cidade, podendo agora usar 'ponto' no valor, mas ainda sendo apenas o valor, vamos adicionar o 'km2' pra voce! (Ex: 2523.10, 1342.32...):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%f", &area2);

    printf("\nDigite o PIB (Produto Interno Bruto) da cidade! (Trabalharemos na casa de bilhoes, entao pense nessa quantia, mas se preocupe em inserir apenas o valor como antes - Ex: 699.28, 710.20):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%f", &pib2);

    printf("\nPara concluir agora a segunda carta, digite o numero de pontos turisticos que a cidade escolhida possui (Apenas utilize numeros inteiros novamente - Ex: 10, 12, 15...):\n");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%d", &pontosTuristicos2);

    //Calculo da densidade populacional na carta 2.
    densidadePopulacional2 = (float) populacao2 / area2;

    //Calculo do PIB per Capita na carta 2.
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

    //Calculo do Super Poder na carta 2.
    superPoder2 = ((float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2) + 1.0f/densidadePopulacional2;

    //Atribuição dos resultados em suas devidas variáveis.
    resultadoPopulacao = (populacao1 > populacao2);
    resultadoArea = (area1 > area2);
    resultadoPIB = (pib1 > pib2);
    resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    resultadoDensidadePopulacional = (densidadePopulacional1 < densidadePopulacional2);
    resultadoPIBperCapita = (pibPerCapita1 > pibPerCapita2);
    resultadoSuperPoder = (superPoder1 > superPoder2);
    
    //Demonstração dos resultados das criações das cartas. OBS: Não está inserido o valor de Super Poder no resumo dos resultados, pois não constava no desafio para fazer isso, então suponho que seja um dado secreto até o resultado final.
    //Carta 1.
    printf("\n\nMuito bem! Aqui esta um resumo de todos os dados escolhidos por voce na criacao das duas cartas!\n");
    printf("\nCARTA 1");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %s", codigoDaCarta1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulacao: %lu", populacao1);
    printf("\nArea: %.2f km2", area1);
    printf("\nPIB: %.2f bilhoes de reais", pib1);
    printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km2", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapita1);

    //Carta 2.
    printf("\nCARTA 2");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", codigoDaCarta2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulacao: %lu", populacao2);
    printf("\nArea: %.2f km2", area2);
    printf("\nPIB: %.2f bilhoes de reais", pib2);
    printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km2", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapita2);

    //Demonstração do resultado do embate entre os atributos das cartas.
    printf("\n\nAgora vamos ver o resultado dos embates entre as cartas por cada um de seus atributos. Se o resultado for '1' a Carta 1 venceu, mas se for '0' a Carta 2 venceu!\n");
    printf("\nPopulacao: %d", resultadoPopulacao);
    printf("\nArea: %d", resultadoArea);
    printf("\nPIB: %d", resultadoPIB);
    printf("\nPontos Turisticos: %d", resultadoPontosTuristicos);
    printf("\nDensidade Populacional: %d", resultadoDensidadePopulacional);
    printf("\nPIB per Capita: %d", resultadoPIBperCapita);
    printf("\nSuper Poder: %d\n", resultadoSuperPoder);

    //Comentário final para que o programa não feche sozinho após os últimos dados serem inseridos.
    printf("\n\nMuito obrigado pela participacao desse processo! Aperte 'Enter' para finalizar o programa!");
    getchar();

    return 0;
}