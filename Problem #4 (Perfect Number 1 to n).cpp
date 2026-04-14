#include <iostream>
using namespace std;

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

void PrintPerfectNumberFrom1toN (int Number)
{
    cout << "Perfect Numbers from 1 to " << Number << " are: " << endl;

    for (int i = 1 ; i <= Number ; i++)
    {
        if(checkPerfectorNotPerfect(i))
            cout << i << endl;
    }

}

int main()
{
	PrintPerfectNumberFrom1toN(ReadPositiveNumber("Enter a positive number: "));
}
