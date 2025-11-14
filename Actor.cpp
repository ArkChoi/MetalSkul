#include "Actor.h"

AActor::AActor()
{
	Location = {0,0};
}

AActor::~AActor()
{
}

void AActor::Tick()
{

}

int AActor::GetZOder()
{
	return ZOder;
}
