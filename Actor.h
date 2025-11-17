#pragma once
#include "FVector2D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	virtual void Tick();

	virtual int GetZOder();

public:
	FVector2D Location;
	char Shape;
	int ZOder;
};

