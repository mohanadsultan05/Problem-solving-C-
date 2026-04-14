#include <iostream>
using namespace std;

string ReadName ()
{
    string Text = "";
    cout << "Enter the text: ";
    cin >> Text;

    return Text;
}

string EncryptionText (string Text , short EncryptionKey)
{
    for (int i = 0 ; i <= Text.length() ; i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}

string DecryptionText (string Text , short EncryptionKey)
{
    for (int i = 0 ; i <= Text.length() ; i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

int main ()
{
    string Text = ReadName();
    int EncryptionKey = 2;

    string EncryptionAfter = EncryptionText(Text,EncryptionKey);

    cout << "Text before  Encryption: " << Text << endl;
    cout << "Text after  Encryption: " << EncryptionAfter << endl;
    cout << "Text before  Decryption: " << DecryptionText(EncryptionAfter , EncryptionKey ) << endl;

}
