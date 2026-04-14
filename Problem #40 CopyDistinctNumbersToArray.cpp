#include <iostream>
#include <ctime>
using namespace std;


void FillArray (int arr[100] , int& arrlength)
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

short FindtheNumber (int Number , int arr[100] , int arrlength)
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
    return FindtheNumber(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}


void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

int main ()
{
    int arr[100] , arr2[100] , arrlength , arrlength2;

    FillArray(arr , arrlength);

    cout << "Array 1 element: ";
    PrintArray(arr , arrlength);

    CopyDistinctNumbersToArray(arr , arr2 , arrlength , arrlength2);

    cout << "Array 1 distinct element: ";
    PrintArray(arr2 , arrlength2);


}
