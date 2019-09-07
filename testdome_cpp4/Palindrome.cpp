#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;


bool isPalindrome(const std::string& word)
{


	int halfwordlength;
	bool isPalindrom = true;

	if (word.length() % 2 == 0)
		halfwordlength = word.length() / 2;
	else
		halfwordlength = (word.length() - 1) / 2;



	for (int i = 0; i < halfwordlength; i++)


		if (tolower(word[i]) == tolower(word[word.length() - i - 1]))
			continue;
		else
		{


			isPalindrom = false;
			break;
		}

	return isPalindrom;

}

#ifndef RunTests
int main()
{
	std::cout << isPalindrome("Deleveled");
}
#endif
