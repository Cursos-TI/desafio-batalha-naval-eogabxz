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
        if (i == 0) continue;
        int col = cruzColuna + i;
        if (col >= 0 && col < 10 && tabuleiro[cruzLinha][col] == 0)
        {
            tabuleiro[cruzLinha][col] = 3;
        }else if (col >= 0 && col < 10)
        {
            printf("Sobreposição!\n");
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
    int octaLinha = 2, octaColuna = 7;
    for (int i = -1; i < 2; i++)
    {
        if (i == 0) continue;
        int col = octaColuna + i;
        if (col >= 0 && col < 10 && tabuleiro[octaLinha][col] == 0)
        {
            tabuleiro[octaLinha][col] = 3;
        }
        else if (col >= 0 && col < 10)
        {
            printf("Sobreposição\n");
        }
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

    //cone
    int coneLinha = 6, coneColuna = 7;
    for (int i = 0; i < 3; i++)
    {
        for (int j = -i; j <= i; j++)
        {
            int lin = coneLinha + i;
            int col = coneColuna + j;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10)
            {
                if (tabuleiro[lin][col] == 0)
                {
                    tabuleiro[lin][col] = 3;
                }
                else{
                    printf("Sobreposição!\n");
                }
            }
            
        }
        
    }
    
 
    //exibindo o tabuleiro para o usuário
    printf("Tabuleiro de Batalha Naval\n");
    
    //imprimir letras das colunas
    printf("   "); //espaço para alinhar as letras das colunas com o tabuleiro
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

    return 0;
}
