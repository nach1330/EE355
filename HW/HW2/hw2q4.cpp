#include <iostream>

using namespace std;

struct Pixels
{
    public: //allowed values to be accessed publically

    int color, style;
    
    Pixels(int a, int b){   //built constructor for class
        color = a;
        style = b;
    }
    void showPoint()
    {
        cout << color << "	" <<  style << endl;    //fixed cout formatting
    }
};

int main()
{
    Pixels Point1(7, 5);    //changed to proper constructor call
    Point1.showPoint();     //fixed function call
    Pixels Point2 = Point1;
    Point1.color += 2;      //reordered color value assignment
    Point2.showPoint();     //fixed function call

    return 0;
}

