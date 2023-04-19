#include <iostream>
#define SUB(x, y) ((x) - (y))
#ifndef SUB(x, y) 
#error "Необходимо определить SUB"
#endif

int main(int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}