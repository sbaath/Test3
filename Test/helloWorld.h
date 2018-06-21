#pragma once

class helloWorld
{
private:
	const char* print;


public:
	helloWorld(const char* print = "Hello World!");
	void setPrint(const char* newPrint);
	const char* getPrint();


	void print_n_times(int n = 1);


	~helloWorld();
};

