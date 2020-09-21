#include <exception>
#include <iostream>

#include <tasks.hpp>
#include <datastructures.hpp>
#include <algs.hpp>

auto main(int argc, char* argv[]) -> int {
	
	std::cout << Brackets::isBracketsAreCorrect("{()()}") << std::endl;
	return 0;
}
