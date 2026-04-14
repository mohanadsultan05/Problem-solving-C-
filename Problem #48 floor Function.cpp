#include <iostream>
#include <cmath>
using namespace std;


int GettheFloor (float Number)
{
        if (Number > 0)
            return int(Number);
        else
           return int(Number) - 1;
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

    cout << "My float result: " << GettheFloor(Number) << endl;

    cout << "My C++ result: " << floor(Number) << endl;

}
