#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "mapa.h"
#include "score.h"
#include "gameOver.h"

char option;
char voltaMenu;

void menu(option)
{
    SetColor(14);
    system("cls");
    pontos=0;
    total=0;
    gotoxy(55, 6);
    printf("1 -> JOGAR ");
    gotoxy(55, 8);
    printf("2 -> CONFIGURACOES");
    gotoxy(55, 10);
    printf("3 -> INSTRUCOES");
    gotoxy(55, 12);
    printf("4 -> RANKING");
    gotoxy(55, 14);
    printf("5 -> CREDITOS");
    gotoxy(55, 16);
    printf("6 -> SAIR");
    gotoxy(0, 0);
    option = getch();

    switch (option)
    {
    case '1':
        system("cls");
        menorNumero=49;
        maiorNumero=9;
        greed();
        score();
        gameOver();
        setbuf(stdin, NULL);
        break;
    case '2':
        system("cls");
        dificuldades();
        break;
    case '3':
        instrucoes();
        break;

    case '4':
        system("cls");
        ranking();
        system("pause");
        break;

    case '5':
        creditos();
        break;

    case '6':
        system("cls");
        exit(0);
        break;

    default:
        menu(option);
        break;

        SetColor(14);
        system("cls");
        exit(0);
    }

}
void instrucoes()
{
    system("cls");
    gotoxy(55,  6);
    printf("INSTRUCOES");
    gotoxy(55, 10);
    printf("W -> CIMA");
    gotoxy(55, 12);
    printf("A -> ESQUERDA");
    gotoxy(55, 14);
    printf("S -> BAIXO");
    gotoxy(55, 16);
    printf("D -> DIREITA");
    gotoxy(55, 18);
    printf("M -> MENU INICIAL");
    gotoxy(80, 25);
    printf("VOLTAR AO MENU INICIAL -> M");
    gotoxy(0, 0);
    voltaMenu = getch();
    if (voltaMenu=='M'||voltaMenu=='m')
    {
        menu(option);
    }
    else
    {
        instrucoes();
    }
    while(1)
    {
        getch();
    }
}
void creditos()
{
    system("cls");
    gotoxy(55,  8);
    printf("EQUIPE");
    gotoxy(55, 12);
    printf("ALBERTO SANTOS");
    gotoxy(55, 14);
    printf("HUMBERTO ANDRADE");
    gotoxy(55, 16);
    printf("PAULO MASSA");
    gotoxy(55, 18);
    printf("PEDRO LYRA");
    gotoxy(80, 25);
    printf("VOLTAR AO MENU INICIAL -> M");
    gotoxy(0, 0);
    voltaMenu = getch();
    if (voltaMenu=='M'||voltaMenu=='m')
    {
        menu(option);
    }
    else
    {
        creditos();
    }
    while(1)
    {
        getch();
    }
}

