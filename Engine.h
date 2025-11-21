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

	static FEngine* GetInstance();

protected:
	void Input();
	void Tick();
	void Render();

protected:
	static FEngine* Instance;
};

#define GEngine		FEngine::GetInstance() 