#pragma once
#include "FVector2D.h"
#include "LinkedList.h"

class UComponent;

class AActor
{
public:
	AActor();
	virtual ~AActor();

	virtual void Tick();

	virtual int GetZOder();

	UComponent* GetComponentByClass();


public:
	FVector2D Location;
	char Shape;
	int ZOder;
	TLinkedList* Components;
};

