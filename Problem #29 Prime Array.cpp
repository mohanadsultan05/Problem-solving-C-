#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

enum enPrimeorNotPrime {Prime = 1 , NotPrime = 2};

int RandomNumber (int From , int To)
{
    int RandNum = rand () % (To - From + 1 ) + From;

    return RandNum;
}

enPrimeorNotPrime CheckPrime(int Number)
{
    int M = round(Number/2);

    for (int Counter = 2 ; Counter <= M ; Counter++)
    {
      if (Number % Counter == 0)
      {
       return enPrimeorNotPrime::NotPrime;
      }
    }
    return enPrimeorNotPrime::Prime;

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

void CopyPrimeNumber (int arrsource[100] , int arrdestination[100] , int arrlength , int arr2length)
{
    int counter = 0 ;


    for (int i = 0 ; i < arrlength ; i++)
    {
        if (CheckPrime(arrsource[i]) == enPrimeorNotPrime::Prime)
        {
            arrdestination[counter] = arrsource[i];
           counter++;
        }
    }

    arr2length = -- counter;
}

int main ()
{
    srand ((unsigned)time(NULL));

    int arr1[100] , arrlength1;

    ReadArray(arr1 , arrlength1);

    int arr2[100];
    int arrlength2 = 0;

    CopyPrimeNumber (arr1 , arr2 , arrlength1 ,arrlength2);

    cout << "Array elements: ";
    PrintArray(arr1 , arrlength1);

    cout << "Array Prime Number: ";
    PrintArray(arr2 , arrlength2);

}

