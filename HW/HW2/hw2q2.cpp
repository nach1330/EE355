#include <iostream>

using namespace std;

//HW2 Question 2


class Sample
{
private:
    int x;
    double y;
public :
    Sample(){ //Constructor 1 - initializes x and y to 0
        x = 0;
        y = 0;
    } 
    Sample(int x_n){ //Constructor 2 - sets x to passed value, initializes y to 0
        x  = x_n;
        y = 0;
    }
    Sample(int x_n, int y_n){ //Constructor 3 - sets x and y to new values passed to constructor
        x = x_n;
        y = y_n;
    }
    Sample(int x_n, double y_n){ //Constructor 4 - sets x and y to new values passed to constructor
        x = x_n;
        y = y_n;
    }
};



/*

Instructions:

i. Write the definition of the constructor 1 so that the private member variables are initialized to 0.
ii. Write the definition of the constructor 2 so that the private member variable x is initialized according to the value of the parameter, and the private member variable y is initialized to 0.
iii. Write the definition of the constructors 3 and 4 so that the private
member variables are initialized according to the values of the parameters.

*/

int main(){


    return 0;
}
