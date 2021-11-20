// Text Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// No arguments or return
void printHello()
{
    cout << "Hello!" << endl;
}

// 2 arguments and no return
void printSum(int valueA, int valueB)
{
    cout << valueA + valueB << endl;
}

// 2 arguments and return
int returnSumByReturnValue(int valueA, int valueB)
{
    return valueA + valueB;
}

// 2 arguments by value (value gets copied) and one by pointer (address of an int variable)
void returnSumByPointer(int valueA, int valueB, int* outValue)
{
    *outValue = valueA + valueB;
}

// 2 arguments by value (value gets copied) and one by reference (original value, not a copy)
void returnSumByReference(int valueA, int valueB, int& outValue)
{
    outValue = valueA + valueB;
}

// Passing parameters by structure reference
struct SumParameters
{
    int valueA;
    int valueB;
    int result;
};

void returnSumByStructureReference(SumParameters& params)
{
    params.result = params.valueA + params.valueB;
}

int callExamples()
{
    SumParameters sum;
    sum.valueA = 4;
    sum.valueB = 6;
    sum.result = 0;
    returnSumByStructureReference(sum);

    cout << sum.result << endl;

    return 0;
}
