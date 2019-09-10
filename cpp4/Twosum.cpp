#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;

std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
	map <int, int> myhashmap;

	for (int key = 0; key < list.size(); key++)
	{
		myhashmap.insert(pair<int, int>(list[key], key));

		auto secondvalue_itr = myhashmap.find(sum - list[key]);

		if (secondvalue_itr->first + list[key] == sum && secondvalue_itr->second != key)


			return pair<int, int>(secondvalue_itr->second, key);
	}

	return pair <int, int>(-1, -1);

}
#ifndef RunTests
int main()
{
	std::vector<int> list = { 3,3,3,3,3,7 };
	std::pair<int, int> indices = findTwoSum(list, 10);
	std::cout << indices.first << '\n' << indices.second;
}
#endif
