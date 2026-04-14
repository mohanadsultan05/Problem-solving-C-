#include <iostream>
using namespace std;

int ReadPositiveNumber (string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while ( Number <= 0);

    return Number;
}

void ReadArray (int arr[100] , int& arrlength)
{
    cout << "Enter the length of the array: " << endl;
    cin >> arrlength;

    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i] ;
    }
}

int CheckNumber (int arr[100] , int arrlength , int Number)
{
    int Check = 0;

    for (int i = 0 ; i < arrlength ; i++)
    {
        if (Number == arr[i])
        {
            Check++;
        }
    }
    return Check;
}

void PrintArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main ()
{
    int arr[100];
    int arrlength;

    ReadArray (arr , arrlength);

    int Number = ReadPositiveNumber ("Enter the number you want to check: ");

    int Check = CheckNumber(arr , arrlength , Number);

    cout << "Orginal Array: ";
    PrintArray(arr , arrlength);
    cout << "\n";

    cout << Number << " is  repeated " << Check << " time(s)";
}
