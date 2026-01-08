#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void writeTime(int h, int m, int s)
{
    ofstream file;
    file.open("time.dat", ios::binary);

    if (!file)
    {
        cout << "Error in creating file" << endl;
        return;
    }

    file.write((char *)&h, sizeof(h));
    file.write((char *)&m, sizeof(m));
    file.write((char *)&s, sizeof(s));

    file.close();
}

void readTime(int &h, int &m, int &s)
{
    ifstream file;
    file.open("time.dat", ios::binary);

    if (!file)
    {
        cout << "Error in opening file" << endl;
        return;
    }

    file.read((char *)&h, sizeof(h));
    file.read((char *)&m, sizeof(m));
    file.read((char *)&s, sizeof(s));

    file.close();
}

int main()
{
    int h, m, s;

    cout << "Enter hour: ";
    cin >> h;
    cout << "Enter minute: ";
    cin >> m;
    cout << "Enter second: ";
    cin >> s;

    writeTime(h, m, s);

    h = m = s = 0;

    readTime(h, m, s);

    cout << "The time is ";
    cout << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m << ":"
         << setw(2) << setfill('0') << s << endl;

    return 0;
}
