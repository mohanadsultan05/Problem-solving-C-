#include <iostream>
#include <ctime>
using namespace std;


enum enCharType {SmallLetter = 1 , CapitalLetter = 2 ,
                   SpecialCharacter = 3 , Digit = 4};

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

int main ()
{
    srand ((unsigned)time(NULL));

    cout << RandomCharacter(SmallLetter) << endl;
    cout << RandomCharacter(CapitalLetter) << endl;
    cout << RandomCharacter(SpecialCharacter) << endl;
    cout << RandomCharacter(Digit) << endl;

}
