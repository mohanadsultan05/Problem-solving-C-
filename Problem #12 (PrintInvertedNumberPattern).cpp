#include <iostream>
using namespace std;

int ReadPositiveNumber (string message)
{
    int Number;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

void Printinvertedpattern(int Number)
{
    for (int i = Number ; i > 0 ; i--)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}


int main ()
{
    Printinvertedpattern(ReadPositiveNumber("Enter Positive Number: "));
}
