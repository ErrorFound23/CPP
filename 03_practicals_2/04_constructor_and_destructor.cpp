#include <iostream>
#include <iomanip>
// #include <iostream.h>
// #include <iomanip.h>
#include <string.h>
#include <conio.h>
using namespace std;
#define size 50

class Student
{
    int *rollNo;
    char *name;

public:
    Student()
    {
        rollNo = new int;
        *rollNo = 0;
        name = new char[size];
        // name = NULL;
        name = (char *)"Unknown";
        // strcpy(name, "Unknown");
    }
    Student(int rn, const char nm[size])
    {
        rollNo = new int;
        *rollNo = rn;
        int i;
        name = new char[size];
        for (i = 0; nm[i] != '\0' && i < size - 1; i++)
            name[i] = nm[i];
        name[i] = '\0';
    }

    Student(const Student &s)
    {
        rollNo = new int;
        *rollNo = *(s.rollNo);
        int i;
        name = new char[size];
        for (i = 0; s.name[i] != '\0' && i < size - 1; i++)
            name[i] = s.name[i];
        name[i] = '\0';
    }
    void display()
    {
        cout << "Student details:- " << endl;
        cout << setw(10) << "Roll No.: " << *rollNo << endl
             << setw(10) << "Name: " << name << endl;
    }
    ~Student()
    {
        delete rollNo;
        delete[] name;
    }
};

int main()
{
    Student s1;
    Student s2(101, "Yash Rana");
    Student s3 = s2;
    // clrscr();

    s1.display();
    s2.display();
    s3.display();

    // getch();
    return 0;
}