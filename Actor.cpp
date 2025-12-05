#include "Actor.h"

AActor::AActor()
{
	Location = {0,0};
}

AActor::~AActor()
{
}

void AActor::Tick()
{

}

int AActor::GetZOder()
{
	return ZOder;
}

void AActor::AddComponents(UComponent* NewComponents)
{
	TLinkedList Temp = { nullptr, NewComponents };
	if (!Components)
	{
		Components = &Temp;
		return;
	}
	for (TLinkedList* List = Components; List->Behind == nullptr ; List = List->Behind)
	{
		if (List->Behind == nullptr)
		{
			List->Behind = &Temp;
		}
	}
}
