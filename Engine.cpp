#include "Engine.h"

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <vector>

#include "Floor.h"
#include "Wall.h"
#include "Player.h"
#include "Enemy.h"
#include "Goal.h"

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
	int Y = 0;

	std::ifstream File;
	File.open("Level01.map");
	if (File.is_open())
	{
		char Buffer[1024] = { 0, };
		while (File.getline(Buffer, 255))
		{
			std::string Temps = Buffer;
			for (int X = 0 ; X < Temps.size() ; X++)
			{
				
				class AFloor* NewActor = new AFloor();
				NewActor->Location.X = X;
				NewActor->Location.Y = Y;
				NewActor->Shape = ' ';
				World->CreateDefaultSubobject(NewActor);
				
				if (Temps[X] == '*')
				{
					class AWall* NewActor = new AWall();
					NewActor->Location.X = X;
					NewActor->Location.Y = Y;
					NewActor->Shape = '*';
					World->CreateDefaultSubobject(NewActor);
				}
				else if (Temps[X] == 'P')
				{
					class APlayer* NewActor = new APlayer();
					NewActor->Location.X = X;
					NewActor->Location.Y = Y;
					NewActor->Shape = 'P';
					World->CreateDefaultSubobject(NewActor);
				}
				else if (Temps[X] == 'M')
				{
					class AEnemy* NewActor = new AEnemy();
					NewActor->Location.X = X;
					NewActor->Location.Y = Y;
					NewActor->Shape = 'M';
					World->CreateDefaultSubobject(NewActor);
				}
				else if (Temps[X] == 'G')
				{
					class AGoal* NewActor = new AGoal();
					NewActor->Location.X = X;
					NewActor->Location.Y = Y;
					NewActor->Shape = 'G';
					World->CreateDefaultSubobject(NewActor);
				}
			}
			Y++;
		}
	}
	File.close();

	World->SequentialSort();
}

void FEngine::Run()
{
	Input();
	Tick();
	Render();
}

void FEngine::Term()
{
}

FEngine* FEngine::GetInstance()
{
	if (Instance == nullptr)
	{
		Instance = new FEngine();
	}
	return Instance;
}

void FEngine::Input()
{
}

void FEngine::Tick()
{
	World->Tick();
}

void FEngine::Render()
{
	std::vector<AActor*> Actors = World->GetAllActors();
	COORD Cur;

	for (int i=0 ; i<Actors.size() ; i++)
	{
		Cur.X = Actors[i]->Location.X;
		Cur.Y = Actors[i]->Location.Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		std::cout << Actors[i]->Shape << std::endl;
	}
}

