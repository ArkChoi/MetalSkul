#include <iostream>
#include "Engine.h"

int main()
{
    FEngine* MyEngine;
    MyEngine = new FEngine();

    bool bIsRun = true;
    MyEngine->Init();
    while (bIsRun)
    {
        MyEngine->Run();
    }
    MyEngine->Term();

    delete MyEngine;

	return 0;
}