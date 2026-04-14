#include <iostream>
#include <ctime>
using namespace std;


void FillArray (int arr[100] , int arrlength)
{
    arrlength = 10;

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;

}

void PrintArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

short FinttheNumber (int Number , int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FinttheNumber(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;             // Increase the array length by 1.
    arr[arrLength - 1] = Number;  // Place the new element at the new last index.
}
