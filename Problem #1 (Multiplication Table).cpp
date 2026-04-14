#include <iostream>
using namespace std;

void PrintTableHeader ()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n" << endl;
    cout << "\t";

    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << i << "\t";
    }
    cout << "\n-----------------------------------------------------------------------------------------\n";
}

string ColumnSperator (int Number)
{
    if (Number < 10)
        return "   |";
    else
        return "  |";
}

void PrintMultiplicationtable ()
{
    PrintTableHeader ();

    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << " " << i << ColumnSperator(i);

        for (int j = 1 ; j <= 10 ; j++)
        {
            cout << "\t" << i * j ;
        }
            cout << "\n";

    }
}

int main ()
{
    PrintMultiplicationtable ();
}
