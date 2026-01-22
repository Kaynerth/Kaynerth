#include <stdio.h>

//Declaração das variáveis que irão imprimir a movimentação das peças de xadrez, para não ser necessário fazer diretamente no 'printf' e serem facilmente reutilizáveis ou modificadas se necessário.
const char mTorre[] = "Direita\n";
const char mBispoCima[] = "Cima\n";
const char mBispoDireita[] = "Direita\n";
const char mRainha[] = "Esquerda\n";
const char mCavaloCima[] = "Cima\n";
const char mCavaloDireita[] = "Direita\n";

//Função recursiva para o movimento da Torre.
void movimentoTorre (int t)
{
    if (t <= 5)
    {
        printf(mTorre);
        movimentoTorre(t + 1);
    }
}

//Função recursiva para o movimento do Bispo com aninhamento.
void movimentoBispo(int b)
{
    if (b <= 5)
    {
        //Loop externo com o movimento vertical.
        for (int i = 1; i <= 1; i++)
        {
            printf(mBispoCima);

            //Loop interno com o movimento horizontal
            for (int j = 1; j <= 1; j++)
            {
                printf(mBispoDireita);
            }
        }
        movimentoBispo(b + 1);
    }
    
}

//Função recursiva para o movimento da Rainha.
void movimentoRainha (int r)
{
    if (r <= 8)
    {
        printf(mRainha);
        movimentoRainha (r + 1);
    }
}

int main()
{
    //Iniciação da função recursiva da Torre.
    movimentoTorre(1);

    //Pulo de linha para melhor visibilidade.
    printf("\n");

    //Iniciação da função recursiva do Bispo.
    movimentoBispo(1);

    //Pulo de linha para melhor visibilidade.
    printf("\n");

    //Iniciação da função recursiva da Rainha.
    movimentoRainha(1);

    //Pulo de linha para melhor visibilidade.
    printf("\n");

    //Movimentação do Cavalo, em vista de que não foi dito que deveria estar em uma função recursiva, mas sim em loops aninhados e com múltiplas variáveis. Também não identifiquei necessidade de usar 'continue' ou 'break' nesse processo.
    for (int cima = 1, direita = 0; cima <= 2 || direita < 1; cima++, direita++)
    {
        if (cima <= 2)
        {
            printf(mCavaloCima);
        }

        if (direita == 1)
        {
            printf(mCavaloDireita);
        }
    }

    //Comentário final para que o programa não feche sozinho após os últimos dados serem demonstrados, o que faria com que a janela basicamente só piscasse e já fechasse.
    printf("\n\nMuito obrigado pela participacao desse processo! Aperte 'Enter' para finalizar o programa!");
    getchar();

    //Finalização do programa.
    return 0;
}