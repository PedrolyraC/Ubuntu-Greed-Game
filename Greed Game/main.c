#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "Menu.h"

int main()
{
    SetConsoleTitle("GREED");
    system("mode con:cols=120 lines=30");
    menu(option);
    SetColor(0);
    return 0;
}



