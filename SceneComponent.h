#pragma once
#include "Component.h"

class USceneComponent : public UComponent
{
public:
	USceneComponent(AActor* Owner);
	~USceneComponent();

	virtual void Tick() override;

	virtual void Render();
};

