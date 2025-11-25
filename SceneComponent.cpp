#include "SceneComponent.h"
#include "Actor.h"

USceneComponent::USceneComponent(AActor* Owner) : UComponent(Owner)
{

}

USceneComponent::~USceneComponent()
{
}

void USceneComponent::Tick()
{
}

void USceneComponent::Render()
{
}

int USceneComponent::GetComponentID()
{
	return ComponentID;
}
