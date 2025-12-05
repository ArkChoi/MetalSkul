#pragma once
#include "Component.h"

struct TLinkedList
{
	TLinkedList* Behind;
	UComponent* Data;

public:
	UComponent* GetComponentByClass();
};

