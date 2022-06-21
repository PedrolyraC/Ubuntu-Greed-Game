#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdbool.h>
#include "menu.h"
#include "mapa.h"
const char space=32;
int pontos;
float total;

typedef struct coordenada
{
    int x;
    int y;
} COORDENADA;

typedef struct jogador
{
    float points;
    int direcao_move;
    int cor;
    COORDENADA posicao;
} JOGADOR;

void movePlayer (JOGADOR *player, int direcao_move)
/*função para movimentar o caractere */
{
    direcao_move = getch();

    gotoxy((*player).posicao.x,(*player).posicao.y);

    switch (direcao_move)
    {
    case 'w': /* movimento para cima, se possível*/
    case 'W':

        if(
            mapa_int[(*player).posicao.y-1][(*player).posicao.x]<=(*player).posicao.y  )
        {


            int copia_num_escolhido=mapa_int[(*player).posicao.y-1][(*player).posicao.x];

            for(int a=0; a<copia_num_escolhido; a++)
            {
                if(mapa_int[(*player).posicao.y-1-a][(*player).posicao.x]==0)
                {
                    copia_num_escolhido=-1;
                    break;
                }
            }

            for(int a=0; a<copia_num_escolhido; a++)
            {

                SetColor(0);
                gotoxy((*player).posicao.x,(*player).posicao.y);
                printf("%c",32);
                mapa[(*player).posicao.y][(*player).posicao.x]=32;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                (*player).posicao.y--;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                pontos++;
                total=(float)pontos/17.60;

            }
            gotoxy((*player).posicao.x,(*player).posicao.y);
        }

        break;


    case 'a':     /* movimento para esquerda, se possível*/
    case 'A':
        gotoxy((*player).posicao.x,(*player).posicao.y);
        if(
            mapa_int[(*player).posicao.y][(*player).posicao.x-1]<=(*player).posicao.x)
        {

            int copia_num_escolhido=mapa_int[(*player).posicao.y][(*player).posicao.x-1];

            for(int a=0; a<copia_num_escolhido; a++)
            {
                if(mapa_int[(*player).posicao.y][(*player).posicao.x-1-a]==0)
                {
                    copia_num_escolhido=-1;
                    break;
                }
            }

            for(int a=0; a<copia_num_escolhido; a++)
            {

                SetColor(0);
                gotoxy((*player).posicao.x,(*player).posicao.y);
                printf("%c",32);
                mapa[(*player).posicao.y][(*player).posicao.x]=32;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                (*player).posicao.x--;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                pontos++;
                total=(float)pontos/17.60;


            }
            gotoxy((*player).posicao.x,(*player).posicao.y);
        }
        break;


    case 's': /* movimento para baixo, se possível*/
    case 'S':
        gotoxy((*player).posicao.x,(*player).posicao.y);
        if(
            mapa_int[(*player).posicao.y+1][(*player).posicao.x]<=21-(*player).posicao.y)
        {

            int copia_num_escolhido=mapa_int[(*player).posicao.y+1][(*player).posicao.x];

            for(int a=0; a<copia_num_escolhido; a++)
            {
                if(mapa_int[(*player).posicao.y+1+a][(*player).posicao.x]==0)
                {
                    copia_num_escolhido=-1;
                    break;
                }
            }

            for(int a=0; a<copia_num_escolhido; a++)
            {

                SetColor(0);
                gotoxy((*player).posicao.x,(*player).posicao.y);
                printf("%c",32);
                mapa[(*player).posicao.y][(*player).posicao.x]=32;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                (*player).posicao.y++;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                pontos++;
                total=(float)pontos/17.60;
            }
            gotoxy((*player).posicao.x,(*player).posicao.y);

        }

        break;


    case 'd': /* movimento para direita, se possível*/
    case 'D':
        gotoxy((*player).posicao.x,(*player).posicao.y);
        if(
            mapa_int[(*player).posicao.y][(*player).posicao.x+1]<=78-(*player).posicao.x)
        {
            int copia_num_escolhido=mapa_int[(*player).posicao.y][(*player).posicao.x+1];

            for(int a=0; a<copia_num_escolhido; a++)
            {
                if(mapa_int[(*player).posicao.y][(*player).posicao.x+1+a]==0)
                {
                    copia_num_escolhido=-1;
                    break;
                }
            }

            for(int a=0; a<copia_num_escolhido; a++)
            {
                SetColor(0);
                gotoxy((*player).posicao.x,(*player).posicao.y);
                printf("%c",32);
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                (*player).posicao.x++;
                mapa_int[(*player).posicao.y][(*player).posicao.x]=0;
                pontos++;
                total=(float)pontos/17.60;
            }
            gotoxy((*player).posicao.x,(*player).posicao.y);
        }

        break;
    case 'm':
    case 'M':
        menu(option);
        break;
    }
}

void showPlayer (JOGADOR *player)
//mostra o caractere na tela//
{

    gotoxy((*player).posicao.x, (*player).posicao.y);
    printf("@");
    gotoxy((*player).posicao.x, (*player).posicao.y);

}
