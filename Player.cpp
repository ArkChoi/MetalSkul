#include "Player.h"
#include <conio.h>

APlayer::APlayer()
{
	ZOder = 3;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	
	Move();
}

void APlayer::Move()
{
    if (_kbhit() != 0) {
        char keyCode = _getch();
		switch (keyCode)
		{
		case 'w':
			Location.Y++;
			break;
		case 's':
			Location.Y--;
			break;
		case 'a':
			Location.X--;
			break;
		case 'd':
			Location.X++;
			break;
		default:
			break;
		}
    }
}
