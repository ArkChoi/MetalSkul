#pragma once
#include <vector>
class AActor;

//나중에 지워줘요
#include "Player.h"

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	virtual void Tick();

	AActor GetPlayer();

	std::vector<AActor*> Actors;
	APlayer Player;
};

