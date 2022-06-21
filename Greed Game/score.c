#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "menu.h"
int pontos=0;
float total=0;

void score()
{
    gotoxy(25,23);
    SetColor(32);
    printf("SCORE: %d  | TOTAL: %.2f %%", pontos,total);
    SetColor(252);

}


   rank(int pontuacao)
{

    FILE *ptr_arq;
    int posicao[11];
    ptr_arq = fopen ("ranking.txt","r");


    if (ptr_arq == NULL)
    {
        FILE *abrir_arq_inicial;
        abrir_arq_inicial = fopen ("ranking.txt","w");

fprintf(abrir_arq_inicial,"primeira posicao - 0\nsegunda posicao - 0\nterceira posicao - 0\nquarta posicao - 0\nquinta posicao - 0\nsexta posicao - 0\nsetima posicao - 0\noitava posicao - 0\nnona posicao - 0\ndecima posicao - 0");

        fclose(abrir_arq_inicial);
    }

ptr_arq = fopen ("ranking.txt","r");
        fscanf(ptr_arq,
               "primeira posicao - %i\nsegunda posicao - %i\nterceira posicao - %i\nquarta posicao - %i\nquinta posicao - %i\nsexta posicao - %i\nsetima posicao - %i\noitava posicao - %i\nnona posicao - %i\ndecima posicao - %i",
               &posicao[1],
               &posicao[2],
               &posicao[3],
               &posicao[4],
               &posicao[5],
               &posicao[6],
               &posicao[7],
               &posicao[8],
               &posicao[9],
               &posicao[10] );

posicao[0]=pontuacao+1;

        for(int a=10; a>=0; a--)
        {
            if(pontuacao>posicao[a])
            {
                posicao[a+1]=posicao[a];
            }
            else
            {
                posicao[a+1]=pontuacao;
                break;
            }
        }


        ptr_arq = fopen ("ranking.txt","w");

        fprintf(ptr_arq,"primeira posicao - %i\nsegunda posicao - %i\nterceira posicao - %i\nquarta posicao - %i\nquinta posicao - %i\nsexta posicao - %i\nsetima posicao - %i\noitava posicao - %i\nnona posicao - %i\ndecima posicao - %i",
                posicao[1],
                posicao[2],
                posicao[3],
                posicao[4],
                posicao[5],
                posicao[6],
                posicao[7],
                posicao[8],
                posicao[9],
                posicao[10] );

        fclose(ptr_arq);


    return;
}

void ranking(){
FILE *abrir_arq;

int posicao[9];
    abrir_arq = fopen ("ranking.txt","r");


    if (abrir_arq == NULL)
    {
        FILE *abrir_arq_inicial;
        abrir_arq_inicial = fopen ("ranking.txt","w");

fprintf(abrir_arq_inicial,"primeira posicao - 0\nsegunda posicao - 0\nterceira posicao - 0\nquarta posicao - 0\nquinta posicao - 0\nsexta posicao - 0\nsetima posicao - 0\noitava posicao - 0\nnona posicao - 0\ndecima posicao - 0");

        fclose(abrir_arq_inicial);
    }

    abrir_arq = fopen ("ranking.txt","r");

fscanf(abrir_arq,
               "primeira posicao - %i\nsegunda posicao - %i\nterceira posicao - %i\nquarta posicao - %i\nquinta posicao - %i\nsexta posicao - %i\nsetima posicao - %i\noitava posicao - %i\nnona posicao - %i\ndecima posicao - %i",
               &posicao[0],
               &posicao[1],
               &posicao[2],
               &posicao[3],
               &posicao[4],
               &posicao[5],
               &posicao[6],
               &posicao[7],
               &posicao[8],
               &posicao[9]);

             fclose(abrir_arq);

             system("cls");

             printf("primeira posicao - %i\nsegunda posicao - %i\nterceira posicao - %i\nquarta posicao - %i\nquinta posicao - %i\nsexta posicao - %i\nsetima posicao - %i\noitava posicao - %i\nnona posicao - %i\ndecima posicao - %i",
                posicao[0],
                posicao[1],
                posicao[2],
                posicao[3],
                posicao[4],
                posicao[5],
                posicao[6],
                posicao[7],
                posicao[8],
                posicao[9]);

gotoxy(80, 25);printf("VOLTAR AO MENU INICIAL -> M");

voltaMenu = getch();
    if (voltaMenu=='M'||voltaMenu=='m'){
        menu(option);
    } else {
        ranking();
    }
    while(1){ getch();}

}



