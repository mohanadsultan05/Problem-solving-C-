#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeorNotPrime {Prime = 1 , NotPrime = 2};


int ReadPositiveNumber (string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    }while(Number <= 0);

    return Number;
}

enPrimeorNotPrime PrimeorNotPrime(int Number)
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

void PrintAllPrimeNumbers (int Number)
{
    cout << "Prime Numbers from 1 to " << Number << " are" << endl;
    for (int i = 1 ; i < Number ; i++)
    {
        if (PrimeorNotPrime(i) == enPrimeorNotPrime::Prime)
            cout << i << endl;
    }
}

int main ()
{
    PrintAllPrimeNumbers(ReadPositiveNumber("Enter positive number: "));
}
