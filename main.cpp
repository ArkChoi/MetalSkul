#include <iostream>
#include "Engine.h"

int main()
{
	GEngine->Init();
	GEngine->Run();
	GEngine->Term();

	return 0;
}