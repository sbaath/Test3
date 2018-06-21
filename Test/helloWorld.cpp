#include "stdafx.h"
#include "helloWorld.h"
#include <iostream>
#include <string.h>

using namespace std;


helloWorld::helloWorld(const char* print)
{
	helloWorld::print = print;
	cout << print << endl;


}

void helloWorld::setPrint(const char * newPrint)
{
	print = newPrint;

}


const char * helloWorld::getPrint()
{
	return print;
}

void helloWorld::print_n_times(int n)
{
	for (int m = 0; m < n; m++) {
		cout << print << endl;
	}

}

helloWorld::~helloWorld()
{
}
