#include "mov.h"
#include "score.h"
#include "Menu.h"
#include "movimento.h"

int coluna_arroba, linha_arroba;
char restart;

void telaGameOver()
{

    SetColor(32);
    gotoxy(19,  8);printf("+----------------------------------------+");
    gotoxy(19,  9);printf("|               GAME OVER                |");
    gotoxy(19, 10);printf("|                                        |");
    gotoxy(19, 11);printf("|       VOLTAR AO MENU INICIAL -> M      |");
    gotoxy(19, 12);printf("+----------------------------------------+");
    restart = getch();
    if (restart=='m'||restart=='M'){
        menu();
    } else {
        telaGameOver();
    }
}
void gameOver()
{
    SetColor(252);
    gotoxy(coluna_arroba,linha_arroba);
    JOGADOR player = {70, 1, 3, {coluna_arroba,linha_arroba}};
    while
    (
        verificaCima(&player)       ||
        verificaEsquerda(&player)   ||
        verificaBaixo(&player)      ||
        verificaDireita(&player)
    )
    {
        score();
        showPlayer(&player);
        movePlayer(&player, player.direcao_move);
    }
    score();
    rank(pontos);
    showPlayer(&player);
    telaGameOver();
    return (0);
}

