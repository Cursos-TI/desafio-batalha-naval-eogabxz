#include <stdio.h>

int main() {
    //agua = 0
    int tabuleiro[10][10] = {0};

    //letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J'};

    //cruz
    int cruzLinha = 4, cruzColuna = 4; //linha 4, coluna 4

    //horizontal da cruz
    for (int i = -2; i < 3; i++)
    {
        if (tabuleiro[cruzLinha][cruzColuna + i] == 0)
        {
            tabuleiro[cruzLinha][cruzColuna + i] = 3;
        }else{
            printf("Sobreposição\n");
        }
    }
    //vertical da cruz
    for (int i = -1; i < 2; i++)
    {
        if (tabuleiro[cruzLinha + i][cruzColuna] == 0)
        {
            tabuleiro[cruzLinha + i][cruzColuna] = 3;
        }else{
            printf("Sobreposição\n");
        }
        
    }
    
    //octa horizontal
    int octaLinha = 2, octaColuna = 8;
    for (int i = -1; i < 2; i++)
    {
        if (tabuleiro[octaLinha][octaColuna + i] == 0)
        {
            tabuleiro[octaLinha][octaColuna + i] = 3;
        }else{
            printf("Sobreposição\n");
        }
    //octa vertical
    for (int i = -1; i < 2; i++)
    {
        if (tabuleiro[octaLinha + i][octaColuna] == 0)
        {
            tabuleiro[octaLinha + i][octaColuna] = 3;
        }else{
            printf("Sobreposição\n");
        }
        
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
