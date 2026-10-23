#include <iostream>
#include <iomanip>
using namespace std;

class Complex
{
    float r, i;

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

    void showData()
    {
        cout << r << " " << i << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }

    friend Complex operator+(float, Complex);
};

Complex operator+(float a, Complex c)
{
    Complex temp;
    temp.r = c.r;
    temp.i = c.i + a;
    return temp;
}

int main()
{
    Complex c1(4.3, 5.3), c2(4.6, 7.6), c3, c4(23.0, 6.5), c5, c6;
    c1.showData();
    c2.showData();

    c3 = c1.operator+(c2); // c3 = c1 + c2;
    c3.showData();

    c4.showData();

    c5 = c3 + c4;
    c5.showData();

    c6 = operator+(2.3, c4); // c6 = 2.3 + c4;
    c6.showData();

    return 0;
}