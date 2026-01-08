#include <iostream>
using namespace std;

class student
{
    int roll_no;
    char name[20];
    float m1, m2;

public:
    void read()
    {
        cout << "Enter roll no";
        cin >> roll_no;

        cout << "Enter name";
        cin >> name;

        cout << "Enter marks of subject 1";
        cin >> m1;

        cout << "Enter marks of subject 2";
        cin >> m2;
    }

    void print()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks obtained in 2 subjects: " << m1 << " " << m2 << endl;
        cout << "Total score of student: " << m1 + m2 << endl;
    }
};

int main()
{
    student s;
    s.read();
    cout << "Student Info" << endl;
    s.print();
    return 0;
}
