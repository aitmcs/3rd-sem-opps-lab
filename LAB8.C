#include <iostream>
using namespace std;

class alpha
{
protected:
    int i;

public:
    alpha(int a)
    {
        i = a;
    }

    ~alpha()
    {
        cout << "Alpha Destructor" << endl;
    }
};

class beta
{
protected:
    int j;

public:
    beta(int b)
    {
        j = b;
    }

    ~beta()
    {
        cout << "Beta Destructor" << endl;
    }
};

class gamma : public alpha, public beta
{
    int k;

public:
    gamma(int a, int b, int c) : alpha(a), beta(b)
    {
        k = c;
    }

    void print()
    {
        cout << "alpha = " << i << endl;
        cout << "beta = " << j << endl;
        cout << "gamma = " << k << endl;
    }

    ~gamma()
    {
        cout << "Gamma Destructor" << endl;
    }
};

int main()
{
    gamma g(10, 20, 30);
    g.print();
    return 0;
}
