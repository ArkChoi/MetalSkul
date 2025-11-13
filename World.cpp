#include "World.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

void UWorld::Tick()
{

}

void UWorld::CreateDefaultSubobject(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

std::vector<AActor*> UWorld::GetAllActors()
{
	return Actors;
}


