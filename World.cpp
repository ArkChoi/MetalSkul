#include "World.h"
#include "Actor.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

void UWorld::Tick()
{
	for (int i = 0; i < Actors.size() ; i++)
	{
		Actors[i]->Tick();
	}
}

void UWorld::CreateDefaultSubobject(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

std::vector<AActor*> UWorld::GetAllActors()
{
	return Actors;
}

void UWorld::SequentialSort()
{
	int LowZOder;
	for (int i = 0; i < Actors.size(); i++)
	{
		LowZOder = Actors[i]->GetZOder();


	}
}


