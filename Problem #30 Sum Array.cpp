#include <iostream>
#include <ctime>
using namespace std;


int ReadPositiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}


int RandomNumber (int From , int To)
{
    int RandNum = rand () % (To - From + 1 ) + From;

    return RandNum;
}

void ReadArray (int arr[100] , int& arrlength)
{
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

void Sumbotharray (int arrsource[100] , int arrdestination[100] , int arrsum[100] ,int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        arrsum[i] = arrsource[i] + arrdestination[i];
    }

}

int main ()
{
    srand ((unsigned)time(NULL));

    int arrlength = ReadPositiveNumber("Enter the length of the array: ");

    int arr1[100] , arr2[100];

    ReadArray(arr1 , arrlength);
    ReadArray(arr2 , arrlength);

    int arrsum[100];

    Sumbotharray (arr1 , arr2 , arrsum , arrlength);

    cout << "Array 1 elements: ";
    PrintArray(arr1 , arrlength);

    cout << "Array 2 elements: ";
    PrintArray(arr2 , arrlength);

    cout << "Sum of both Array : ";
    PrintArray(arrsum , arrlength);


}

