#include <iostream>
#include <ctime>
using namespace std;


void FillArray (int arr[100] , int& arrlength)
{
    arrlength = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

}

void PrintArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}



bool IsPalindromeArray(int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        if (arr[i] != arr[arrlength - i - 1])
            return false;
    }
    return true;
}

int main ()
{
    int arr[100] , arrlength ;

    FillArray(arr , arrlength);

    cout << "Array 1 element: ";
    PrintArray(arr , arrlength);


    if (IsPalindromeArray(arr, arrlength))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";

}
