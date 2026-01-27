#include <stdio.h>

//Procurei uma maneira de poder ter facilidade na mudança de valor dos vetores e matrizes, e o que eu encontrei foi usar "const", que é uma "varíavel imutável", ou "#define", que parece funcionar como uma espécie de "macro" que faz uma substuição textual, então resolvi usar os dois, cada um no que funcionaria melhor.
#define navioBasico 3
#define tamanhoTabuleiro 10
#define tamanhoHabilidade 5
const int marcadorNavio = 3;
const int marcadorAgua = 0;
const int marcadorHabilidade = 1;
const int marcadorDano = 5;

//Declaração das variáveis principais do tabuleiro e dos navios para definir seus tamanhos, tipos e marcações.
int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];
int navioHorizontal[navioBasico] = {marcadorNavio, marcadorNavio, marcadorNavio};
int navioVertical[navioBasico] = {marcadorNavio, marcadorNavio, marcadorNavio};
int navioDiagonal1[navioBasico] = {marcadorNavio, marcadorNavio, marcadorNavio};
int navioDiagonal2[navioBasico] = {marcadorNavio, marcadorNavio, marcadorNavio};

//Declaração das variáveis que representam as habilidades especiais.
int cone[tamanhoHabilidade][tamanhoHabilidade];
int cruz[tamanhoHabilidade][tamanhoHabilidade];
int octaedro[tamanhoHabilidade][tamanhoHabilidade];

//Inicializa o tabuleiro no valor de água que eu quiser, caso fosse necessário alterar depois pra algum outro.
void inicializarTabuleiro()
{
    for (int i = 0; i < tamanhoTabuleiro; i++)
    {
        for (int j = 0; j < tamanhoTabuleiro; j++)
        {
            tabuleiro[i][j] = marcadorAgua;
        }
    }     
}

//Eu optei por encapsular as validações e os posicionamentos em funções para aumentar a modularidade e a escalabilidade do código.

//Função de auxílio, para validação da posição que o navio será colocado no tabuleiro. Se ele não ultrapassa as bordas, e se não se sobrepõe a um navio existente.
int validarNavio(int tamanhoNavio, int linha, int coluna, int horizontal, int vertical)
{
    for (int i = 0; i < tamanhoNavio; i++)
    {
        //Calcula a posição atual do segmento do navio, variando linha ou coluna conforme a orientação escolhida.
        int l = linha + i * vertical;
        int c = coluna + i * horizontal;

        if (l < 0 || l >= tamanhoTabuleiro || c < 0 || c >= tamanhoTabuleiro)
        {
            return 0; //Falso, por estar fora do tabuleiro.
        }
            
        if (tabuleiro[l][c] != marcadorAgua)
        {
            return 0; //Falso, por estar sobrepondo outro navio.
        }        
    }
    return 1;
}

//Posicionamento do Navio, onde você precisa escolher também se ele será colocado na horizontal, vertical, ou até diagonal, utilizando "1" para dizer ser o que deseja fazer, e "0" para o que não deseja usar, na hora de chamar a função. O tamanho do navio precisa ser informado na função, pois não seria possível ler o tamanho através do vetor corretamente. Já o tipo do navio utiliza diretamente o vetor, para caso eu queira representar tipos diferentes de navio, como algum que seja "5", ou "4", ao invés de "3" no tabuleiro.
void posicionarNavio(int tipoNavio[], int tamanhoNavio, int linha, int coluna, int horizontal, int vertical)
{

    //Caso não consiga considerar o navio como válido...
    if (!validarNavio(tamanhoNavio, linha, coluna, horizontal, vertical) || tipoNavio == NULL || tamanhoNavio <= 0 || horizontal > 1 || vertical > 1 || horizontal < -1 || vertical < -1 || (horizontal == 0 && vertical == 0))
    {
        //Retorna mensagem de erro.
        printf("Nao foi possivel posicionar o navio, pois ele nao encontrou uma posicao valida, ou a orientação foi inválida!\n");
        return;
    }

    //Se for válido, ele é posicionado.
    for (int i = 0; i < tamanhoNavio; i++)
    {
        tabuleiro[linha + i * vertical][coluna + i * horizontal] = tipoNavio[i];
    }
}

//Função de auxílio, para validação da posição que a habilidade ocupará no tabuleiro.
int validarHabilidade(int habilidade[tamanhoHabilidade][tamanhoHabilidade], int linha, int coluna)
{
    int centro = tamanhoHabilidade / 2;

    for (int i = 0; i < tamanhoHabilidade; i++)
    {
        for (int j = 0; j < tamanhoHabilidade; j++)
        {
            if (habilidade[i][j] == 0)
            {
                continue; //Para evitar que os "0" contidos na matriz das habilidades substituam as marcações dos navios, em vista de que não estariam sendo atingidos.
            }

            int l = linha + (i - centro);
            int c = coluna + (j - centro);

            if (l < 0 || l >= tamanhoTabuleiro || c < 0 || c >= tamanhoTabuleiro)
            {
                return 0; //Falso, por estar fora do tabuleiro.
            }
        }
    }

    return 1; //Verdadeiro, se tudo estiver correto.
}

