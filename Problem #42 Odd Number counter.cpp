#include <iostream>
#include <ctime>
using namespace std;

int RandomNumber (int From , int To)
{
    int RandNum = rand() % (To - From + 1 );

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

int oddCount (int arr[100] ,int arrlength)
{
    int Counter = 0;

    for (int i = 0 ; i < arrlength ; i++)
    {
        if (arr[i] % 2 != 0)
        {
          Counter++;
        }
    }
    return Counter;
}

int main ()
{

    srand((unsigned)time(NULL));

    int arr[100] , arrlength;

    ReadArray(arr , arrlength);

    cout << "\nArray 1 element: ";
    PrintArray(arr , arrlength);

    cout << "\nOdd Number count is: " << oddCount (arr ,arrlength );


}
