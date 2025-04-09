#include <stdio.h>

int main() {
    //agua = 0
    int tabuleiro[10][10] = {0};

    //letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J'};

    //posição inicial dos navios
    int linhaHorizontal = 2, colunaHorizontal = 3; //linha 2, coluna 3
    int linhaVertical = 5, colunaVertical = 6; //linha 5, coluna 6

    //posicionando os navios
    for (int i = 0; i < 3; i++)
    {
       tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }
    
    for (int i = 0; i < 3; i++)
    {
       tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    //exibindo o tabuleiro para o usuário
    printf("Tabuleiro de Batalha Naval\n");
    
    //imprimir letras das colunas
    printf("  "); //espaço para alinhar as letras das colunas com o tabuleiro
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", linha[j]);
    }
    printf("\n");

    //imprimir as linhas do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
