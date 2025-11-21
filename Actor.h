#pragma once
#include "FVector2D.h"

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
	//스택 구조 구현해서 컴포넌트 저장하는거 해보자..
};

