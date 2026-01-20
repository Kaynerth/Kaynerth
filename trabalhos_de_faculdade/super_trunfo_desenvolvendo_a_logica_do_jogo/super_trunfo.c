//Inclusão das bibliotecas que serão utilizadas.
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

    //Declaração das variáveis para decisão do jogador no menu.
    int opcao;
    int opcao2;

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

    //Mensagem preparativa e menu de escolha para o jogador iniciar o embate.
    printf("\n\nA seguir esta o embate! Você escolherá dois atributos. Qual atributo você gostaria de escolher primeiro para ser comparado?\n");
    printf("\n1 - Populacao");
    printf("\n2 - Area");
    printf("\n3 - PIB");
    printf("\n4 - Pontos Turisticos");
    printf("\n5 - Densidade Populacional");
    printf("\n\nDigite o numero da opcao (De 1 a 5): ");
    fgets(leitura, sizeof(leitura), stdin);
    sscanf(leitura, "%d", &opcao);
    
    //Criação do Menu para decisão do jogador.
    switch (opcao)
    {
        //Menu de escolha da primeira opção de embate para o jogador decidir.
        case 1:
            printf("\nAgora escolha o segundo atributo a ser comparado.");
            printf("\n1 - Area");
            printf("\n2 - PIB");
            printf("\n3 - Pontos Turisticos");
            printf("\n4 - Densidade Populacional");
            printf("\n\nNovamente digite o numero da opcao (Agora de 1 a 4): ");
            fgets(leitura, sizeof(leitura), stdin);
            sscanf(leitura, "%d", &opcao2);

            switch (opcao2)
            {
                //Menu de escolha da segunda opção de embate para o jogador decidir.
                case 1:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Populacao e Area)\n");
                    printf("\nCarta 1 (Populacao) - %s: %lu", cidade1, populacao1);
                    printf("\nCarta 1 (Area) - %s: %.2f\n", cidade1, area1);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);
            
                    //Estrutura de comparação entre os atributos da primeira escolha.
                    if(populacao1 > populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    //Estrutura de comparação entre os atributos da segunda escolha.
                    if(area1 > area2)
                    {
                        printf("Resultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("Resultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    //Estrutura de comparação da soma dos dois atributos escolhidos.
                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");

                    //Estrutura de comparação entre a soma dos atributos.
                    if(((float) populacao1 + area1) > ((float) populacao2 + area2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if (((float) populacao1 + area1) < ((float) populacao2 + area2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 2:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Populacao e PIB)\n");
                    printf("\nCarta 1 (Populacao) - %s: %lu", cidade1, populacao1);
                    printf("\nCarta 1 (PIB) - %s: %.2f\n", cidade1, pib1);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
            
                    if(populacao1 > populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    if(pib1 > pib2)
                    {
                        printf("Resultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("Resultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if(((float) populacao1 + pib1) > ((float) populacao2 + pib2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if (((float) populacao1 + pib1) < ((float) populacao2 + pib2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 3:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Populacao e Pontos Turisticos)\n");
                    printf("\nCarta 1 (Populacao) - %s: %lu", cidade1, populacao1);
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d\n", cidade1, pontosTuristicos1);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
            
                    if(populacao1 > populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((populacao1 + (unsigned long int) pontosTuristicos1) > (populacao2 + (unsigned long int) pontosTuristicos2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((populacao1 + (unsigned long int) pontosTuristicos1) < (populacao2 + (unsigned long int) pontosTuristicos2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 4:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Populacao e Densidade Populacional)\n");
                    printf("\nCarta 1 (Populacao) - %s: %lu", cidade1, populacao1);
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f\n", cidade1, densidadePopulacional1);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
            
                    if(populacao1 > populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("\n\nResultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if(((float) populacao1 + 1.0f/densidadePopulacional1) > ((float) populacao2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if (((float) populacao1 + 1.0f/densidadePopulacional1) < ((float) populacao2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                default:
                    printf("\n\nOpcao Invalida! Tente Novamente.\n");
                    break;
            }
            break;

        case 2:
            printf("\nAgora escolha o segundo atributo a ser comparado.");
            printf("\n1 - Populacao");
            printf("\n2 - PIB");
            printf("\n3 - Pontos Turisticos");
            printf("\n4 - Densidade Populacional");
            printf("\n\nNovamente digite o numero da opcao (Agora de 1 a 4): ");
            fgets(leitura, sizeof(leitura), stdin);
            sscanf(leitura, "%d", &opcao2);

            switch (opcao2)
            {
                case 1:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Area e Populacao)\n");
                    printf("\nCarta 1 (Area) - %s: %.2f", cidade1, area1);
                    printf("\nCarta 1 (Populacao) - %s: %lu\n", cidade1, populacao1);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
            
                    if(area1 > area2)
                    {
                        printf("\n\nResultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("\n\nResultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    if(populacao1 > populacao2)
                    {
                        printf("Resultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("Resultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");

                    if(((float) populacao1 + area1) > ((float) populacao2 + area2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if (((float) populacao1 + area1) < ((float) populacao2 + area2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 2:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Area e PIB)\n");
                    printf("\nCarta 1 (Area) - %s: %.2f", cidade1, area1);
                    printf("\nCarta 1 (PIB) - %s: %.2f\n", cidade1, pib1);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
            
                    if(area1 > area2)
                    {
                        printf("\n\nResultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("\n\nResultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    if(pib1 > pib2)
                    {
                        printf("Resultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("Resultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((area1 + pib1) > (area2 + pib2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((area1 + pib1) < (area2 + pib2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 3:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Area e Pontos Turisticos)\n");
                    printf("\nCarta 1 (Area) - %s: %.2f", cidade1, area1);
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d\n", cidade1, pontosTuristicos1);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
            
                    if(area1 > area2)
                    {
                        printf("\n\nResultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("\n\nResultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((area1 + (float) pontosTuristicos1) > (area2 + (float) pontosTuristicos2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((area1 + (float) pontosTuristicos1) < (area2 + (float) pontosTuristicos2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 4:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Area e Densidade Populacional)\n");
                    printf("\nCarta 1 (Area) - %s: %.2f", cidade1, area1);
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f\n", cidade1, densidadePopulacional1);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
            
                    if(area1 > area2)
                    {
                        printf("\n\nResultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("\n\nResultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((area1 + 1.0f/densidadePopulacional1) > (area2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((area1 + 1.0f/densidadePopulacional1) < (area2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                default:
                    printf("\n\nOpcao Invalida! Tente Novamente.\n");
                    break;
            }
            break;

        case 3:
            printf("\nAgora escolha o segundo atributo a ser comparado.");
            printf("\n1 - Populacao");
            printf("\n2 - Area");
            printf("\n3 - Pontos Turisticos");
            printf("\n4 - Densidade Populacional");
            printf("\n\nNovamente digite o numero da opcao (Agora de 1 a 4): ");
            fgets(leitura, sizeof(leitura), stdin);
            sscanf(leitura, "%d", &opcao2);

            switch (opcao2)
            {
                case 1:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: PIB e Populacao)\n");
                    printf("\nCarta 1 (PIB) - %s: %.2f", cidade1, pib1);
                    printf("\nCarta 1 (Populacao) - %s: %lu\n", cidade1, populacao1);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
            
                    if(pib1 > pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    if(populacao1 > populacao2)
                    {
                        printf("Resultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("Resultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");

                    if(((float) populacao1 + pib1) > ((float) populacao2 + pib2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if (((float) populacao1 + pib1) < ((float) populacao2 + pib2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 2:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: PIB e Area)\n");
                    printf("\nCarta 1 (PIB) - %s: %.2f", cidade1, pib1);
                    printf("\nCarta 1 (Area) - %s: %.2f\n", cidade1, area1);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);

                    if(pib1 > pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado do PIB: Temos um empate entre as duas cidades!\n");
                    }
                    
                    if(area1 > area2)
                    {
                        printf("Resultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("Resultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((area1 + pib1) > (area2 + pib2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((area1 + pib1) < (area2 + pib2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 3:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: PIB e Pontos Turisticos)\n");
                    printf("\nCarta 1 (PIB) - %s: %.2f", cidade1, pib1);
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d\n", cidade1, pontosTuristicos1);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
            
                    if(pib1 > pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((pib1 + (float) pontosTuristicos1) > (pib2 + (float) pontosTuristicos2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((pib1 + (float) pontosTuristicos1) < (pib2 + (float) pontosTuristicos2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 4:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: PIB e Densidade Populacional)\n");
                    printf("\nCarta 1 (PIB) - %s: %.2f", cidade1, pib1);
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f\n", cidade1, densidadePopulacional1);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
            
                    if(pib1 > pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("\n\nResultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((pib1 + 1.0f/densidadePopulacional1) > (pib2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((pib1 + 1.0f/densidadePopulacional1) < (pib2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                default:
                    printf("\n\nOpcao Invalida! Tente Novamente.\n");
                    break;
            }
            break;

        case 4:
            printf("\nAgora escolha o segundo atributo a ser comparado.");
            printf("\n1 - Populacao");
            printf("\n2 - Area");
            printf("\n3 - PIB");
            printf("\n4 - Densidade Populacional");
            printf("\n\nNovamente digite o numero da opcao (Agora de 1 a 4): ");
            fgets(leitura, sizeof(leitura), stdin);
            sscanf(leitura, "%d", &opcao2);

            switch (opcao2)
            {
                case 1:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Pontos Turisticos e Populacao)\n");
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d", cidade1, pontosTuristicos1);
                    printf("\nCarta 1 (Populacao) - %s: %lu\n", cidade1, populacao1);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
            
                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    if(populacao1 > populacao2)
                    {
                        printf("Resultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("Resultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");

                    if((populacao1 + (unsigned long int) pontosTuristicos1) > (populacao2 + (unsigned long int) pontosTuristicos2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((populacao1 + (unsigned long int) pontosTuristicos1) < (populacao2 + (unsigned long int) pontosTuristicos2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 2:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Pontos Turisticos e Area)\n");
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d", cidade1, pontosTuristicos1);
                    printf("\nCarta 1 (Area) - %s: %.2f\n", cidade1, area1);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);

                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }
                    
                    if(area1 > area2)
                    {
                        printf("Resultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("Resultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((area1 + pontosTuristicos1) > (area2 + pontosTuristicos2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((area1 + pontosTuristicos1) < (area2 + pontosTuristicos2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 3:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Pontos Turisticos e PIB)\n");
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d\n", cidade1, pontosTuristicos1);
                    printf("\nCarta 1 (PIB) - %s: %.2f", cidade1, pib1);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
                    
                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    if(pib1 > pib2)
                    {
                        printf("Resultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("Resultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((pib1 + (float) pontosTuristicos1) > (pib2 + (float) pontosTuristicos2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((pib1 + (float) pontosTuristicos1) < (pib2 + (float) pontosTuristicos2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 4:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Pontos Turisticos e Densidade Populacional)\n");
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d", cidade1, pontosTuristicos1);
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f\n", cidade1, densidadePopulacional1);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
            
                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("Resultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if(((float) pontosTuristicos1 + 1.0f/densidadePopulacional1) > ((float) pontosTuristicos2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if (((float) pontosTuristicos1 + 1.0f/densidadePopulacional1) < ((float) pontosTuristicos2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                default:
                    printf("\n\nOpcao Invalida! Tente Novamente.\n");
                    break;
            }
            break;

        case 5:
            printf("\nAgora escolha o segundo atributo a ser comparado.");
            printf("\n1 - Populacao");
            printf("\n2 - Area");
            printf("\n3 - PIB");
            printf("\n4 - Pontos Turisticos");
            printf("\n\nNovamente digite o numero da opcao (Agora de 1 a 4): ");
            fgets(leitura, sizeof(leitura), stdin);
            sscanf(leitura, "%d", &opcao2);

            switch (opcao2)
            {
                case 1:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Densidade Populacional e Populacao)\n");
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f", cidade1, densidadePopulacional1);
                    printf("\nCarta 1 (Populacao) - %s: %lu\n", cidade1, populacao1);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
                    printf("\nCarta 2 (Populacao) - %s: %lu", cidade2, populacao2);
            
                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    if(populacao1 > populacao2)
                    {
                        printf("Resultado da Populacao: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (populacao1 < populacao2)
                    {
                        printf("Resultado da Populacao: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Populacao: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");

                    if((1.0f/densidadePopulacional1 + (float) populacao1) > (1.0f/densidadePopulacional2 + (float) populacao2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((1.0f/densidadePopulacional1 + (float) populacao1) < (1.0f/densidadePopulacional2 + (float) populacao2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 2:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Densidade Populacional e Area)\n");
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f", cidade1, densidadePopulacional1);
                    printf("\nCarta 1 (Area) - %s: %.2f\n", cidade1, area1);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
                    printf("\nCarta 2 (Area) - %s: %.2f", cidade2, area2);

                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }
                    
                    if(area1 > area2)
                    {
                        printf("Resultado da Area: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (area1 < area2)
                    {
                        printf("Resultado da Area: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado da Area: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((area1 + 1.0f/densidadePopulacional1) > (area2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((area1 + 1.0f/densidadePopulacional1) < (area2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 3:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Densidade Populacional e PIB)\n");
                    printf("\nCarta 1 (Densidade Populacional) - %s: %d\n", cidade1, densidadePopulacional1);
                    printf("\nCarta 1 (PIB) - %s: %.2f", cidade1, pib1);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %d", cidade2, densidadePopulacional2);
                    printf("\nCarta 2 (PIB) - %s: %.2f", cidade2, pib2);
                    
                    if(densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    if(pib1 > pib2)
                    {
                        printf("Resultado do PIB: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pib1 < pib2)
                    {
                        printf("Resultado do PIB: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado do PIB: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((pib1 + 1.0f/densidadePopulacional1) > (pib2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((pib1 + 1.0f/densidadePopulacional1) < (pib2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                case 4:
                    printf("\n\nCOMPARACAO DE CARTAS (Atributos Escolhidos: Densidade Populacional e Pontos Turisticos)\n");
                    printf("\nCarta 1 (Densidade Populacional) - %s: %.2f\n", cidade1, densidadePopulacional1);
                    printf("\nCarta 1 (Pontos Turisticos) - %s: %d", cidade1, pontosTuristicos1);
                    printf("\nCarta 2 (Densidade Populacional) - %s: %.2f", cidade2, densidadePopulacional2);
                    printf("\nCarta 2 (Pontos Turisticos) - %s: %d", cidade2, pontosTuristicos2);
                    
                    if(densidadePopulacional1 > densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (densidadePopulacional1 < densidadePopulacional2)
                    {
                        printf("\n\nResultado da Densidade Populacional: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado da Densidade Populacional: Temos um empate entre as duas cidades!\n");
                    }

                    if(pontosTuristicos1 > pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 1 (%s) venceu!\n", cidade1);
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2)
                    {
                        printf("Resultado dos Pontos Turisticos: Carta 2 (%s) venceu!\n", cidade2);
                    }
                    else
                    {
                        printf("Resultado dos Pontos Turisticos: Temos um empate entre as duas cidades!\n");
                    }

                    printf("\n\nAgora... a verdadeira vitoria, julgando a soma dos dois atributos escolhidos vai para...");
                    
                    if((pontosTuristicos1 + 1.0f/densidadePopulacional1) > (pontosTuristicos2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 1 - %s!\n", cidade1);
                    }
                    else if ((pontosTuristicos1 + 1.0f/densidadePopulacional1) < (pontosTuristicos2 + 1.0f/densidadePopulacional2))
                    {
                        printf("\n\nCarta 2 - %s!\n", cidade2);
                    }
                    else
                    {
                        printf("\n\nResultado: Temos um empate entre as duas cidades!\n");
                    }

                    break;
                
                default:
                    printf("\n\nOpcao Invalida! Tente Novamente.\n");
                    break;
            }
            break;
        
        default:
            printf("\n\nOpcao Invalida! Tente Novamente.\n");
            break;
    }

    //Comentário final para que o programa não feche sozinho após os últimos dados serem inseridos.
    printf("\n\nMuito obrigado pela participacao desse processo! Aperte 'Enter' para finalizar o programa!");
    getchar();

    return 0;
}