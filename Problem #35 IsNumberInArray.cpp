#include <iostream>
#include <ctime>
using namespace std;

int ReadPositiveNumber (string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0 );

    return Number;
}

int RandomNumber (int From , int To)
{
    int RandNum = rand() % (To  - From + 1);

    return RandNum;
}

void ReadArray (int arr[100] , int& arrlength)
{
    cout << "Enter the length of the array: ";
    cin >> arrlength;

    for (int i = 0 ; i < arrlength ; i++)
    {
        arr[i] = RandomNumber( 1 , 100);
    }
}

void PrintArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
}

int findthenumber (int Number , int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        if (Number == arr[i] )
            return i;
    }

    return -1;
}

bool IstheNumberinArray (int Number , int arr[100] , int arrlength)
{
    return findthenumber(Number , arr, arrlength) != -1;
}

int main ()
{
    srand((unsigned)time(NULL));

    int arr[100] , arrlength;

    ReadArray(arr , arrlength);

    cout << "\nArray 1 element: \n";
    PrintArray(arr , arrlength);

    cout << "\n\n1";

    int Number = ReadPositiveNumber("Please enter a number to search for: ");

    cout << endl;

    cout << "Number you are looking for is: " << Number << endl;

    if( IstheNumberinArray (Number , arr , arrlength))
    {
        cout << "Yes , The number is found: -(\n";
    }else
    {
    cout << "No , The number is not found: -(\n";
    }

}
