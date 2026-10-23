#include <iostream>
using namespace std;

class Complex
{
    float r; // real
    float i; // imaginary

public:
    Complex()
    {
        r = 0;
        i = 0;
    }
    Complex(float a, float b)
    {
        r = a;
        i = b;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }

    void display()
    {
        cout << r << " +" << i;
    }
};

int main()
{
    Complex c1(2.3, 4.5), c2(4.6, 8.4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}