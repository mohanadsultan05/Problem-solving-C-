#include <iostream>
using namespace std;

int ReadPositiveNumber (string message)
{
    int Num;
    do
    {
        cout << message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

int ReverseNumber (int Number)
{
    int Remainder = 0;
    int Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

int main ()
{
    int Number = ReadPositiveNumber("Enter Positive Number: ");

    cout << "The reverse is " << ReverseNumber(Number);

}
