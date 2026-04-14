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

int DigitFrequency (int Number , int Digit)
{
    int Remainder = 0;
    int Digitcount = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (Remainder == Digit)
            Digitcount++;
    }
    return Digitcount;
}

void Printthewhole (int Number)
{
    for (int i = 0 ; i < 10 ; i++)
    {
        int Digitcount = DigitFrequency(Number , i);
        if (Digitcount > 0)
        {
            cout << "Digit " << i << " Frequency is " << Digitcount << " Time(s) " << endl;
        }
    }
}


int main ()
{
    int Number = ReadPositiveNumber("Enter a positive number: ");
    Printthewhole(Number);

}
