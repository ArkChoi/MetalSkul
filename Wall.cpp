#include "Wall.h"

AWall::AWall()
{
	ZOder = 1;
}

AWall::~AWall()
{
}

int AWall::GetZOder()
{
	return ZOder;
}

UCollsionComponent* AWall::GetActorCollisionComponent()
{
	return Collision;
}
