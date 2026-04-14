#include <iostream>
#include <ctime>
using namespace std;

int ReadNumber ()
{
    int Number;

    cout << "Please enter a number: ";
    cin >> Number;

    return Number;
}

void AddArrayElement (int Number , int arr[100] , int& arrlength)
{
    arrlength++;
    arr[arrlength - 1] = Number;
}

void InputUserNumbersInArray (int arr[100] , int& arrlength)
{
    bool addmore = true;

    do
    {
        AddArrayElement(ReadNumber () , arr , arrlength);

        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> addmore;

    }while(addmore);
}

void PrintArray (int arr[100] , int arrlength )
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main ()
{
    int arr[100] , arrlength;

    InputUserNumbersInArray(arr , arrlength);

    cout << "Array length: " << arrlength << endl;

    cout << "Array elements: ";
    PrintArray(arr , arrlength);
}
