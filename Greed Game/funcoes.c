#include <windows.h>
void SetColor (const int Color) /*fun��o de cor*/
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}
void gotoxy(int x, int y)
{

    COORD c;
    c.X=x;
    c.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
