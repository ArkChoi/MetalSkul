#include "Engine.h"

FEngine::FEngine()
{
	World = nullptr;
}

FEngine::~FEngine()
{
	if (World)
	{
		delete World;
	}
}

void FEngine::Init()
{
	World = new UWorld();
}

void FEngine::Run()
{
}

void FEngine::Term()
{
}

void FEngine::Input()
{
}

void FEngine::Tick()
{
}

void FEngine::Render()
{
}