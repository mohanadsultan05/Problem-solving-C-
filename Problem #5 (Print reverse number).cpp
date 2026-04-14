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

void ReverseNumber (int Number)
{
    int Remainder = 0;
    int Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main ()
{
    ReverseNumber(ReadPositiveNumber("Enter Positive Number: "));

}