//Inicializa o efeito de uma das habilidades conforme o número escolhido. (1 - Cone, 2 - Cruz, 3 - Octaedro)
void inicializarHabilidades()
{
    for (int i = 0; i < tamanhoHabilidade; i++)
    {
        for (int j = 0; j < tamanhoHabilidade; j++)
        {
            cone[i][j] = marcadorAgua;
            cruz[i][j] = marcadorAgua;
            octaedro[i][j] = marcadorAgua;
        }
    }

    for (int i = 0; i < tamanhoHabilidade; i++)
    {
        for (int j = 0; j < tamanhoHabilidade; j++)
        {
            if ((i == 1 && j == 2) || (i == 2 && j > 0 && j < 4) || (i == 3 && j >= 0 && j <= 4))
            {
                cone[i][j] = marcadorHabilidade;
            }
        }
    }
    for (int i = 0; i < tamanhoHabilidade; i++)
    {
        for (int j = 0; j < tamanhoHabilidade; j++)
        {
            if ((i >= 0 && i <= 4 && j == 2) || (j >= 0 && j <= 4 && i == 2))
            {
                cruz[i][j] = marcadorHabilidade;
            }
        }
    }
    for (int i = 0; i < tamanhoHabilidade; i++)
    {
        for (int j = 0; j < tamanhoHabilidade; j++)
        {
            if ((i >= 0 && i <= 4 && j == 2) || (j >= 0 && j <= 4 && i == 2) || (i > 0 && i < 4 && j > 0 && j < 4))
            {
                octaedro[i][j] = marcadorHabilidade;
            }
        }
    }
}

//// Sobreescreve o valor que já estiver no tabuleiro, caso esteja sendo alocado o valor de "marcadorHabilidade" em seu lugar.
void invocarHabilidade(int habilidade[tamanhoHabilidade][tamanhoHabilidade], int linha, int coluna)
{
    int centro = tamanhoHabilidade / 2;

    if (!validarHabilidade(habilidade, linha, coluna))
    {
        printf("Não foi possível invocar a Habilidade escolhida, pois ela ultrapassa as bordas do tabuleiro!\n");
        return;
    }

    for (int i = 0; i < tamanhoHabilidade; i++)
    {
        for (int j = 0; j < tamanhoHabilidade; j++)
        {
            if (habilidade[i][j] == 0)
            {
                continue; // //Para evitar que os "0" contidos na matriz das habilidades substituam as marcações dos navios, em vista de que não estariam sendo atingidos.
            }

            int l = linha + (i - centro);
            int c = coluna + (j - centro);

            if (tabuleiro[l][c] == marcadorNavio)
            {
                tabuleiro[l][c] = marcadorDano; //Sobrescreve o valor existente no tabuleiro com o marcador de dano, caso haja um navio no local.
            }
            else
            {
                tabuleiro[l][c] = habilidade[i][j]; //Sobrescreve o valor existente no tabuleiro com o marcador da habilidade.
            }
        }
    }
}

//Impressão do tabuleiro e todas as posições correspondentes, onde "0" equivale a água e outro valor, exemplo 3, equivale a um espaço ocupado por um navio.
void imprimirTabuleiro()
{
    printf("\n\n-------- TABULEIRO ---------\n\n");

    for (int i = 0; i < tamanhoTabuleiro; i++)
    {
        for (int j = 0; j < tamanhoTabuleiro; j++)
        {
            printf ("%d  ", tabuleiro[i][j]);
        }

        printf("\n");
    }
}

//Função apenas utilizada para testar o funcionamento das habilidades.
// void testeHabilidade()
// {
//     printf("\n\n-------- TESTE DE HABILIDADES ---------\n\n");

//     for (int i = 0; i < tamanhoHabilidade; i++)
//     {
//         for (int j = 0; j < tamanhoHabilidade; j++)
//         {
//             printf ("%d  ", octaedro[i][j]);
//         }

//         printf("\n");
//     }
// }

//Início do Programa.
int main()
{
    inicializarTabuleiro();
    inicializarHabilidades();
    posicionarNavio(navioHorizontal, 3, 1, 1, 0, 1);
    posicionarNavio(navioVertical, 3, 2, 7, 1, 0);
    posicionarNavio(navioDiagonal1, 3, 3, 3, 1, 1);
    posicionarNavio(navioDiagonal2, 3, 7, 7, 1, -1);
    invocarHabilidade(cruz, 4, 4);
    imprimirTabuleiro();

    //testeHabilidade();

    //Comentário final para que o programa não feche sozinho após os últimos dados serem inseridos.
    printf("\n\nMuito obrigado pela participacao desse processo! Aperte 'Enter' para finalizar o programa!");
    getchar();

    //Finalização do programa.
    return 0;
}