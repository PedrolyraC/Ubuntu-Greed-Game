#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include "mapa.h"

conversorGreed()
{
    //tentando transformar em numeros de fato

    for(int i = 0; i < LINHAMATRIZ; i++)
    {
        gotoxy(j,i);
        for(int j = 0; j < COLUNAMATRIZ; j++)
        {
            if(i==linha_arroba && j==coluna_arroba)
            {
                SetColor(252);
                printf("%c", 64);
            }
            else
            {
                SetColor((int) mapa[i][j]-42);
                mapa[i][j]=mapa[i][j]-48;
                mapa_int[i][j] = (int) mapa[i][j];
                gotoxy(j,i);
                printf("%i", mapa_int[i][j]);
                mapa[i][j]=107;
            }
            printf("\n");
        }

    }


    return;
}

