#pragma once
#include "Actor.h"
class AWall : public AActor
{
public:
	AWall();
	virtual ~AWall();

	virtual int GetZOder() override;
};

