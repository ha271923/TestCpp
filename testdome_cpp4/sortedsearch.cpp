#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std;

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{

	auto itr = lower_bound(sortedVector.begin(), sortedVector.end(), lessThan);
	return distance(sortedVector.begin(), itr);

}

#ifndef RunTests
int main()
{
	std::vector<int> v{ 1, 3, 5, 7 };
	std::cout << countNumbers(v, 4);
}
#endif
