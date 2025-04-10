#include <stdio.h>

int main() {
    //agua = 0
    int tabuleiro[10][10] = {0};

    //letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J'};

    //posição inicial dos navios
    int linhaHorizontal = 4, colunaHorizontal = 4; //linha 4, coluna 4
    int linhaVertical = 5, colunaVertical = 7; //linha 5, coluna 7

    //posicionando os navios
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaHorizontal][colunaHorizontal + i] == 0)
        {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
        }else{
            printf("Sobreposição do navio na horizontal!\n");
        }
    }
    
    
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaVertical + i][colunaVertical] == 0)
        {
            tabuleiro[linhaVertical + i][colunaVertical] = 3;
        }else{
            printf("Sobreposição do navio na vertical!\n");
        }
    }

    //navio diagonal
    int linhaDiag1 = 0, colunaDiag1 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaDiag1 + i][colunaDiag1 + i] == 0)
        {
            tabuleiro[linhaDiag1 + i][colunaDiag1 + i] = 3;
        }
        
    }
    int linhaDiag2 = 0, colunaDiag2 = 9;
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaDiag2 + i][colunaDiag2 - i] == 0)
        {
            tabuleiro[linhaDiag2 + i][colunaDiag2 - i] = 3;
        }
        
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
