//
//  main.cpp
//  lab03_1_a
//
//  Created by Nate Chism on 2/14/22.
//

#include <iostream>

using namespace std;


//https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/
//lines 17 - 18 coded using the above link

void number_swap(int *num1, int *num2){
    if (num1 == num2)   //pointers point to each other
        return;
    //swap values
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main() {
    int a = 2435, b = 35;
    cout << "Before Swap : ";
    cout << a << " : " << b << endl;
    number_swap(&a, &b);
    cout << "After Swap : ";
    cout << a << " : " << b << endl;
    return 0;
}
