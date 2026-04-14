#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

bool checkPerfectorNotPerfect (int Number)
{
    int Sum = 0;

    for (int i = 1 ; i < Number ; i++ )
    {
         if (Number % i == 0)
         {
              Sum += i;
         }
    }

    return Number == Sum;
}

void PrintPerfectNumber (int Number)
{
    if (checkPerfectorNotPerfect(Number))
        cout << Number << " is perfect";
    else
        cout << Number << " is not perfect";
}

int main()
{
	PrintPerfectNumber(ReadPositiveNumber("Enter a positive number: "));
}
