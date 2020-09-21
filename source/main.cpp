#include <exception>
#include <iostream>

#include <datastructures.hpp>
#include <algs.hpp>

auto main(int argc, char* argv[]) -> int {
	
	std::cout << Brackets::isBracketsAreCorrect("{()()}") << std::endl;
	return 0;
}
