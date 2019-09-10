#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{

	std::unordered_set <string> myUniqueContainer;
	for (auto& it : names1)
		myUniqueContainer.insert(it);
	for (auto& it : names2)
		myUniqueContainer.insert(it);

	std::vector <string> returnvector;

	for (auto& it : myUniqueContainer)
		returnvector.push_back(it);

	return returnvector;


}

#ifndef RunTests
int main()
{
	std::vector<std::string> names1 = { "Ava", "Emma", "Olivia" };
	std::vector<std::string> names2 = { "Olivia", "Sophia", "Emma" };

	std::vector<std::string> result = unique_names(names1, names2);
	for (auto element : result)
	{
		std::cout << element << ' '; // should print Ava Emma Olivia Sophia
	}
}
#endif
