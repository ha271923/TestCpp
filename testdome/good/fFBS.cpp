#include <vector>
#include <map>
#include <stdexcept>
#include <iostream>
#include <string>

typedef std::map<std::string, std::vector<std::string>> HobbiesMap;

std::vector<std::string> findHobbyists(const HobbiesMap& hobbies, const std::string& hobby)
{

	hobbies.get
}


static void add(string hobbyist, *string hobbies) {


}






#ifndef RunTests
int main()
{
	HobbiesMap hobbies
	{
	   {"John", {"Piano", "Puzzles", "Yoga"}},
	   {"Adam", {"Drama", "Fashion", "Pets"}},
	   {"Mary", {"Magic", "Pets", "Reading"}}
	};

	std::vector<std::string> hobbyists = findHobbyists(hobbies, "Yoga");
	for (std::string hobbyist : hobbyists)
	{
		std::cout << hobbyist << std::endl;
	}
}
#endif