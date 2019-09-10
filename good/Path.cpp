#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>

#include <string>
#include <list>
#include <iterator>

#include <algorithm>

class Path
{
public:
	Path(std::string path)	{ strCurrPath = path; }

	std::string getPath() const
	{
		return strCurrPath;
	}

	void cd(std::string strNewPath)	{
		if (strNewPath.length() > 0 && strNewPath[0] == '/')
		{
			strCurrPath = strNewPath;
			return;
		}

		std::list<std::string> items = split(strCurrPath.c_str());
		items.pop_front();
		std::list<std::string> newPathItems = split(strNewPath.c_str());

		for (std::list<std::string>::iterator item = newPathItems.begin(); item != newPathItems.end(); item++) {
			if (*item == "..")
			{
				if (items.size() > 0)
					items.pop_back();
			}
			else
			{
				items.push_back(*item);
			}
		}

		if (items.size() == 0) {
			strCurrPath = "/";
		}
		else {
			std::stringstream strStream;
			for (std::list<std::string>::iterator item = items.begin(); item != items.end(); item++) {
				strStream << '/';
				strStream << *item;
			}

			strCurrPath = strStream.str();
		}
	}

private:

	static std::list<std::string> split(const char* inString, char c = '/') {

		std::list<std::string> res;

		do {
			const char* pStart = inString;

			while (*inString != c && *inString) {
				inString++;
			}

			res.push_back(std::string(pStart, inString));

		} while (0 != (*inString++));

		return res;
	}

	std::string strCurrPath;
};