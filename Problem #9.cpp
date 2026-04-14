#include <iostream>
using namespace std;

int ReadPositiveNumber (string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    }while (Number <= 0);

    return Number;
}

int calculatedigitcount (int digitcount , int Number)
{
    int Remainder = 0;
    int freqcount = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (digitcount == Remainder )
        {
            freqcount++;
        }
    }
    return freqcount;
}

void calculatealldigit (int Number)
{
    cout << endl;

    for (int i = 0 ; i < 10 ; i++)
    {
        short digitcalculate = 0;
        digitcalculate = calculatedigitcount( i , Number);

        if (digitcalculate > 0)
        {
            cout << "Digit " << i << " Frequecny is "
            << digitcalculate << " Time(s)."
            << endl;
        }
    }
}

int main ()
{
    int Num = ReadPositiveNumber("Enter a positive number: ");

    calculatealldigit(Num);

}
