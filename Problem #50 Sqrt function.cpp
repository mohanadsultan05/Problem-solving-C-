#include <iostream>
#include <cmath>
using namespace std;


float SqrtFunction (float Number)
{
    return pow(Number , 0.5);
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

    cout << "My sqrt result: " << SqrtFunction(Number) << endl;

    cout << "My C++ result: " << sqrt(Number) << endl;

}
