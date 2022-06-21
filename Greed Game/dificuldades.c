#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "mapa.h"
#include "menu.h"
#include "score.h"
#include "funcoes.h"

char escolherDificuldade;
char jogarNovamente;

void dificuldades()
{
        system("cls");
        SetColor(14);
        gotoxy(50, 6);  printf("ESCOLHA A DIFICULDADE: ");
        gotoxy(50, 10); printf("1 - FACIL ");
        gotoxy(50, 12); printf("2 - MEDIO");
        gotoxy(50, 14); printf("3 - DIFICIL");
        gotoxy(50, 16); printf("4 - MUITO DIFICIL");
        gotoxy(80, 25); printf("VOLTAR AO MENU INICIAL -> M");
        gotoxy(0, 0); escolherDificuldade = getch();
        switch (escolherDificuldade)
        {
        case '1': /* Dificuldade facil */
            menorNumero=49;
            maiorNumero=3;
            system("cls");
            greed();
            gameOver();
            setbuf(stdin, NULL);
            break;

        case '2': /* Dificuldade medio */
            menorNumero=49;
            maiorNumero=6;
            system("cls");
            greed();
            gameOver();
            setbuf(stdin, NULL);
            break;

        case '3': /* Dificuldade dificil */
            menorNumero=49;
            maiorNumero=9;
            system("cls");
            greed();
            gameOver();
            setbuf(stdin, NULL);
            break;

        case '4': /* Dificuldade muito dificil */
            menorNumero=53;
            maiorNumero=5;
            system("cls");
            greed();
            gameOver();
            setbuf(stdin, NULL);
            break;

        case 'm':
            menu(option);
            break;

        default:
            dificuldades();

        }

    }

