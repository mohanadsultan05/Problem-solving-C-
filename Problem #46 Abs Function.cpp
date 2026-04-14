#include <iostream>
using namespace std;

int Abs (int Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;

}

int ReadNumber ()
{
    float Number;

    cout << "Enter a number: " << endl;
    cin >> Number;

    return Number;
}

int main ()
{
    int Number;

    Number = ReadNumber();

    cout << "My abs result: " << Abs(Number) << endl;

    cout << "My C++ result: " << abs(Number) << endl;

}
