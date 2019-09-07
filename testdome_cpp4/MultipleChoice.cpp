// Two things have been changed 
// 1: instead of using arrays I have shifted to using vectors which makes the program memory efficient
// 2 :the destructions of the objects of the derived class is guarenteed by the use of the virtual destructor


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MultipleChoiceTest
{
public:
    MultipleChoiceTest(int qc): questionsCount(qc),answers(questionsCount,-1)
    {
        
    }
    
   virtual ~MultipleChoiceTest()
   {}

    void setAnswer(int questionIndex, int answer)
    {
        answers[questionIndex] = answer;
    }

    int getAnswer(int questionIndex) const
    {
        return answers[questionIndex];
    }

protected:
    int questionsCount;

private:
    vector <int> answers;
};

class TimedMultipleChoiceTest : public MultipleChoiceTest
{
public:
    TimedMultipleChoiceTest(int questionsCount)
        : MultipleChoiceTest(questionsCount),times(questionsCount,0)
    {
        
    }
    
    
    void setTime(int questionIndex, int time)
    {
        times[questionIndex] = time;
    }

    int getTime(int questionIndex) const
    {
        return times[questionIndex];
    }

private:
    vector <int> times;
};

#ifndef RunTests
void executeTest()
{
    MultipleChoiceTest test(5);
    for (int i = 0; i < 5; i++)
    {
        test.setAnswer(i, i);
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Question " << i + 1 << ", correct answer: " << test.getAnswer(i) << "\n";
    }
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Test: " << i + 1 << "\n";
        executeTest();
    }
}
#endif
