#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
    float length, width;

public:
    Rectangle()
    {
        length = 1;
        width = 1;
    }

    void setLength(float l)
    {

        if ((l > 0.0) && (l < 20.0))
        {
            length = l;
        }
        else
        {
            cout << "Invalid length!!" << endl;
        }
    }

    void setWidth(float w)
    {

        if ((w > 0.0) && (w < 20.0))
        {
            width = w;
        }
        else
        {
            cout << "Invalid Width!!" << endl;
        }
    }

    void getLength()
    {
        cout << "Length: " << setprecision(2) << length << endl;
    }

    void getWidth()
    {
        cout << "Width: " << setprecision(2) << width << endl;
    }

    void calArea()
    {
        cout << "Area of rectangle: " << setprecision(2) << (length * width) << endl;
    }

    void calPerimetr()
    {
        cout << "Perimeter of rectangle: " << setprecision(2) << (2 * (length + width)) << endl;
    }
};
int main()
{
    Rectangle r1;
    float l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    r1.setLength(l);
    r1.setWidth(w);
    // cout << fixed << setprecision(2);
    r1.getLength();
    r1.getWidth();
    r1.calArea();
    r1.calPerimetr();

    return 0;
}

// #include <iostream>
// #include <iomanip>
// using namespace std;

// class Rectangle
// {
//     float length, width;

// public:
//     // Constructor: default values
//     Rectangle()
//     {
//         length = 1.0;
//         width = 1.0;
//     }

//     // Setter for length
//     void setLength(float l)
//     {
//         if (l > 0.0 && l < 20.0)
//             length = l;
//         else
//             cout << "Invalid length!" << endl;
//     }

//     // Setter for width
//     void setWidth(float w)
//     {
//         if (w > 0.0 && w < 20.0)
//             width = w;
//         else
//             cout << "Invalid width!" << endl;
//     }

//     // Getter for length
//     float getLength()
//     {
//         return length;
//     }

//     // Getter for width
//     float getWidth()
//     {
//         return width;
//     }

//     // Calculate area
//     float calculateArea()
//     {
//         return length * width;
//     }

//     // Calculate perimeter
//     float calculatePerimeter()
//     {
//         return 2 * (length + width);
//     }
// };

// int main()
// {
//     Rectangle r1;

//     float l, w;

//     cout << "Enter length and width: ";
//     cin >> l >> w;

//     r1.setLength(l);
//     r1.setWidth(w);

//     cout << fixed << setprecision(2);

//     cout << "Length: " << r1.getLength() << endl;
//     cout << "Width: " << r1.getWidth() << endl;

//     cout << "Area: " << r1.calculateArea() << endl;
//     cout << "Perimeter: "
//          << r1.calculatePerimeter() << endl;

//     return 0;
// }