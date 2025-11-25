#include "Component.h"

UComponent::UComponent(AActor* Owner)
{
	Owner = Owner;
}

UComponent::~UComponent()
{
}

AActor* UComponent::GetOwner() const
{
	return Owner;
}

void UComponent::SetOwner(AActor* InOwner)
{
	Owner = InOwner;
}

int UComponent::GetComponentID()
{
	return ComponentID;
}