#include <iostream>
#include <ctime>
using namespace std;

int RandomNumber (int From , int To)
{
    int RandNum = rand () % (To - From + 1 ) + From;

    return RandNum;
}

void ReadArray (int arr[100] , int& arrlength)
{
    cout << "Enter the number of array:" << endl;
    cin >> arrlength;

    for (int i = 0 ; i < arrlength ; i++)
    {
        arr[i] = RandomNumber(0 , 100);
    }
}

void PrintArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int SumNumber (int arr[100] , int arrlength)
{
    int Sum = 0;

    for (int i = 0 ; i < arrlength ; i++)
    {
            Sum += arr[i];
    }
    return Sum;
}

float AverageNumber (int arr[100] , int arrlength)
{
    return (float)SumNumber(arr , arrlength) / arrlength;
}

int main ()
{
    srand ((unsigned)time(NULL));

    int arr[100] , arrlength;

    ReadArray(arr , arrlength);

    cout << "Array elements: ";
    PrintArray(arr , arrlength);

    cout << "Average Number is: "
    << AverageNumber(arr , arrlength);
}

