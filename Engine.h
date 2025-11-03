#pragma once
#include "World.h"

class FEngine
{
public:
	FEngine();
	virtual ~FEngine();

	void Init();
	void Run();
	void Term();

	UWorld* World;

protected:
	void Input();
	void Tick();
	void Render();
};

