#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define LINHAMATRIZ 22
#define COLUNAMATRIZ 79

int i, j, linha_arroba, coluna_arroba, menorNumero, maiorNumero;
int mapa_int[LINHAMATRIZ][COLUNAMATRIZ];
char    mapa[LINHAMATRIZ][COLUNAMATRIZ];

void greed()
{
    srand(time(NULL));

    for(i = 0; i < LINHAMATRIZ; i++)
    {
        for(j = 0; j < COLUNAMATRIZ; j++)
        {
            mapa[i][j] = menorNumero  + (rand()% maiorNumero);
        }
    }
    linha_arroba= rand()% LINHAMATRIZ;
    coluna_arroba=rand()% COLUNAMATRIZ;
    conversorGreed();
}


