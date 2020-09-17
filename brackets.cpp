#include <iostream>
#include <map>
#include <stack>
#include <string>
const std::map<char, int> brackets = {{'(',1},{')',-1},{'[',2},{']',-2},{'{',3},{'}',-3}};

bool isBracketsAreCorrect(const std::string& in) {
	std::stack<int> stack;
	
	for (size_t i = 0; i < in.length(); i++) {
		if(brackets.at(in[i]) > 0) {
			stack.push(brackets.at(in[i]));
		}
		else {
			if (!stack.empty() and stack.top() == -brackets.at(in[i])) {
				stack.pop();
			}
		}
	}	
	return stack.empty();
}
auto main() -> int {
	std::string input;
	while (getline(std::cin, input)) {
		if(!input.empty()) {
			if (isBracketsAreCorrect(input)) {
				std::cout << "Correct" << std::endl;
			}
			else {
				std::cout << "Error" << std::endl;
			}
		}
		else {
			break;
		}
	}
	return 0;
}
