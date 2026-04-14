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

void PrintvertedLetterPattern(int Number)
{
    cout << endl;

     for (int i = 65 ; i <= 65 + Number - 1 ; i++)
    {
        for (int j = 1 ; j <= i - 65 + 1 ; j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }

}

int main ()
{
    PrintvertedLetterPattern(ReadPositiveNumber("Enter Positive Number: "));
}
