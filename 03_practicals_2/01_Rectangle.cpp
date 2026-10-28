#include <iostream>
// #include <iostream.h>
#include <conio.h>
#include <iomanip>
using namespace std;
class Rectangle
{
    float length, width;

public:
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }
    void setLength(float l)
    {
        if (l >= 0.0 && l <= 20.0)
            length = l;
        else
            cout << "Invalid length!" << endl;
    }
    void setWidth(float w)
    {
        if (w >= 0.0 && w <= 20.0)
            width = w;
        else
            cout << "Invalid width!" << endl;
    }
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }
    float calculateArea()
    {
        return length * width;
    }
    float calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Rectangle r1;
    float l, w;
    // clrscr();
    cout << "Enter length and width: ";
    cin >> l >> w;
    r1.setLength(l);
    r1.setWidth(w);
    cout << setw(11) << "Length: " << r1.getLength() << endl;
    cout << setw(11) << "Width: " << r1.getWidth() << endl;
    cout << setw(11) << "Area: " << setprecision(2) << r1.calculateArea() << endl;
    cout << setw(11) << "Perimeter: " << setprecision(2) << r1.calculatePerimeter() << endl;
    return 0;
}