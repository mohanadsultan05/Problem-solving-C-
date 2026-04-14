#include <iostream>
#include <cmath>
using namespace std;

float GetFunctionNumber (float Number)
{
    return Number - int(Number);
}


int GettheRound (float Number)
{
    int intPart = int(Number);

    float functionPart = GetFunctionNumber(Number);

    if (functionPart >= 0.5)
    {
        if (intPart > 0)
            return ++intPart;
        else
           return --intPart;
    }
    else
    {
        return intPart;
    }

}


float ReadNumber ()
{
    float Number;

    cout << "Enter a number: " << endl;
    cin >> Number;

    return Number;
}

int main ()
{
    float Number;

    Number = ReadNumber();

    cout << "My round result: " << GettheRound(Number) << endl;

    cout << "My C++ result: " << round(Number) << endl;

}
