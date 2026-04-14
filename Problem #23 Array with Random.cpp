#include <iostream>
#include <ctime>
using namespace std;

int RandomNumber (int From , int To)
{
    int randnum = rand() % (To - From + 1);

    return randnum;
}

void FillArray (int arr[100] , int& arrlength)
{
    cout << "Enter the length of the array: ";
    cin >> arrlength;

    for (int i = 0 ; i < arrlength ; i++)
    {
        arr[i] = RandomNumber(1 , 100);
    }
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
    srand((unsigned)time(NULL));

    int arr[100] , arrlength;

    FillArray(arr , arrlength);

    cout << "Array Elements: ";
    PrintArray(arr , arrlength);

}
