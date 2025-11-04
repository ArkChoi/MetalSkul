#include <iostream>
#include <windows.h>

#include "Player.h"

int main()
{
    APlayer Player;

    COORD Cur;
    Cur.X = Player.Location.X;
    Cur.Y = Player.Location.Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

    std::cout << Player.Shape << std::endl;

	return 0;
}