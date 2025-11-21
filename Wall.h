#pragma once
#include "Actor.h"
#include "CollsionComponent.h"

class AWall : public AActor
{
public:
	AWall();
	virtual ~AWall();

	virtual int GetZOder() override;

	UCollsionComponent* GetActorCollisionComponent();

protected:
	UCollsionComponent* Collision = new UCollsionComponent(true, this);
};

