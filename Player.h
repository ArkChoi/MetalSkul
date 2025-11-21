#pragma once
#include "Actor.h"
#include "CollsionComponent.h"

class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override;

	virtual int GetZOder() override;

	UCollsionComponent* GetActorCollisionComponent();

protected:
	UCollsionComponent* Collision = new UCollsionComponent(true, this);

protected:
	void Move();
};

