#pragma once
#include "World.h"

class FEngine
{
protected:
	FEngine();

public:
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

	bool BIsRunning = true;
};

#define GEngine		FEngine::GetInstance() 