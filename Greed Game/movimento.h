#ifndef MOV_H_INCLUDED
#define MOV_H_INCLUDED
typedef struct coordenada
{
    int x;
    int y;
} COORDENADA;

typedef struct jogador
{
    int direcao_move;
    int cor;
    COORDENADA posicao;
} JOGADOR;

void movePlayer (JOGADOR *player, int direcaoMove);

void showPlayer (JOGADOR *player);

#endif // MOV_H_INCLUDED

