#include <iostream>
#include <ctime>
using namespace std;


enum enCharType {SmallLetter = 1 , CapitalLetter = 2 ,
                   SpecialCharacter = 3 , Digit = 4};

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

int RandNum (int From , int To)
{
    int RandNum = rand () % (To - From + 1 ) + From;
    return RandNum;
}

char RandomCharacter  (enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::SmallLetter:
        {
            return RandNum(char(97) , char(122));
            break;
        }
        case enCharType::CapitalLetter:
        {
            return RandNum(char(65) , char(90));
            break;
        }
        case enCharType::SpecialCharacter:
        {
            return RandNum(char(33) , char(47));
            break;
        }
        case enCharType::Digit:
        {
            return RandNum(char(48) , char(57));
            break;
        }
    }
}

string GenerateWord (enCharType CharType , int length)
{
    string word = "";

    for (int i = 0 ; i < length ; i++)
    {
        word = word + RandomCharacter(CharType);
    }

    return word;
}

string GenerateKey ()
{
    string Key = "";

    Key = Key + GenerateWord(enCharType::CapitalLetter , 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter , 4) + "-";
    Key = Key +  GenerateWord(enCharType::CapitalLetter , 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter , 4);

    return Key;
}

void FillArrayString (string arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        arr[i] = GenerateKey ();
    }
}

void PrintArray (string arr[100] , int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
    {
        cout << "Array[" << i << "]: " << arr[i] << endl;
    }
}


int main ()
{
    srand ((unsigned)time(NULL));

    string arr[100];

    int arrlength = ReadPositiveNumber("Enter the length of the array: ");

    FillArrayString(arr , arrlength);

    PrintArray(arr , arrlength);

}
