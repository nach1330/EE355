//
//  main.cpp
//  lab03_1_b
//
//  Created by Nate Chism on 2/14/22.
//

#include <iostream>
using namespace std;

void add(float *a, float *b){
    cout << "The sum of your numbers is " << *a + *b << endl;
}

void subtract(float *a, float *b){
    cout << "The difference of your numbers is " << *a - *b << endl;
}

void multiply(float *a, float *b){
    cout << "The product of your numbers is " << *a * *b << endl;
}

void divide(float *a, float *b){
    cout << "The quotient of your numbers is " << *a / *b << endl;
}

int main() {
    float num1;
    float num2;
    char choice;
    int quit = 0;
    
        cout << "Enter two numbers : ";
        cin >> num1 >> num2;
        cout << "HERE ARE YOUR NUMBERS :" << endl << "a : " << num1 << endl << "b : " << num2 << endl;
    
    while(!quit){
        cout << endl << endl << "Do you want to..." << endl << "a : add" << endl << "s : subtract" << endl << "m : multiply" << endl << "d : divide" << endl << "q : quit" << endl;
        cin >> choice;
    
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
    }
    return 0;
}
