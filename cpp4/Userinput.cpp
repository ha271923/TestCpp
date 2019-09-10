#include <iostream>
#include <string>
using namespace std;

class TextInput
{
public:
	virtual void add(char c) {


		currentvalue.push_back(c);

	}

	std::string getValue() { return currentvalue; }

	std::string currentvalue;
};

class NumericInput : public TextInput

{
public:

	void add(char c) override {

		if ((int)c >= 48 && (int)c <= 57)
		{

			currentvalue.push_back(c);
		}


	}


};


#ifndef RunTests
int main()
{
	TextInput* input = new NumericInput();
	input->add('1');
	input->add('a');
	input->add('0');
	std::cout << input->getValue();
}
#endif
