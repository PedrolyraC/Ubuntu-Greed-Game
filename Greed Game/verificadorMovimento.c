#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdbool.h>
#include "mapa.h"
#include "mov.h"

//////////////////////////////////////////////////////////////////////////////////   verificador de cima
_Bool verificaCima(JOGADOR *player)
{

    _Bool verificador;

    for(int a=0; a<mapa_int[(*player).posicao.y-1][(*player).posicao.x]; a++)
    {
        if(mapa_int[(*player).posicao.y-1-a][(*player).posicao.x]==0 || (*player).posicao.y-1-a<0)
        {
            verificador=0;
            break;
        }
        else
        {
            verificador=1;
        }


    }
    return verificador;
}

/////////////////////////////////////////////////////////////////////////////////////////    verificador da esquerda
_Bool verificaEsquerda(JOGADOR *player)
{
    _Bool verificador;
    for(int a=0; a<mapa_int[(*player).posicao.y][(*player).posicao.x-1]; a++)
    {
        if(mapa_int[(*player).posicao.y][(*player).posicao.x-1-a]==0 || (*player).posicao.x-1-a<0)
        {
            verificador=0;
            break;
        }
        else
        {
            verificador=1;
        }

    }
    return verificador;
}

//////////////////////////////////////////////////////////////////////////////////////////    verificador de baixo
_Bool verificaBaixo(JOGADOR *player)
{
    _Bool verificador;
    for(int a=0; a<mapa_int[(*player).posicao.y+1][(*player).posicao.x]; a++)

    {
        if(mapa_int[(*player).posicao.y+1+a][(*player).posicao.x]==0 || (*player).posicao.y+1+a>LINHAMATRIZ-1)
        {
            verificador=0;
            break;
        }
        else
        {
            verificador=1;
        }

    }
    return verificador;
}

////////////////////////////////////////////////////////////////////////////////////////    verificador da direita
_Bool verificaDireita(JOGADOR *player)
{
    _Bool verificador;

    for(int a=0; a<mapa_int[(*player).posicao.y][(*player).posicao.x+1]; a++)
    {
        if(mapa_int[(*player).posicao.y][(*player).posicao.x+1+a]==0 || (*player).posicao.x+1+a>COLUNAMATRIZ-1)
        {
            verificador=0;
            break;
        }
        else
        {
            verificador=1;
        }


    }
    return verificador;
}


