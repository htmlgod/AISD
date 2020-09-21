#pragma once
#include <vector>

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
}
