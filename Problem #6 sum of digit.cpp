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

int SumDigit (int Number)
{
    int Remainder = 0;
    int Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder;
    }
    return Sum;
}


int main ()
{
    int Number = ReadPositiveNumber("Enter positive Number: ");

    cout << "Sum of digit is: " << SumDigit(Number);
}
