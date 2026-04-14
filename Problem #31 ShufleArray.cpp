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
    } while (Number <= 0);

    return Number;
}

void Swap (int& A , int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void FillArrayFrom1toN (int arr[100] , int& arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        arr[i] = i + 1;
    }
}

int RandomNumber (int From , int To)
{
    int RandNum = rand () % (To - From + 1 ) + From;

    return RandNum;
}


void PrintArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void ShufleArray (int arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
       Swap(arr[RandomNumber(1 , arrlength)-1] , arr[RandomNumber(1 , arrlength)-1]);

    }
}


int main ()
{
    srand ((unsigned)time(NULL));

    int arrlength = ReadPositiveNumber("Enter the positive number: ");

    int arr[100];

    FillArrayFrom1toN(arr , arrlength);

    cout << "Array before shuffle elements: ";
    PrintArray(arr , arrlength);

    ShufleArray(arr , arrlength);

    cout << "Array after shuffle elements: ";
    PrintArray(arr , arrlength);
}
