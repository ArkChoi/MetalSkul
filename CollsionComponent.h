#pragma once
#include "SceneComponent.h"
class UCollsionComponent : public USceneComponent
{
public:
	UCollsionComponent(bool bIsOverlap, AActor* Owner);
	~UCollsionComponent();

	bool CheakOverlap();
	int GetComponentID();
protected:

	bool bIsOverlap = true;
	int ComponentID = 10;
};

