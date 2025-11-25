#pragma once
#include "Component.h"

class USceneComponent : public UComponent
{
public:
	USceneComponent(AActor* Owner);
	~USceneComponent();

	virtual void Tick() override;

	virtual void Render();

	virtual int GetComponentID() override;

protected:
	int ComponentID = 1;
};

