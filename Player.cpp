#include "Player.h"
#include "Engine.h"

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

int APlayer::GetZOder()
{
	return ZOder;
}

UCollsionComponent* APlayer::GetActorCollisionComponent()
{
	return Collision;
}

void APlayer::Move()
{
	FVector2D TempLocation = Location;

    if (_kbhit() != 0) {
        char keyCode = _getch();
		switch (keyCode)
		{
		case 'w':
			Location.Y--;
			break;
		case 's':
			Location.Y++;
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

	std::vector<AActor*> TempActors = GEngine->World->GetAllActors();
	for (AActor* Actor : TempActors)
	{
		if (this->Location == Actor->Location)
		{
			if ()
			{

			}
		}
	}
}
