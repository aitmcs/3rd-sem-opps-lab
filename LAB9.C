#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char ch;

    // Open file in write mode
    file.open("sample.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file" << endl;
        return 0;
    }

    cout << "Writing into file successful" << endl;
    file << "ABCDE";
    file.close();

    // Open file in read mode
    file.open("sample.txt", ios::in);
    if (!file)
    {
        cout << "Error in opening file" << endl;
        return 0;
    }

    cout << "File content: ";
    while (file.get(ch))
    {
        cout << ch;
    }

    file.close();
    return 0;
}
