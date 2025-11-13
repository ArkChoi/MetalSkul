#include "Engine.h"

#include <iostream>
#include <fstream>
#include <windows.h>

#include<string>

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

	std::ifstream File;
	File.open("Level01.map");
	if (File.is_open())
	{
		char Buffer[1024] = { 0, };
		while (File.getline(Buffer, 255))
		{
			std::string str = Buffer;
			std::cout << str << std::endl;
		}
	}
	File.close();
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

void FEngine::Input()
{
}

void FEngine::Tick()
{
	
}

void FEngine::Render()
{
	/*AActor Actor = World->GetPlayer();
	COORD Cur;
	Cur.X = Actor.Location.X;
	Cur.Y = Actor.Location.Y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	std::cout << Actor.Shape << std::endl;*/
}