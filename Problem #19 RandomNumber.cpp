#include <iostream>
#include <ctime>
using namespace std;

int RandomNumber (int From , int To)
{
    int randnum = rand () % (To - From + 1 );

    return randnum;
}

int main ()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(1,10) << endl;
    cout << RandomNumber(1,10) << endl;
    cout << RandomNumber(1,10) << endl;

}
