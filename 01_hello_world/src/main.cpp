#include <iostream>

void printMessageFor(const char* name)
{
	std::cout << "Hello from [" << "name" << "]" << std::endl;
}

void printMessage()
{
	printMessageFor("Robert Plopeanu");
}

int main()
{
	printMessage();
}
