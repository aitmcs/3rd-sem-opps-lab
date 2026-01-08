#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Addition of 2 integer nos: " << a + b << endl;
}

void add(double a, double b)
{
    cout << "Addition of 2 double nos: " << a + b << endl;
}

int main()
{
    add(2, 3);
    add(3.2, 4.5);
    return 0;
}
