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

	void AddComponents(UComponent* NewComponents);


public:
	FVector2D Location;
	char Shape;
	int ZOder;
	TLinkedList* Components = nullptr;
};

