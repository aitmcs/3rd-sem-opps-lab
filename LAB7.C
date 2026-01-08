#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};

class Subtraction
{
public:
    int sub(int a, int b)
    {
        return a - b;
    }
};

class Multiplication
{
public:
    int mul(int a, int b)
    {
        return a * b;
    }
};

class Arithmetic : public Addition, public Subtraction, public Multiplication
{
public:
    void display()
    {
        cout << "Addition: " << add(2, 3) << endl;
        cout << "Subtraction: " << sub(5, 2) << endl;
        cout << "Multiplication: " << mul(2, 10) << endl;
    }
};

int main()
{
    Arithmetic a;
    a.display();
    return 0;
}
