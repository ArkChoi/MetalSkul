#pragma once
#include "FVector2D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	void Tick();

	FVector2D Location;
	char Shape;
};

