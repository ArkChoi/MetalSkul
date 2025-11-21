#include "CollsionComponent.h"

UCollsionComponent::UCollsionComponent(bool bIsOverlap, AActor* Owner) : USceneComponent(Owner)
{
	this->bIsOverlap = bIsOverlap;
}

UCollsionComponent::~UCollsionComponent()
{
}

bool UCollsionComponent::CheakOverlap()
{
	if (bIsOverlap)
	{
		return true;
	}
	return false;
}

int UCollsionComponent::GetComponentID()
{
	return ComponentID;
}
