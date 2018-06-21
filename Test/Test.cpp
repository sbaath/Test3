// Test.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "helloWorld.h"

using namespace std;

int main()
{
	helloWorld* hello = new helloWorld("12345");
	hello->setPrint("I like trains");
	const char * print = hello->getPrint();

	helloWorld hello2 = helloWorld("Wazzup");

	cout << print << endl;

	hello2.print_n_times(8);

	
	system("PAUSE");
    return 0;
}

