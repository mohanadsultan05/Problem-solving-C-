#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart (float Number)
{
    return Number - int(Number);
}
int GettheCeil (float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
    {
        if (Number > 0)
            return int(Number) + 1;
        else
           return int(Number);
    }
    else
        return Number;
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

    cout << "My ceil result: " << GettheCeil(Number) << endl;

    cout << "My C++ result: " << ceil(Number) << endl;

}
