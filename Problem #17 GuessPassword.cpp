#include <iostream>
using namespace std;

string ReadPassword ()
{
    string word = "";
    cout << "Please enter the word: " << endl;
    cin >> word;

    return word;
}

bool GuessPassword (string Password)
{
    int counter = 0;
    string word = "";

    for (int i = 65 ; i <= 90 ; i++)
    {
        for (int j = 65 ; j <= 90 ; j++)
        {
            for (int k = 65 ; k <= 90 ; k++)
            {
                counter ++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << "Trail[" << counter << "]: " << word << endl;
                if (word == Password)
                {
                    cout << "Found after " << counter << " Trial(s)" << endl;
                    return true;
                }
                 word = "";

            }
        }
    }
    return false;
}

int main ()
{
   GuessPassword(ReadPassword());
}

