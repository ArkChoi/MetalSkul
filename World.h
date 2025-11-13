#pragma once
#include <vector>
class AActor;


class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	virtual void Tick();

	void CreateDefaultSubobject(AActor* NewActor);

	std::vector<AActor*> GetAllActors();

public:
	std::vector<AActor*> Actors;
	
};

