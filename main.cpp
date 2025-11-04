#include <iostream>
#include "Engine.h"

int main()
{
    FEngine* MyEngine;
    MyEngine = new FEngine();

    bool bIsRun = true;
    while (bIsRun)
    {
        MyEngine->Init();
        MyEngine->Run();
        MyEngine->Term();
    }

    delete MyEngine;

	return 0;
}