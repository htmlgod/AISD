#pragma once
#include <map>
#include <stack>
#include <string>

const std::map<char, int> brackets = {{'(',1},{')',-1},{'[',2},{']',-2},{'{',3},{'}',-3}};

namespace Brackets {
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
}
