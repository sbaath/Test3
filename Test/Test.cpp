// Test.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "helloWorld.h"

using namespace std;

int main()
{
	helloWorld* hello = new helloWorld("12345");
	
	system("PAUSE");
    return 0;
}

