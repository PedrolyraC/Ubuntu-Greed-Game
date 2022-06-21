#ifndef MOV_H_INCLUDED
#define MOV_H_INCLUDED
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

void movePlayer (JOGADOR *player, int direcao_move);

void showPlayer (JOGADOR *player);

#endif // MOV_H_INCLUDED

