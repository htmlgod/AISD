#pragma once
#include <vector>
#include <map>
#include <stack>
#include <string>

namespace Algorithms {
	template <typename T>
	int binarySearch(const std::vector<T> v, T key) {
		int start = 0;
		int end = v.size() - 1; // 9 | size = 10
		int middle = 0;
		while (true) {
			if (start > end) {
				break;
			}
			middle = (start + end)/2;
			if (v[middle] > key) {
				end = middle - 1;
			}
			else if (v[middle] < key) {
				start = middle + 1;
			}
			else if (v[middle] == key) {
				return middle;
			}
	
		}
		return -1;
	}

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
}
