#include <iostream>
using namespace std;

int ReadPositiveNumber (string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    }while(Number <= 0);

    return Number;
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

bool PalindromenNumber (int Number)
{
    return Number == ReverseNumber(Number);
}

int main ()
{

    if (PalindromenNumber(ReadPositiveNumber("Enter positive Number: ")))
        cout << "Yes it is a Palindrome Number. " << endl;
    else
        cout << "No its not a Palindrome Number. " << endl;

}
