//
//  main.cpp
//  lab03_1_b
//
//  Created by Nate Chism on 2/14/22.
//

#include <iostream>
using namespace std;


void add(float *a, float *b){       //add a and b
    cout << "The sum of your numbers is " << *a + *b << endl;
}

void subtract(float *a, float *b){  // subtract b from a
    cout << "The difference of your numbers is " << *a - *b << endl;
}

void multiply(float *a, float *b){  //multiply a and b
    cout << "The product of your numbers is " << *a * *b << endl;
}

void divide(float *a, float *b){    //divide a by b
    cout << "The quotient of your numbers is " << *a / *b << endl;
}

int main() {
    float num1;
    float num2;
    char choice;
    int quit = 0;
    
    //prompt the user for two numbers
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    cout << "HERE ARE YOUR NUMBERS :" << endl << "a : " << num1 << endl << "b : " << num2 << endl;
    
    while(!quit){
        //give the user a menu and options to choose from
        cout << endl << endl << "Do you want to..." << endl << "a : add" << endl << "s : subtract" << endl << "m : multiply" << endl << "d : divide" << endl << "q : quit" << endl;
        cin >> choice;
    
        //interpret the user input and call the appropriate function
        if (choice == 'a' || choice == 'A')
            add(&num1, &num2);
        else if (choice == 's' || choice == 'S')
            subtract(&num1, &num2);
        else if (choice == 'm' || choice == 'M')
            multiply(&num1, &num2);
        else if (choice == 'd' || choice == 'D')
            divide(&num1, &num2);
        else if (choice == 'q' || choice == 'Q')
            quit = 1;
        else
            cout << "Please enter a proper option." << endl;
    }
    return 0;
}
