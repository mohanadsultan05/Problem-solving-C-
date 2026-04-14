#include <iostream>
#include <ctime>
using namespace std;

int RandomNumber (int From , int To)
{
    int RandNum = rand () % (To - From + 1 ) + From;

    return RandNum;
}

void AddArrayElement (int  Number , int arr[100] , int& arrlength)
{
    arrlength++;
    arr[arrlength - 1] = Number;
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

void CopyArrayelement (int arrsource[100] , int arrdestination[100] , int arrlength , int lengthdestination )
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        AddArrayElement(arrsource[i] , arrdestination , lengthdestination);
    }
}

int main ()
{

    srand((unsigned)time(NULL);

    int arr1[100] , arrlength;

    ReadArray(arr1 , arrlength);

    int arr2[100] , arr2length;

    CopyArrayelement (arr1 ,arr2 ,arrlength , arr2length);

    cout << "Array 1 element: ";
    PrintArray(arr1 , arrlength);

    cout << "Array 2 element after copy: ";
    PrintArray(arr2 , arrlength);


}
